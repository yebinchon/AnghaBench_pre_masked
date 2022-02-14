
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_mv_range; scalar_t__ b_transform_8x8; } ;
struct TYPE_10__ {scalar_t__ i_rc_method; double f_rf_constant; int i_vbv_max_bitrate; int i_vbv_buffer_size; } ;
struct TYPE_11__ {scalar_t__ i_cqm_preset; int i_width; int i_height; int i_fps_den; int i_fps_num; int i_keyint_max; int i_frame_reference; int i_level_idc; scalar_t__ b_interlaced; TYPE_1__ analyse; TYPE_2__ rc; int i_bframe_pyramid; scalar_t__ i_bframe; scalar_t__ b_fake_interlaced; } ;
typedef TYPE_3__ x264_param_t ;
struct TYPE_12__ {int level_idc; int dpb; int bitrate; int cpb; int mv_range; int frame_size; int mbps; scalar_t__ frame_only; } ;
typedef TYPE_4__ x264_level_t ;
struct TYPE_13__ {int bit_depth; } ;
typedef TYPE_5__ x264_api_t ;
typedef int int64_t ;


 int FUNC_0 (void*,int) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 char** VAR_3 ;
 int* VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char const*) ;
 TYPE_4__* VAR_5 ;

int FUNC_7(const x264_api_t *VAR_6, x264_param_t *VAR_7,
                     const char *VAR_8, const char *VAR_9,
                     int VAR_10)
{
    float VAR_11;
    const x264_level_t *VAR_12 = ((void*)0);
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;




    if (VAR_8 != ((void*)0) &&
        FUNC_5(VAR_8, VAR_3[0]) != 0)
    {
        for (VAR_13 = 0; VAR_4[VAR_13]; VAR_13++)
        {
            if (!FUNC_6(VAR_3[VAR_13], VAR_8))
            {
                int VAR_20 = VAR_4[VAR_13];
                for (VAR_13 = 0; VAR_5[VAR_13].level_idc; VAR_13++)
                {
                    if (VAR_5[VAR_13].level_idc == VAR_20)
                    {
                        VAR_12 = &VAR_5[VAR_13];
                        break;
                    }
                }
                break;
            }
        }
        if (VAR_12 == ((void*)0))
        {

            FUNC_2("apply_h264_level: invalid level %s", VAR_8);
            return -1;
        }
    }
    else if(VAR_8 != ((void*)0) &&
            !FUNC_5(VAR_8, VAR_3[0]))
    {

        return 0;
    }
    else
    {

        FUNC_2("apply_h264_level: no level specified");
        return -1;
    }




    enum
    {

        HB_ENCX264_PROFILE_MAIN,

        HB_ENCX264_PROFILE_HIGH,
        HB_ENCX264_PROFILE_HIGH10,

        HB_ENCX264_PROFILE_HIGH444,
    } VAR_21;
    {

        if (VAR_7->rc.i_rc_method == VAR_2 &&
            VAR_7->rc.f_rf_constant < 1.0)
        {
            VAR_21 = HB_ENCX264_PROFILE_HIGH444;
        }
        else if (VAR_7->analyse.b_transform_8x8 ||
                 VAR_7->i_cqm_preset != VAR_1)
        {
            if (VAR_6->bit_depth == 10)
            {
                VAR_21 = HB_ENCX264_PROFILE_HIGH10;
            }
            else
            {
                VAR_21 = HB_ENCX264_PROFILE_HIGH;
            }
        }
        else
        {
            VAR_21 = HB_ENCX264_PROFILE_MAIN;
        }
    }




    if (VAR_7->i_width <= 0 || VAR_7->i_height <= 0)
    {

        FUNC_2("apply_h264_level: invalid resolution (width: %d, height: %d)",
                 VAR_7->i_width, VAR_7->i_height);
        return -1;
    }




    VAR_19 = 0;




    if (VAR_12->frame_only && (VAR_7->b_interlaced ||
                                   VAR_7->b_fake_interlaced))
    {
        if (VAR_10)
        {
            FUNC_3("apply_h264_level [warning]: interlaced flag not supported for level %s, disabling",
                   VAR_8);
        }
        VAR_19 = 1;
        VAR_7->b_interlaced = VAR_7->b_fake_interlaced = 0;
    }




    VAR_16 = (VAR_7->i_width + 15) / 16;
    VAR_17 = (VAR_7->i_height + 15) / 16;
    if (VAR_7->b_interlaced || VAR_7->b_fake_interlaced)
    {

        VAR_17 = (VAR_17 + 1) & ~1;
    }
    VAR_14 = VAR_16 * VAR_17;
    if (VAR_7->i_fps_den <= 0 || VAR_7->i_fps_num <= 0)
    {
        VAR_15 = 0;
        VAR_11 = 0.0;
    }
    else
    {
        VAR_15 = (int64_t)VAR_14 * VAR_7->i_fps_num / VAR_7->i_fps_den;
        VAR_11 = (float)VAR_7->i_fps_num / VAR_7->i_fps_den;
    }




    if (VAR_7->i_keyint_max != 1)
    {
        int VAR_22 =
            FUNC_0(FUNC_1(VAR_12->dpb / VAR_14, 16), 1);
        VAR_7->i_frame_reference =
            FUNC_1(VAR_22, VAR_7->i_frame_reference);




        if (VAR_22 < 2)
        {
            VAR_7->i_bframe = 0;
        }
        else if (VAR_22 < 4)
        {
            VAR_7->i_bframe_pyramid = VAR_0;
        }
    }




    if (VAR_21 != HB_ENCX264_PROFILE_HIGH444)
    {

        int VAR_23;
        VAR_23 = VAR_21 == HB_ENCX264_PROFILE_HIGH10 ? 12 :
                     VAR_21 == HB_ENCX264_PROFILE_HIGH ? 5 : 4;
        if (!VAR_7->rc.i_vbv_max_bitrate)
        {
            VAR_7->rc.i_vbv_max_bitrate = (VAR_12->bitrate * VAR_23) / 4;
        }
        else
        {
            VAR_7->rc.i_vbv_max_bitrate =
                FUNC_1(VAR_7->rc.i_vbv_max_bitrate,
                    (VAR_12->bitrate * VAR_23) / 4);
        }
        if (!VAR_7->rc.i_vbv_buffer_size)
        {
            VAR_7->rc.i_vbv_buffer_size = (VAR_12->cpb * VAR_23) / 4;
        }
        else
        {
            VAR_7->rc.i_vbv_buffer_size =
                FUNC_1(VAR_7->rc.i_vbv_buffer_size,
                    (VAR_12->cpb * VAR_23) / 4);
        }
    }




    VAR_7->analyse.i_mv_range =
        FUNC_1(VAR_7->analyse.i_mv_range,
            VAR_12->mv_range >> !!VAR_7->b_interlaced);
    if (VAR_12->frame_size < VAR_14)
    {
        if (VAR_10)
        {
            FUNC_3("apply_h264_level [warning]: frame size (%dx%d, %d macroblocks) too high for level %s (max. %d macroblocks)",
                   VAR_16 * 16, VAR_17 * 16, VAR_14, VAR_8,
                   VAR_12->frame_size);
        }
        VAR_19 = 1;
    }
    else if (VAR_12->mbps < VAR_15)
    {
        if (VAR_10)
        {
            FUNC_3("apply_h264_level [warning]: framerate (%.3f) too high for level %s at %dx%d (max. %.3f)",
                   VAR_11, VAR_8, VAR_7->i_width, VAR_7->i_height,
                   (float)VAR_12->mbps / VAR_14);
        }
        VAR_19 = 1;
    }




    VAR_18 = FUNC_4(VAR_12->frame_size * 8);
    if (VAR_16 > VAR_18)
    {
        if (VAR_10)
        {
            FUNC_3("apply_h264_level [warning]: frame too wide (%d) for level %s (max. %d)",
                   VAR_7->i_width, VAR_8, VAR_18 * 16);
        }
        VAR_19 = 1;
    }
    if (VAR_17 > VAR_18)
    {
        if (VAR_10)
        {
            FUNC_3("apply_h264_level [warning]: frame too tall (%d) for level %s (max. %d)",
                   VAR_7->i_height, VAR_8, VAR_18 * 16);
        }
        VAR_19 = 1;
    }




    VAR_7->i_level_idc = VAR_12->level_idc;
    return VAR_19;
}
