
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int vps_max_layers; int vps_max_sub_layers; int vps_temporal_id_nesting_flag; int vps_sub_layer_ordering_info_present_flag; int* vps_max_dec_pic_buffering; int* vps_num_reorder_pics; int* vps_max_latency_increase; int vps_max_layer_id; int vps_num_layer_sets; int vps_timing_info_present_flag; int vps_poc_proportional_to_timing_flag; int vps_num_ticks_poc_diff_one; int vps_num_hrd_parameters; int vps_time_scale; int vps_num_units_in_tick; int ptl; } ;
typedef int PutBitContext ;
typedef TYPE_1__ HEVCVPS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int) ;

int FUNC_9(HEVCVPS *VAR_1, unsigned int VAR_2,
                           uint8_t *VAR_3, int VAR_4)
{
    PutBitContext VAR_5;
    int VAR_6, VAR_7;

    FUNC_3(&VAR_5, VAR_3, VAR_4);
    FUNC_4(&VAR_5, 4, VAR_2);
    FUNC_4(&VAR_5, 2, 3);
    FUNC_4(&VAR_5, 6, VAR_1->vps_max_layers - 1);
    FUNC_4(&VAR_5, 3, VAR_1->vps_max_sub_layers - 1);
    FUNC_4(&VAR_5, 1, VAR_1->vps_temporal_id_nesting_flag);
    FUNC_4(&VAR_5, 16, 0xffff);

    FUNC_8(&VAR_5, &VAR_1->ptl, VAR_1->vps_max_sub_layers);

    FUNC_4(&VAR_5, 1, VAR_1->vps_sub_layer_ordering_info_present_flag);
    for (VAR_6 = VAR_1->vps_sub_layer_ordering_info_present_flag ? 0 : VAR_1->vps_max_layers - 1;
         VAR_6 < VAR_1->vps_max_sub_layers; VAR_6++) {
        FUNC_7(&VAR_5, VAR_1->vps_max_dec_pic_buffering[VAR_6] - 1);
        FUNC_7(&VAR_5, VAR_1->vps_num_reorder_pics[VAR_6]);
        FUNC_7(&VAR_5, VAR_1->vps_max_latency_increase[VAR_6] + 1);
    }

    FUNC_4(&VAR_5, 6, VAR_1->vps_max_layer_id);
    FUNC_7(&VAR_5, VAR_1->vps_num_layer_sets - 1);

    if (VAR_1->vps_num_layer_sets > 1) {
        FUNC_1(((void*)0), "Writing layer_id_included_flag");
        return VAR_0;
    }

    FUNC_4(&VAR_5, 1, VAR_1->vps_timing_info_present_flag);
    if (VAR_1->vps_timing_info_present_flag) {
        FUNC_5(&VAR_5, VAR_1->vps_num_units_in_tick);
        FUNC_5(&VAR_5, VAR_1->vps_time_scale);
        FUNC_4(&VAR_5, 1, VAR_1->vps_poc_proportional_to_timing_flag);
        if (VAR_1->vps_poc_proportional_to_timing_flag)
            FUNC_7(&VAR_5, VAR_1->vps_num_ticks_poc_diff_one - 1);

        FUNC_7(&VAR_5, VAR_1->vps_num_hrd_parameters);
        if (VAR_1->vps_num_hrd_parameters) {
            FUNC_1(((void*)0), "Writing HRD parameters");
            return VAR_0;
        }
    }

    FUNC_4(&VAR_5, 1, 0);

    FUNC_4(&VAR_5, 1, 1);
    FUNC_0(&VAR_5);

    VAR_7 = FUNC_6(&VAR_5) / 8;
    FUNC_2(&VAR_5);

    return VAR_7;
}
