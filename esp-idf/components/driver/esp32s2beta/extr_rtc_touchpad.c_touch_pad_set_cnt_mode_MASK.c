
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int touch_tie_opt_t ;
typedef size_t touch_pad_t ;
typedef int touch_cnt_slope_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* touch_pad; } ;
struct TYPE_3__ {int dac; int tie_opt; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

esp_err_t FUNC_2(touch_pad_t VAR_2, touch_cnt_slope_t VAR_3, touch_tie_opt_t VAR_4)
{
    FUNC_0();
    VAR_1.touch_pad[VAR_2].tie_opt = VAR_4;
    VAR_1.touch_pad[VAR_2].dac = VAR_3;
    FUNC_1();
    return VAR_0;
}
