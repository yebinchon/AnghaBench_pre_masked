
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {void* den; void* num; } ;
struct TYPE_11__ {void* chroma_sample_location; } ;
struct TYPE_10__ {int video_signal_type_present_flag; int full_range; int colour_description_present_flag; int timing_info_present_flag; unsigned int num_units_in_tick; unsigned int time_scale; int fixed_frame_rate_flag; int nal_hrd_parameters_present_flag; int vcl_hrd_parameters_present_flag; int pic_struct_present_flag; int bitstream_restriction_flag; unsigned int num_reorder_frames; void* colorspace; void* color_trc; void* color_primaries; TYPE_3__ sar; } ;
typedef TYPE_1__ SPS ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,TYPE_1__*) ;
 TYPE_3__* VAR_7 ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 unsigned int FUNC_9 (int *,int) ;
 void* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static inline int FUNC_12(GetBitContext *VAR_8, AVCodecContext *VAR_9,
                                        SPS *VAR_10)
{
    int VAR_11;
    unsigned int VAR_12;

    VAR_11 = FUNC_7(VAR_8);

    if (VAR_11) {
        VAR_12 = FUNC_6(VAR_8, 8);
        if (VAR_12 == VAR_6) {
            VAR_10->sar.num = FUNC_6(VAR_8, 16);
            VAR_10->sar.den = FUNC_6(VAR_8, 16);
        } else if (VAR_12 < FUNC_0(VAR_7)) {
            VAR_10->sar = VAR_7[VAR_12];
        } else {
            FUNC_4(VAR_9, VAR_4, "illegal aspect ratio\n");
            return VAR_3;
        }
    } else {
        VAR_10->sar.num =
        VAR_10->sar.den = 0;
    }

    if (FUNC_7(VAR_8))
        FUNC_7(VAR_8);

    VAR_10->video_signal_type_present_flag = FUNC_7(VAR_8);
    if (VAR_10->video_signal_type_present_flag) {
        FUNC_6(VAR_8, 3);
        VAR_10->full_range = FUNC_7(VAR_8);

        VAR_10->colour_description_present_flag = FUNC_7(VAR_8);
        if (VAR_10->colour_description_present_flag) {
            VAR_10->color_primaries = FUNC_6(VAR_8, 8);
            VAR_10->color_trc = FUNC_6(VAR_8, 8);
            VAR_10->colorspace = FUNC_6(VAR_8, 8);


            if (!FUNC_1(VAR_10->color_primaries))
                VAR_10->color_primaries = VAR_0;
            if (!FUNC_3(VAR_10->color_trc))
                VAR_10->color_trc = VAR_2;
            if (!FUNC_2(VAR_10->colorspace))
                VAR_10->colorspace = VAR_1;
        }
    }


    if (FUNC_7(VAR_8)) {

        VAR_9->chroma_sample_location = FUNC_10(VAR_8) + 1;
        FUNC_10(VAR_8);
    }

    if (FUNC_11(VAR_8) && FUNC_8(VAR_8) < 10) {
        FUNC_4(VAR_9, VAR_5, "Truncated VUI\n");
        return 0;
    }

    VAR_10->timing_info_present_flag = FUNC_7(VAR_8);
    if (VAR_10->timing_info_present_flag) {
        unsigned VAR_13 = FUNC_9(VAR_8, 32);
        unsigned VAR_14 = FUNC_9(VAR_8, 32);
        if (!VAR_13 || !VAR_14) {
            FUNC_4(VAR_9, VAR_4,
                   "time_scale/num_units_in_tick invalid or unsupported (%u/%u)\n",
                   VAR_14, VAR_13);
            VAR_10->timing_info_present_flag = 0;
        } else {
            VAR_10->num_units_in_tick = VAR_13;
            VAR_10->time_scale = VAR_14;
        }
        VAR_10->fixed_frame_rate_flag = FUNC_7(VAR_8);
    }

    VAR_10->nal_hrd_parameters_present_flag = FUNC_7(VAR_8);
    if (VAR_10->nal_hrd_parameters_present_flag)
        if (FUNC_5(VAR_8, VAR_9, VAR_10) < 0)
            return VAR_3;
    VAR_10->vcl_hrd_parameters_present_flag = FUNC_7(VAR_8);
    if (VAR_10->vcl_hrd_parameters_present_flag)
        if (FUNC_5(VAR_8, VAR_9, VAR_10) < 0)
            return VAR_3;
    if (VAR_10->nal_hrd_parameters_present_flag ||
        VAR_10->vcl_hrd_parameters_present_flag)
        FUNC_7(VAR_8);
    VAR_10->pic_struct_present_flag = FUNC_7(VAR_8);
    if (!FUNC_8(VAR_8))
        return 0;
    VAR_10->bitstream_restriction_flag = FUNC_7(VAR_8);
    if (VAR_10->bitstream_restriction_flag) {
        FUNC_7(VAR_8);
        FUNC_10(VAR_8);
        FUNC_10(VAR_8);
        FUNC_10(VAR_8);
        FUNC_10(VAR_8);
        VAR_10->num_reorder_frames = FUNC_10(VAR_8);
        FUNC_10(VAR_8);

        if (FUNC_8(VAR_8) < 0) {
            VAR_10->num_reorder_frames = 0;
            VAR_10->bitstream_restriction_flag = 0;
        }

        if (VAR_10->num_reorder_frames > 16U
                                                                         ) {
            FUNC_4(VAR_9, VAR_4,
                   "Clipping illegal num_reorder_frames %d\n",
                   VAR_10->num_reorder_frames);
            VAR_10->num_reorder_frames = 16;
            return VAR_3;
        }
    }

    return 0;
}
