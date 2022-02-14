
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * wifi_netif_driver_t ;
typedef int wifi_interface_t ;
typedef int esp_netif_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static esp_err_t FUNC_3(wifi_interface_t VAR_2, esp_netif_t* VAR_3)
{
    wifi_netif_driver_t VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1, "Failed to create wifi interface handle");
        return VAR_0;
    }
    return FUNC_1(VAR_3, VAR_4);
}
