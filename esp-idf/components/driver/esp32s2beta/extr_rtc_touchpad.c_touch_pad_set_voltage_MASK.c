
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ touch_volt_atten_t ;
typedef scalar_t__ touch_low_volt_t ;
typedef scalar_t__ touch_high_volt_t ;
typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__ touch_drange; scalar_t__ touch_drefl; scalar_t__ touch_drefh; } ;
struct TYPE_4__ {TYPE_1__ touch_ctrl2; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

esp_err_t FUNC_2(touch_high_volt_t VAR_5, touch_low_volt_t VAR_6, touch_volt_atten_t VAR_7)
{
    FUNC_0();
    if (VAR_5 > VAR_3) {
        VAR_1.touch_ctrl2.touch_drefh = VAR_5;
    }
    if (VAR_6 > VAR_4) {
        VAR_1.touch_ctrl2.touch_drefl = VAR_6;
    }
    if (VAR_7 > VAR_2) {
        VAR_1.touch_ctrl2.touch_drange = VAR_7;
    }
    FUNC_1();
    return VAR_0;
}
