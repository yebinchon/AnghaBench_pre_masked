
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int touch_meas_num; int touch_sleep_cycles; } ;
struct TYPE_4__ {TYPE_1__ touch_ctrl1; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

esp_err_t FUNC_0(uint16_t *VAR_2, uint16_t *VAR_3)
{
    if (VAR_2) {
        *VAR_2 = VAR_1.touch_ctrl1.touch_sleep_cycles;
    }
    if (VAR_3) {
        *VAR_3 = VAR_1.touch_ctrl1.touch_meas_num;
    }
    return VAR_0;
}
