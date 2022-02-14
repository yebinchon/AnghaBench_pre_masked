
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int port; } ;
struct TYPE_7__ {TYPE_1__ config; } ;
struct TYPE_9__ {TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_4__ httpd_config; int password; int ssid; } ;
typedef TYPE_3__ wifi_prov_softap_config_t ;
typedef int protocomm_t ;
typedef TYPE_4__ protocomm_httpd_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,char*,int ,int *,int ) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_7(protocomm_t *VAR_3, void *VAR_4)
{
    if (!VAR_3) {
        FUNC_0(VAR_2, "Protocomm handle cannot be null");
        return VAR_0;
    }

    if (!VAR_4) {
        FUNC_0(VAR_2, "Cannot start with null configuration");
        return VAR_0;
    }

    wifi_prov_softap_config_t *VAR_5 = (wifi_prov_softap_config_t *) VAR_4;

    protocomm_httpd_config_t *VAR_6 = &VAR_5->httpd_config;


    esp_err_t VAR_7 = FUNC_4(VAR_3, VAR_6);
    if (VAR_7 != VAR_1) {
        FUNC_0(VAR_2, "Failed to start protocomm HTTP server");
        return VAR_7;
    }


    VAR_7 = FUNC_6(VAR_5->ssid, VAR_5->password);
    if (VAR_7 != VAR_1) {
        FUNC_0(VAR_2, "Failed to start Wi-Fi AP");
        FUNC_5(VAR_3);
        return VAR_7;
    }





    VAR_7 = FUNC_2("Wi-Fi Provisioning Service", "_esp_wifi_prov", "_tcp",
                           VAR_5->httpd_config.data.config.port, ((void*)0), 0);
    if (VAR_7 != VAR_1) {


        FUNC_1(VAR_2, "Error adding mDNS service! Check if mDNS is running");
    } else {


        VAR_7 |= FUNC_3("_esp_wifi_prov", "_tcp", "version_endpoint", "/proto-ver");
        VAR_7 |= FUNC_3("_esp_wifi_prov", "_tcp", "session_endpoint", "/prov-session");
        VAR_7 |= FUNC_3("_esp_wifi_prov", "_tcp", "config_endpoint", "/prov-config");
        if (VAR_7 != VAR_1) {
            FUNC_0(VAR_2, "Error adding mDNS service text item");
        }
    }
    return VAR_1;
}
