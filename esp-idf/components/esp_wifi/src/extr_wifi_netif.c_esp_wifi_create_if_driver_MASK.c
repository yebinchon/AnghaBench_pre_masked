
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* wifi_netif_driver_t ;
typedef int wifi_interface_t ;
struct wifi_netif_driver {int dummy; } ;
struct TYPE_5__ {int post_attach; } ;
struct TYPE_6__ {TYPE_1__ base; int wifi_if; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int VAR_1 ;

wifi_netif_driver_t FUNC_2(wifi_interface_t VAR_2)
{
    wifi_netif_driver_t VAR_3 = FUNC_1(1, sizeof(struct wifi_netif_driver));
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, "No memory to create a wifi interface handle");
        return ((void*)0);
    }
    VAR_3->wifi_if = VAR_2;
    VAR_3->base.post_attach = VAR_1;
    return VAR_3;
}
