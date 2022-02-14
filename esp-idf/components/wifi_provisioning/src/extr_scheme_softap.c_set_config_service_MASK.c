
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int password; int ssid; } ;
typedef TYPE_1__ wifi_prov_softap_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static esp_err_t FUNC_2(void *VAR_3, const char *VAR_4, const char *VAR_5)
{
    if (!VAR_3) {
        FUNC_0(VAR_2, "Cannot set null configuration");
        return VAR_0;
    }

    if (!VAR_4) {
        FUNC_0(VAR_2, "Service name cannot be NULL");
        return VAR_0;
    }

    wifi_prov_softap_config_t *VAR_6 = (wifi_prov_softap_config_t *) VAR_3;
    FUNC_1(VAR_6->ssid, VAR_4, sizeof(VAR_6->ssid));
    if (VAR_5) {
        FUNC_1(VAR_6->password, VAR_5, sizeof(VAR_6->password));
    }
    return VAR_1;
}
