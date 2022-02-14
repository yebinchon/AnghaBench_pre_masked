
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float green_metadata_type; float period_type; float num_seconds; float num_pictures; float xsd_metric_type; scalar_t__ xsd_metric_value; scalar_t__ percent_alpha_point_deblocking_instance; scalar_t__ percent_six_tap_filtering; scalar_t__ percent_intra_coded_macroblocks; scalar_t__ percent_non_zero_macroblocks; } ;
typedef TYPE_1__ H264SEIGreenMetaData ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(const H264SEIGreenMetaData *VAR_1, void *VAR_2)
{
    FUNC_0(VAR_2, VAR_0, "Green Metadata Info SEI message\n");
    FUNC_0(VAR_2, VAR_0, "  green_metadata_type: %d\n", VAR_1->green_metadata_type);

    if (VAR_1->green_metadata_type == 0) {
        FUNC_0(VAR_2, VAR_0, "  green_metadata_period_type: %d\n", VAR_1->period_type);

        if (VAR_1->period_type == 2)
            FUNC_0(VAR_2, VAR_0, "  green_metadata_num_seconds: %d\n", VAR_1->num_seconds);
        else if (VAR_1->period_type == 3)
            FUNC_0(VAR_2, VAR_0, "  green_metadata_num_pictures: %d\n", VAR_1->num_pictures);

        FUNC_0(VAR_2, VAR_0, "  SEI GREEN Complexity Metrics: %f %f %f %f\n",
               (float)VAR_1->percent_non_zero_macroblocks/255,
               (float)VAR_1->percent_intra_coded_macroblocks/255,
               (float)VAR_1->percent_six_tap_filtering/255,
               (float)VAR_1->percent_alpha_point_deblocking_instance/255);

    } else if (VAR_1->green_metadata_type == 1) {
        FUNC_0(VAR_2, VAR_0, "  xsd_metric_type: %d\n", VAR_1->xsd_metric_type);

        if (VAR_1->xsd_metric_type == 0)
            FUNC_0(VAR_2, VAR_0, "  xsd_metric_value: %f\n",
                   (float)VAR_1->xsd_metric_value/100);
    }
}
