
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wifi_prov_ctx_t ;
struct TYPE_9__ {int auth_mode; int channel; int ssid; int bssid; int ip_addr; } ;
struct TYPE_10__ {scalar_t__ wifi_state; int fail_reason; TYPE_1__ conn_info; } ;
typedef TYPE_2__ wifi_prov_config_get_data_t ;
struct TYPE_11__ {int authmode; int primary; scalar_t__ ssid; scalar_t__ bssid; } ;
typedef TYPE_3__ wifi_ap_record_t ;
struct TYPE_12__ {int ip; } ;
typedef TYPE_4__ esp_netif_ip_info_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_10(wifi_prov_config_get_data_t *VAR_5, wifi_prov_ctx_t **VAR_6)
{

    FUNC_9(VAR_5, 0, sizeof(wifi_prov_config_get_data_t));

    if (FUNC_3(&VAR_5->wifi_state) != VAR_1) {
        FUNC_1(VAR_2, "Prov app not running");
        return VAR_0;
    }

    if (VAR_5->wifi_state == VAR_3) {
        FUNC_0(VAR_2, "Connected state");


        esp_netif_ip_info_t VAR_7;
        FUNC_6(FUNC_5("WIFI_STA_DEF"), &VAR_7);
        FUNC_4(&VAR_7.ip, VAR_5->conn_info.ip_addr, sizeof(VAR_5->conn_info.ip_addr));


        wifi_ap_record_t VAR_8;
        FUNC_7(&VAR_8);
        FUNC_8(VAR_5->conn_info.bssid, (char *)VAR_8.bssid, sizeof(VAR_8.bssid));
        FUNC_8(VAR_5->conn_info.ssid, (char *)VAR_8.ssid, sizeof(VAR_8.ssid));
        VAR_5->conn_info.channel = VAR_8.primary;
        VAR_5->conn_info.auth_mode = VAR_8.authmode;
    } else if (VAR_5->wifi_state == VAR_4) {
        FUNC_0(VAR_2, "Disconnected state");


        FUNC_2(&VAR_5->fail_reason);
    } else {
        FUNC_0(VAR_2, "Connecting state");
    }
    return VAR_1;
}
