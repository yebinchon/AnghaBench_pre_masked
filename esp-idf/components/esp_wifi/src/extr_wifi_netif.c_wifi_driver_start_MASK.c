
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* wifi_netif_driver_t ;
typedef int esp_netif_t ;
struct TYPE_7__ {int driver_free_rx_buffer; int transmit; TYPE_2__* handle; } ;
typedef TYPE_3__ esp_netif_driver_ifconfig_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int * netif; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static esp_err_t FUNC_1(esp_netif_t * VAR_2, void * VAR_3)
{
    wifi_netif_driver_t VAR_4 = VAR_3;
    VAR_4->base.netif = VAR_2;
    esp_netif_driver_ifconfig_t VAR_5 = {
            .handle = VAR_4,
            .transmit = VAR_1,
            .driver_free_rx_buffer = VAR_0
    };

    return FUNC_0(VAR_2, &VAR_5);
}
