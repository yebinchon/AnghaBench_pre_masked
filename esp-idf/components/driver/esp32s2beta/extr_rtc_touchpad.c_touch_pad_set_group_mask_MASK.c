
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int touch_scan_pad_map; } ;
struct TYPE_8__ {TYPE_1__ touch_scan_ctrl; } ;
struct TYPE_6__ {int touch_outen; } ;
struct TYPE_7__ {TYPE_2__ sar_touch_conf; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;

esp_err_t FUNC_2(uint16_t VAR_4)
{
    FUNC_0();
    VAR_1.touch_scan_ctrl.touch_scan_pad_map |= (VAR_4 & VAR_3);
    VAR_2.sar_touch_conf.touch_outen |= (VAR_4 & VAR_3);
    FUNC_1();
    return VAR_0;
}
