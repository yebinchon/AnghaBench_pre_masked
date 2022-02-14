
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_prov_ctx_t ;
typedef int wifi_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static esp_err_t FUNC_5(wifi_prov_ctx_t **VAR_3)
{
    wifi_config_t *VAR_4 = FUNC_3(VAR_3);
    if (!VAR_4) {
        FUNC_1(VAR_2, "Wi-Fi config not set");
        return VAR_0;
    }

    esp_err_t VAR_5 = FUNC_4(VAR_4);
    if (VAR_5 == VAR_1) {
        FUNC_0(VAR_2, "Wi-Fi Credentials Applied");
    } else {
        FUNC_1(VAR_2, "Failed to apply Wi-Fi Credentials");
    }

    FUNC_2(VAR_3);
    return VAR_5;
}
