
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ (* get_status_handler ) (TYPE_5__*,int *) ;int ctx; } ;
typedef TYPE_4__ wifi_prov_config_handlers_t ;
struct TYPE_19__ {int auth_mode; int channel; int ssid; int bssid; int ip_addr; } ;
struct TYPE_21__ {scalar_t__ wifi_state; scalar_t__ fail_reason; TYPE_3__ conn_info; } ;
typedef TYPE_5__ wifi_prov_config_get_data_t ;
struct TYPE_22__ {int status; int fail_reason; void* state_case; int sta_state; TYPE_7__* connected; } ;
typedef TYPE_6__ uint8_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_18__ {int len; TYPE_6__* data; } ;
struct TYPE_17__ {TYPE_6__* data; int len; } ;
struct TYPE_23__ {int auth_mode; int channel; TYPE_6__* ip4_addr; TYPE_2__ bssid; TYPE_1__ ssid; } ;
typedef TYPE_7__ WifiConnectedState ;
struct TYPE_24__ {TYPE_6__* resp_get_status; int payload_case; } ;
typedef TYPE_8__ WiFiConfigPayload ;
typedef TYPE_6__ RespGetStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_7__*) ;

__attribute__((used)) static esp_err_t FUNC_10(WiFiConfigPayload *VAR_18,
                                        WiFiConfigPayload *VAR_19, void *VAR_20)
{
    FUNC_0(VAR_6, "Enter cmd_get_status_handler");
    wifi_prov_config_handlers_t *VAR_21 = (wifi_prov_config_handlers_t *) VAR_20;
    if (!VAR_21) {
        FUNC_1(VAR_6, "Command invoked without handlers");
        return VAR_0;
    }

    RespGetStatus *VAR_22 = (RespGetStatus *) FUNC_3(sizeof(RespGetStatus));
    if (!VAR_22) {
        FUNC_1(VAR_6, "Error allocating memory");
        return VAR_1;
    }
    FUNC_4(VAR_22);

    wifi_prov_config_get_data_t VAR_23;
    if (VAR_21->get_status_handler(&VAR_23, &VAR_21->ctx) == VAR_2) {
        if (VAR_23.wifi_state == VAR_12) {
            VAR_22->sta_state = VAR_15;
            VAR_22->state_case = VAR_3;
        } else if (VAR_23.wifi_state == VAR_11) {
            VAR_22->sta_state = VAR_14;
            VAR_22->state_case = VAR_3;
            WifiConnectedState *VAR_24 = (WifiConnectedState *)(
                                            FUNC_3(sizeof(WifiConnectedState)));
            if (!VAR_24) {
                FUNC_1(VAR_6, "Error allocating memory");
                return VAR_1;
            }
            VAR_22->connected = VAR_24;
            FUNC_9(VAR_24);

            VAR_24->ip4_addr = FUNC_5(VAR_23.conn_info.ip_addr);
            if (VAR_24->ip4_addr == ((void*)0)) {
                FUNC_2(VAR_22);
                return VAR_1;
            }

            VAR_24->bssid.len = sizeof(VAR_23.conn_info.bssid);
            VAR_24->bssid.data = (uint8_t *) FUNC_7(VAR_23.conn_info.bssid,
                                                        sizeof(VAR_23.conn_info.bssid));
            if (VAR_24->bssid.data == ((void*)0)) {
                FUNC_2(VAR_24->ip4_addr);
                FUNC_2(VAR_22);
                return VAR_1;
            }

            VAR_24->ssid.len = FUNC_6(VAR_23.conn_info.ssid);
            VAR_24->ssid.data = (uint8_t *) FUNC_5(VAR_23.conn_info.ssid);
            if (VAR_24->ssid.data == ((void*)0)) {
                FUNC_2(VAR_24->bssid.data);
                FUNC_2(VAR_24->ip4_addr);
                FUNC_2(VAR_22);
                return VAR_1;
            }

            VAR_24->channel = VAR_23.conn_info.channel;
            VAR_24->auth_mode = VAR_23.conn_info.auth_mode;
        } else if (VAR_23.wifi_state == VAR_13) {
            VAR_22->sta_state = VAR_16;
            VAR_22->state_case = VAR_4;

            if (VAR_23.fail_reason == VAR_10) {
                VAR_22->fail_reason = VAR_7;
            } else if (VAR_23.fail_reason == VAR_9) {
                VAR_22->fail_reason = VAR_8;
            }
        }
        VAR_22->status = VAR_5;
    }

    VAR_19->payload_case = VAR_17;
    VAR_19->resp_get_status = VAR_22;
    return VAR_2;
}
