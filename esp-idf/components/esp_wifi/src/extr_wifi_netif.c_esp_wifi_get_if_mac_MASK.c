
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* wifi_netif_driver_t ;
typedef int wifi_interface_t ;
typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int wifi_if; } ;


 int FUNC_0 (int ,int *) ;

esp_err_t FUNC_1(wifi_netif_driver_t VAR_0, uint8_t VAR_1[6])
{
    wifi_interface_t VAR_2 = VAR_0->wifi_if;

    return FUNC_0(VAR_2, VAR_1);
}
