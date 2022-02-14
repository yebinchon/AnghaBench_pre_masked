
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int touch_pad_conn_type_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int touch_inactive_connection; } ;
struct TYPE_4__ {TYPE_1__ touch_scan_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;

esp_err_t FUNC_1(touch_pad_conn_type_t *VAR_3)
{
    FUNC_0(VAR_3 != ((void*)0), "parameter is NULL", VAR_0);
    *VAR_3 = VAR_2.touch_scan_ctrl.touch_inactive_connection;
    return VAR_1;
}
