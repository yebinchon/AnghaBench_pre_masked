
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int touch_xpd_wait; } ;
struct TYPE_4__ {void* touch_meas_num; void* touch_sleep_cycles; } ;
struct TYPE_6__ {TYPE_2__ touch_ctrl2; TYPE_1__ touch_ctrl1; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;

esp_err_t FUNC_2(uint16_t VAR_3, uint16_t VAR_4)
{
    FUNC_0();

    VAR_1.touch_ctrl1.touch_sleep_cycles = VAR_3;

    VAR_1.touch_ctrl1.touch_meas_num = VAR_4;

    VAR_1.touch_ctrl2.touch_xpd_wait = VAR_2;
    FUNC_1();
    return VAR_0;
}
