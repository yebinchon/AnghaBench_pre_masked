
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wifi_prov_sta_fail_reason_t ;
typedef int esp_err_t ;
struct TYPE_2__ {scalar_t__ wifi_state; int wifi_disconnect_reason; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_3(wifi_prov_sta_fail_reason_t *VAR_7)
{
    if (!VAR_6) {
        FUNC_1(VAR_3, "Provisioning manager not initialized");
        return VAR_0;
    }

    FUNC_0(VAR_6);
    if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0)) {
        FUNC_2(VAR_6);
        return VAR_1;
    }

    if (VAR_5->wifi_state != VAR_4) {
        FUNC_2(VAR_6);
        return VAR_1;
    }

    *VAR_7 = VAR_5->wifi_disconnect_reason;
    FUNC_2(VAR_6);
    return VAR_2;
}
