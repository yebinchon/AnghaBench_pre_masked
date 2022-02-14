
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int touch_fsm_mode_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int touch_start_force; } ;
struct TYPE_4__ {TYPE_1__ touch_ctrl2; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;

esp_err_t FUNC_1(touch_fsm_mode_t *VAR_2)
{
    FUNC_0(VAR_2 != ((void*)0));
    *VAR_2 = VAR_1.touch_ctrl2.touch_start_force;
    return VAR_0;
}
