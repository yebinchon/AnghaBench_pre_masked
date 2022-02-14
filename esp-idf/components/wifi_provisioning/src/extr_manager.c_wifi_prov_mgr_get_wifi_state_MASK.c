
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wifi_prov_sta_state_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int wifi_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_3(wifi_prov_sta_state_t *VAR_6)
{
    if (!VAR_5) {
        FUNC_1(VAR_3, "Provisioning manager not initialized");
        return VAR_0;
    }

    FUNC_0(VAR_5);
    if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0)) {
        FUNC_2(VAR_5);
        return VAR_1;
    }

    *VAR_6 = VAR_4->wifi_state;
    FUNC_2(VAR_5);
    return VAR_2;
}
