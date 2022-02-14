
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int green_metadata_type; int period_type; void* xsd_metric_value; void* xsd_metric_type; void* percent_alpha_point_deblocking_instance; void* percent_six_tap_filtering; void* percent_intra_coded_macroblocks; void* percent_non_zero_macroblocks; void* num_pictures; void* num_seconds; } ;
typedef TYPE_1__ H264SEIGreenMetaData ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(H264SEIGreenMetaData *VAR_0, GetBitContext *VAR_1)
{
    VAR_0->green_metadata_type = FUNC_0(VAR_1, 8);

    if (VAR_0->green_metadata_type == 0) {
        VAR_0->period_type = FUNC_0(VAR_1, 8);

        if (VAR_0->period_type == 2)
            VAR_0->num_seconds = FUNC_0(VAR_1, 16);
        else if (VAR_0->period_type == 3)
            VAR_0->num_pictures = FUNC_0(VAR_1, 16);

        VAR_0->percent_non_zero_macroblocks = FUNC_0(VAR_1, 8);
        VAR_0->percent_intra_coded_macroblocks = FUNC_0(VAR_1, 8);
        VAR_0->percent_six_tap_filtering = FUNC_0(VAR_1, 8);
        VAR_0->percent_alpha_point_deblocking_instance = FUNC_0(VAR_1, 8);

    } else if (VAR_0->green_metadata_type == 1) {
        VAR_0->xsd_metric_type = FUNC_0(VAR_1, 8);
        VAR_0->xsd_metric_value = FUNC_0(VAR_1, 16);
    }

    return 0;
}
