
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mdns_if_t ;
typedef int esp_netif_t ;


 int VAR_0 ;
 int ** VAR_1 ;

__attribute__((used)) static mdns_if_t FUNC_0(esp_netif_t *VAR_2)
{
    for (int VAR_3=0; VAR_3<VAR_0; ++VAR_3) {
        if (VAR_2 == VAR_1[VAR_3])
            return VAR_3;
    }
    return VAR_0;
}
