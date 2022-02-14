
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* priv_data; } ;
struct TYPE_9__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_12__ {scalar_t__ num_ticks_poc_diff_one; TYPE_1__ tick_rate; } ;
struct TYPE_10__ {int general_level_idc; } ;
struct TYPE_11__ {int vps_time_scale; int vps_num_units_in_tick; int vps_timing_info_present_flag; scalar_t__ vps_num_ticks_poc_diff_one_minus1; int vps_poc_proportional_to_timing_flag; TYPE_2__ profile_tier_level; } ;
typedef TYPE_3__ H265RawVPS ;
typedef TYPE_4__ H265MetadataContext ;
typedef TYPE_5__ AVBSFContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_2,
                                    H265RawVPS *VAR_3)
{
    H265MetadataContext *VAR_4 = VAR_2->priv_data;

    if (VAR_4->tick_rate.num && VAR_4->tick_rate.den) {
        int VAR_5, VAR_6;

        FUNC_0(&VAR_5, &VAR_6, VAR_4->tick_rate.num, VAR_4->tick_rate.den,
                  VAR_1 > VAR_0 ? VAR_1 : VAR_0);

        VAR_3->vps_time_scale = VAR_5;
        VAR_3->vps_num_units_in_tick = VAR_6;

        VAR_3->vps_timing_info_present_flag = 1;

        if (VAR_4->num_ticks_poc_diff_one > 0) {
            VAR_3->vps_num_ticks_poc_diff_one_minus1 =
                VAR_4->num_ticks_poc_diff_one - 1;
            VAR_3->vps_poc_proportional_to_timing_flag = 1;
        } else if (VAR_4->num_ticks_poc_diff_one == 0) {
            VAR_3->vps_poc_proportional_to_timing_flag = 0;
        }
    }

    FUNC_1(VAR_2, &VAR_3->profile_tier_level.general_level_idc);

    return 0;
}
