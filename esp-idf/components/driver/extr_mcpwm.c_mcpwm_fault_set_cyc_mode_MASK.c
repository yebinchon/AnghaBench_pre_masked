
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef scalar_t__ mcpwm_fault_signal_t ;
typedef void* mcpwm_action_on_pwmxb_t ;
typedef void* mcpwm_action_on_pwmxa_t ;
typedef int esp_err_t ;
struct TYPE_8__ {TYPE_3__* channel; } ;
struct TYPE_6__ {int f0_cbc; int f1_cbc; int f2_cbc; void* b_cbc_u; void* b_cbc_d; void* a_cbc_u; void* a_cbc_d; scalar_t__ f2_ost; scalar_t__ f1_ost; scalar_t__ f0_ost; } ;
struct TYPE_5__ {int cbcpulse; } ;
struct TYPE_7__ {TYPE_2__ tz_cfg0; TYPE_1__ tz_cfg1; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

esp_err_t FUNC_4(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, mcpwm_fault_signal_t VAR_12,
                                   mcpwm_action_on_pwmxa_t VAR_13, mcpwm_action_on_pwmxb_t VAR_14)
{
    FUNC_1(VAR_10 < VAR_7, VAR_8, VAR_0);
    FUNC_1(VAR_11 < VAR_6, VAR_5, VAR_0);
    FUNC_2(&VAR_9);
    VAR_2[VAR_10]->channel[VAR_11].tz_cfg1.cbcpulse = FUNC_0(0);
    if (VAR_12 == VAR_3) {
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f0_cbc = 1;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f0_ost = 0;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_cbc_d = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_cbc_u = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_cbc_d = VAR_14;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_cbc_u = VAR_14;
    } else if (VAR_12 == VAR_4) {
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f1_cbc = 1;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f1_ost = 0;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_cbc_d = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_cbc_u = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_cbc_d = VAR_14;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_cbc_u = VAR_14;
    } else {
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f2_cbc = 1;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.f2_ost = 0;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_cbc_d = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.a_cbc_u = VAR_13;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_cbc_d = VAR_14;
        VAR_2[VAR_10]->channel[VAR_11].tz_cfg0.b_cbc_u = VAR_14;
    }
    FUNC_3(&VAR_9);
    return VAR_1;
}
