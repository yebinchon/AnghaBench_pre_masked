
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_netif_t ;
struct TYPE_8__ {int * driver_free_rx_buffer; int transmit; TYPE_3__* handle; } ;
typedef TYPE_2__ esp_netif_driver_ifconfig_t ;
struct TYPE_7__ {int * netif; } ;
struct TYPE_9__ {TYPE_1__ base; } ;
typedef TYPE_3__ esp_eth_driver_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static esp_err_t FUNC_6(esp_netif_t * VAR_3, void * VAR_4)
{
    uint8_t VAR_5[6];
    esp_eth_driver_t *VAR_6 = VAR_4;
    VAR_6->base.netif = VAR_3;


    esp_netif_driver_ifconfig_t VAR_7 = {
            .handle = VAR_6,
            .transmit = VAR_2,
            .driver_free_rx_buffer = ((void*)0)
    };

    FUNC_0(FUNC_4(VAR_3, &VAR_7));
    FUNC_3(VAR_6, VAR_0, VAR_5);
    FUNC_1(VAR_1, "%x %x %x %x %x %x", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5]);

    FUNC_5(VAR_3, VAR_5);
    FUNC_1(VAR_1, "ETH netif started");
    return FUNC_2(VAR_6);
}
