
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int channel; int bssid; int password; int ssid; } ;
typedef TYPE_5__ wifi_prov_config_set_data_t ;
struct TYPE_19__ {scalar_t__ (* set_config_handler ) (TYPE_5__*,int *) ;int ctx; } ;
typedef TYPE_6__ wifi_prov_config_handlers_t ;
typedef int req_data ;
typedef scalar_t__ esp_err_t ;
struct TYPE_20__ {TYPE_8__* resp_set_config; int payload_case; TYPE_4__* cmd_set_config; } ;
typedef TYPE_7__ WiFiConfigPayload ;
struct TYPE_21__ {int status; } ;
struct TYPE_16__ {int len; int data; } ;
struct TYPE_15__ {int len; int data; } ;
struct TYPE_14__ {int len; int data; } ;
struct TYPE_17__ {int channel; TYPE_3__ bssid; TYPE_2__ passphrase; TYPE_1__ ssid; } ;
typedef TYPE_8__ RespSetConfig ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *) ;

__attribute__((used)) static esp_err_t FUNC_7(WiFiConfigPayload *VAR_8,
                                        WiFiConfigPayload *VAR_9, void *VAR_10)
{
    FUNC_0(VAR_6, "Enter cmd_set_config_handler");
    wifi_prov_config_handlers_t *VAR_11 = (wifi_prov_config_handlers_t *) VAR_10;
    if (!VAR_11) {
        FUNC_1(VAR_6, "Command invoked without handlers");
        return VAR_0;
    }

    RespSetConfig *VAR_12 = (RespSetConfig *) FUNC_2(sizeof(RespSetConfig));
    if (VAR_12 == ((void*)0)) {
        FUNC_1(VAR_6, "Error allocating memory");
        return VAR_1;
    }
    FUNC_5(VAR_12);

    wifi_prov_config_set_data_t VAR_13;
    FUNC_4(&VAR_13, 0, sizeof(VAR_13));






    VAR_12->status = VAR_4;
    if (VAR_8->cmd_set_config->bssid.len != 0 &&
        VAR_8->cmd_set_config->bssid.len != sizeof(VAR_13.bssid)) {
        FUNC_0(VAR_6, "Received invalid BSSID");
    } else if (VAR_8->cmd_set_config->ssid.len >= sizeof(VAR_13.ssid)) {
        FUNC_0(VAR_6, "Received invalid SSID");
    } else if (VAR_8->cmd_set_config->passphrase.len >= sizeof(VAR_13.password)) {
        FUNC_0(VAR_6, "Received invalid Passphrase");
    } else {



        FUNC_3(VAR_13.ssid, VAR_8->cmd_set_config->ssid.data,
               VAR_8->cmd_set_config->ssid.len);
        FUNC_3(VAR_13.password, VAR_8->cmd_set_config->passphrase.data,
               VAR_8->cmd_set_config->passphrase.len);
        FUNC_3(VAR_13.bssid, VAR_8->cmd_set_config->bssid.data,
               VAR_8->cmd_set_config->bssid.len);
        VAR_13.channel = VAR_8->cmd_set_config->channel;
        if (VAR_11->set_config_handler(&VAR_13, &VAR_11->ctx) == VAR_2) {
            VAR_12->status = VAR_5;
        } else {
            VAR_12->status = VAR_3;
        }
    }

    VAR_9->payload_case = VAR_7;
    VAR_9->resp_set_config = VAR_12;
    return VAR_2;
}
