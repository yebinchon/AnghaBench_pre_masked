
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int protocomm_t ;
typedef int protocomm_console_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static esp_err_t FUNC_2(protocomm_t *VAR_4, void *VAR_5)
{
    if (!VAR_4) {
        FUNC_0(VAR_3, "Protocomm handle cannot be null");
        return VAR_0;
    }

    if (!VAR_5) {
        FUNC_0(VAR_3, "Cannot start with null configuration");
        return VAR_0;
    }

    protocomm_console_config_t *VAR_6 = (protocomm_console_config_t *) VAR_5;


    esp_err_t VAR_7 = FUNC_1(VAR_4, VAR_6);
    if (VAR_7 != VAR_2) {
        FUNC_0(VAR_3, "Failed to start protocomm HTTP server");
        return VAR_1;
    }
    return VAR_2;
}
