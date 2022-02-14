
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int touch_volt_atten_t ;
typedef int touch_low_volt_t ;
typedef int touch_high_volt_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int touch_drange; int touch_drefl; int touch_drefh; } ;
struct TYPE_4__ {TYPE_1__ touch_ctrl2; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

esp_err_t FUNC_0(touch_high_volt_t *VAR_2, touch_low_volt_t *VAR_3, touch_volt_atten_t *VAR_4)
{
    if (VAR_2) {
        *VAR_2 = VAR_1.touch_ctrl2.touch_drefh;
    }
    if (VAR_3) {
        *VAR_3 = VAR_1.touch_ctrl2.touch_drefl;
    }
    if (VAR_4) {
        *VAR_4 = VAR_1.touch_ctrl2.touch_drange;
    }
    return VAR_0;
}
