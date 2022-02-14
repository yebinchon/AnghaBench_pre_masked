
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int protocomm_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static esp_err_t FUNC_3(protocomm_t *VAR_2)
{
    esp_err_t VAR_3 = FUNC_2(VAR_2);
    if (VAR_3 != VAR_0) {
        FUNC_0(VAR_1, "Error occurred while stopping protocomm_httpd");
    }

    FUNC_1("_esp_wifi_prov", "_tcp");
    return VAR_3;
}
