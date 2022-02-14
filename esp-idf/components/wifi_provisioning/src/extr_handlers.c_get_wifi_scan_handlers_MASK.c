
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctx; int scan_result; int scan_status; int scan_start; } ;
typedef TYPE_1__ wifi_prov_scan_handlers_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

esp_err_t FUNC_0(wifi_prov_scan_handlers_t *VAR_5)
{
    if (!VAR_5) {
        return VAR_0;
    }
    VAR_5->scan_start = VAR_3;
    VAR_5->scan_status = VAR_4;
    VAR_5->scan_result = VAR_2;
    VAR_5->ctx = ((void*)0);
    return VAR_1;
}
