
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_netif_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int *) ;

esp_netif_t* FUNC_4(esp_netif_t* VAR_2)
{
    esp_err_t VAR_3;
    esp_netif_t* VAR_4;
    if ((VAR_3 = FUNC_1()) != VAR_0) {
        FUNC_0(VAR_1, "Failed to lock esp-netif list with %d", VAR_3);
        return ((void*)0);
    }
    VAR_4 = FUNC_3(VAR_2);
    FUNC_2();
    return VAR_4;
}
