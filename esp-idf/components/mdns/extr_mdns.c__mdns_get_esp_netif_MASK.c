
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mdns_if_t ;
typedef int esp_netif_t ;


 size_t VAR_0 ;
 int ** VAR_1 ;

esp_netif_t *FUNC_0(mdns_if_t VAR_2)
{
    if (VAR_2 < VAR_0) {
        return VAR_1[VAR_2];
    }
    return ((void*)0);
}
