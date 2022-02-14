
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ touch_fsm_mode_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int touch_slp_timer_en; scalar_t__ touch_start_force; scalar_t__ touch_start_en; } ;
struct TYPE_4__ {TYPE_1__ touch_ctrl2; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;

esp_err_t FUNC_2(touch_fsm_mode_t VAR_3)
{
    FUNC_0();
    VAR_1.touch_ctrl2.touch_start_en = 0;
    VAR_1.touch_ctrl2.touch_start_force = VAR_3;
    VAR_1.touch_ctrl2.touch_slp_timer_en = (VAR_3 == VAR_2 ? 1 : 0);
    FUNC_1();
    return VAR_0;
}
