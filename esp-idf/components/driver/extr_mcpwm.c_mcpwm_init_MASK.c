
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
struct TYPE_14__ {int duty_mode; int cmpr_b; int cmpr_a; int counter_mode; int frequency; } ;
typedef TYPE_6__ mcpwm_config_t ;
typedef int esp_err_t ;
struct TYPE_13__ {int global_up_en; int global_force_up; } ;
struct TYPE_12__ {int operator1_sel; int operator2_sel; scalar_t__ operator0_sel; } ;
struct TYPE_9__ {int prescale; } ;
struct TYPE_15__ {TYPE_5__ update_cfg; TYPE_4__ timer_sel; TYPE_3__* timer; TYPE_1__ clk_cfg; } ;
struct TYPE_10__ {int mode; } ;
struct TYPE_11__ {TYPE_2__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (size_t,size_t,int,int ) ;
 int FUNC_2 (size_t,size_t,int,int ) ;
 int FUNC_3 (size_t,size_t,int ) ;
 int VAR_9 ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

esp_err_t FUNC_8(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, const mcpwm_config_t *VAR_12)
{
    FUNC_0(VAR_10 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_11 < VAR_5, VAR_4, VAR_0);
    FUNC_5(VAR_8 + VAR_10);
    FUNC_6(&VAR_9);
    VAR_2[VAR_10]->clk_cfg.prescale = VAR_3;
    FUNC_3(VAR_10, VAR_11, VAR_12->frequency);
    VAR_2[VAR_10]->timer[VAR_11].mode.mode = VAR_12 ->counter_mode;
    FUNC_1(VAR_10, VAR_11, 0, VAR_12->cmpr_a);
    FUNC_1(VAR_10, VAR_11, 1, VAR_12->cmpr_b);
    FUNC_2(VAR_10, VAR_11, 0, VAR_12->duty_mode);
    FUNC_2(VAR_10, VAR_11, 1, VAR_12->duty_mode);
    FUNC_4(VAR_10, VAR_11);
    VAR_2[VAR_10]->timer_sel.operator0_sel = 0;
    VAR_2[VAR_10]->timer_sel.operator1_sel = 1;
    VAR_2[VAR_10]->timer_sel.operator2_sel = 2;
    VAR_2[VAR_10]->update_cfg.global_up_en = 1;
    VAR_2[VAR_10]->update_cfg.global_force_up = 1;
    VAR_2[VAR_10]->update_cfg.global_force_up = 0;
    FUNC_7(&VAR_9);
    return VAR_1;
}
