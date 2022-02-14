
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_15__ {scalar_t__ color_primaries; scalar_t__ transfer_characteristics; scalar_t__ matrix_coefficients; scalar_t__ color_range; scalar_t__ chroma_sample_position; scalar_t__ num_ticks_per_picture; TYPE_1__ tick_rate; } ;
struct TYPE_14__ {int color_description_present_flag; scalar_t__ color_primaries; scalar_t__ transfer_characteristics; scalar_t__ matrix_coefficients; scalar_t__ color_range; scalar_t__ chroma_sample_position; int subsampling_y; int subsampling_x; scalar_t__ mono_chrome; } ;
struct TYPE_12__ {int time_scale; int num_units_in_display_tick; int equal_picture_interval; scalar_t__ num_ticks_per_picture_minus_1; } ;
struct TYPE_13__ {int timing_info_present_flag; TYPE_3__ timing_info; TYPE_5__ color_config; } ;
struct TYPE_11__ {TYPE_6__* priv_data; } ;
typedef TYPE_2__ AVBSFContext ;
typedef TYPE_3__ AV1RawTimingInfo ;
typedef TYPE_4__ AV1RawSequenceHeader ;
typedef TYPE_5__ AV1RawColorConfig ;
typedef TYPE_6__ AV1MetadataContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int*,int*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_6,
                                               AV1RawSequenceHeader *VAR_7)
{
    AV1MetadataContext *VAR_8 = VAR_6->priv_data;
    AV1RawColorConfig *VAR_9 = &VAR_7->color_config;
    AV1RawTimingInfo *VAR_10 = &VAR_7->timing_info;

    if (VAR_8->color_primaries >= 0 ||
        VAR_8->transfer_characteristics >= 0 ||
        VAR_8->matrix_coefficients >= 0) {
        VAR_9->color_description_present_flag = 1;

        if (VAR_8->color_primaries >= 0)
            VAR_9->color_primaries = VAR_8->color_primaries;
        if (VAR_8->transfer_characteristics >= 0)
            VAR_9->transfer_characteristics = VAR_8->transfer_characteristics;
        if (VAR_8->matrix_coefficients >= 0)
            VAR_9->matrix_coefficients = VAR_8->matrix_coefficients;
    }

    if (VAR_8->color_range >= 0) {
        if (VAR_9->color_primaries == VAR_0 &&
            VAR_9->transfer_characteristics == VAR_2 &&
            VAR_9->matrix_coefficients == VAR_1) {
            FUNC_0(VAR_6, VAR_3, "Warning: color_range cannot be set "
                   "on RGB streams encoded in BT.709 sRGB.\n");
        } else {
            VAR_9->color_range = VAR_8->color_range;
        }
    }

    if (VAR_8->chroma_sample_position >= 0) {
        if (VAR_9->mono_chrome || !VAR_9->subsampling_x || !VAR_9->subsampling_y) {
            FUNC_0(VAR_6, VAR_3, "Warning: chroma_sample_position "
                   "can only be set for 4:2:0 streams.\n");
        } else {
            VAR_9->chroma_sample_position = VAR_8->chroma_sample_position;
        }
    }

    if (VAR_8->tick_rate.num && VAR_8->tick_rate.den) {
        int VAR_11, VAR_12;

        FUNC_1(&VAR_11, &VAR_12, VAR_8->tick_rate.num, VAR_8->tick_rate.den,
                  VAR_5 > VAR_4 ? VAR_5 : VAR_4);

        VAR_10->time_scale = VAR_11;
        VAR_10->num_units_in_display_tick = VAR_12;
        VAR_7->timing_info_present_flag = 1;

        if (VAR_8->num_ticks_per_picture > 0) {
            VAR_10->equal_picture_interval = 1;
            VAR_10->num_ticks_per_picture_minus_1 =
                VAR_8->num_ticks_per_picture - 1;
        }
    }

    return 0;
}
