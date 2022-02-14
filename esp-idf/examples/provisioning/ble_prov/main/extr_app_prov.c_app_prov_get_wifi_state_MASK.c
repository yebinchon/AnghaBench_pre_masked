
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wifi_prov_sta_state_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int wifi_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

esp_err_t FUNC_0(wifi_prov_sta_state_t* VAR_3)
{
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_3 = VAR_2->wifi_state;
    return VAR_1;
}
