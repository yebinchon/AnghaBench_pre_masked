
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef scalar_t__ mcpwm_fault_signal_t ;
typedef void* mcpwm_action_on_pwmxb_t ;
typedef void* mcpwm_action_on_pwmxa_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* channel; } ;
struct TYPE_4__ {int f0_ost; int f1_ost; int f2_ost; void* b_ost_u; void* b_ost_d; void* a_ost_u; void* a_ost_d; scalar_t__ f2_cbc; scalar_t__ f1_cbc; scalar_t__ f0_cbc; } ;
struct TYPE_5__ {TYPE_1__ tz_cfg0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, mcpwm_fault_signal_t VAR_12,
                                       mcpwm_action_on_pwmxa_t VAR_13, mcpwm_action_on_pwmxb_t VAR_14)
{
    FUNC_0(VAR_10 < VAR_7, VAR_8, VAR_0);
    FUNC_0(VAR_11 < VAR_6, VAR_5, VAR_0);
    FUNC_1(&VAR_9);
    if (VAR_12 == VAR_3) {
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f0_ost = 1;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f0_cbc = 0;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_ost_d = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_ost_u = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_ost_d = VAR_14;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_ost_u = VAR_14;
    } else if (VAR_12 == VAR_4) {
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f1_ost = 1;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f1_cbc = 0;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_ost_d = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_ost_u = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_ost_d = VAR_14;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_ost_u = VAR_14;
    } else {
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f2_ost = 1;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f2_cbc = 0;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_ost_d = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_ost_u = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_ost_d = VAR_14;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_ost_u = VAR_14;
    }
    FUNC_2(&VAR_9);
    return VAR_1;
}
