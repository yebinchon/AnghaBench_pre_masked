
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_netif_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int *) ;
 int ** VAR_2 ;

esp_err_t FUNC_1(esp_netif_t *VAR_3)
{
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    VAR_2[VAR_1] = VAR_3;
    return FUNC_0(VAR_1, VAR_3);
}
