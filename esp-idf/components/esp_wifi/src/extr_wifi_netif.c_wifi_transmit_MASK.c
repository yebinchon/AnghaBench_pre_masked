
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* wifi_netif_driver_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int wifi_if; } ;


 int FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static esp_err_t FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2)
{
    wifi_netif_driver_t VAR_3 = VAR_0;
    return FUNC_0(VAR_3->wifi_if, VAR_1, VAR_2);
}
