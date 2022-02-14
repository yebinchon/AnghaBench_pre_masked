
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
struct TYPE_8__ {scalar_t__ carrier_os_mode; int carrier_ivt_mode; int pulse_width_in_os; int carrier_duty; int carrier_period; } ;
typedef TYPE_3__ mcpwm_carrier_config_t ;
typedef int esp_err_t ;
struct TYPE_9__ {TYPE_2__* channel; } ;
struct TYPE_6__ {scalar_t__ in_invert; } ;
struct TYPE_7__ {TYPE_1__ carrier_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (size_t,size_t,int ) ;
 int FUNC_4 (size_t,size_t,int ) ;
 int FUNC_5 (size_t,size_t,int ) ;
 int FUNC_6 (size_t,size_t,int ) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

esp_err_t FUNC_9(mcpwm_unit_t VAR_9, mcpwm_timer_t VAR_10, const mcpwm_carrier_config_t *VAR_11)
{
    FUNC_0(VAR_9 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_10 < VAR_5, VAR_4, VAR_0);
    FUNC_7(&VAR_8);
    FUNC_1(VAR_9, VAR_10);
    FUNC_6(VAR_9, VAR_10, VAR_11->carrier_period);
    FUNC_5(VAR_9, VAR_10, VAR_11->carrier_duty);
    if (VAR_11->carrier_os_mode == VAR_3) {
        FUNC_3(VAR_9, VAR_10, VAR_11->pulse_width_in_os);
    } else {
        FUNC_2(VAR_9, VAR_10);
    }
    FUNC_4(VAR_9, VAR_10, VAR_11->carrier_ivt_mode);
    VAR_2[VAR_9]->channel[VAR_10].carrier_cfg.in_invert = 0;
    FUNC_8(&VAR_8);
    return VAR_1;
}
