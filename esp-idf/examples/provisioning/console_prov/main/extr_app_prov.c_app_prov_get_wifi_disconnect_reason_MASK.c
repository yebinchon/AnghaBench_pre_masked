
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wifi_prov_sta_fail_reason_t ;
typedef int esp_err_t ;
struct TYPE_2__ {scalar_t__ wifi_state; int wifi_disconnect_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

esp_err_t FUNC_0(wifi_prov_sta_fail_reason_t* VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_3->wifi_state != VAR_2) {
        return VAR_0;
    }

    *VAR_4 = VAR_3->wifi_disconnect_reason;
    return VAR_1;
}
