
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * wifi_rxcb_t ;
typedef TYPE_2__* wifi_netif_driver_t ;
typedef size_t wifi_interface_t ;
typedef int esp_netif_receive_t ;
typedef void* esp_err_t ;
struct TYPE_4__ {void* netif; } ;
struct TYPE_5__ {size_t wifi_if; TYPE_1__ base; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 void* VAR_3 ;
 int VAR_4 ;


 void* FUNC_1 (size_t,int *) ;
 void** VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

esp_err_t FUNC_2(wifi_netif_driver_t VAR_9, esp_netif_receive_t VAR_10, void * VAR_11)
{
    if (VAR_9->base.netif != VAR_11) {
        FUNC_0(VAR_4, "Invalid argument: supplied netif=%p does not equal to interface netif=%p", VAR_11, VAR_9->base.netif);
        return VAR_0;
    }
    wifi_interface_t VAR_12 = VAR_9->wifi_if;
    VAR_6[VAR_12] = VAR_10;
    wifi_rxcb_t VAR_13 = ((void*)0);
    esp_err_t VAR_14;

    switch (VAR_12)
    {
    case 128:
        VAR_13 = VAR_8;
        break;

    case 129:
        VAR_13 = VAR_7;
        break;

    default:
        break;
    }

    if (VAR_13 == ((void*)0)) {
        FUNC_0(VAR_4, "Unknown wifi interface id if=%d", VAR_12);
        return VAR_2;
    }

    if ((VAR_14 = FUNC_1(VAR_12, VAR_13)) != VAR_3) {
        FUNC_0(VAR_4, "esp_wifi_internal_reg_rxcb for if=%d failed with %d", VAR_12, VAR_14);
        return VAR_1;
    }

    VAR_5[VAR_12] = VAR_9->base.netif;
    return VAR_3;
}
