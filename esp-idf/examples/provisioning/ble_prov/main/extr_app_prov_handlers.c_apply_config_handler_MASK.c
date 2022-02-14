
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_prov_ctx_t ;
typedef int wifi_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int * FUNC_4 (int **) ;

__attribute__((used)) static esp_err_t FUNC_5(wifi_prov_ctx_t **VAR_3)
{
    wifi_config_t *VAR_4 = FUNC_4(VAR_3);
    if (!VAR_4) {
        FUNC_0(VAR_2, "WiFi config not set");
        return VAR_0;
    }

    FUNC_2(VAR_4);
    FUNC_1(VAR_2, "WiFi Credentials Applied");

    FUNC_3(VAR_3);
    return VAR_1;
}
