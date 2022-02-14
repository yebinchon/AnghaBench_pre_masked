
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_18__ {int member_0; } ;
struct TYPE_17__ {int member_0; } ;
struct TYPE_22__ {int bssid; int auth; int rssi; int channel; int ssid; int member_4; int member_3; int member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_6__ wifi_prov_scan_result_t ;
struct TYPE_23__ {int ctx; int (* scan_result ) (scalar_t__,TYPE_6__*,int *) ;} ;
typedef TYPE_7__ wifi_prov_scan_handlers_t ;
typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int esp_err_t ;
struct TYPE_21__ {int len; scalar_t__ data; } ;
struct TYPE_20__ {int * data; int len; } ;
struct TYPE_24__ {TYPE_5__ bssid; int auth; int rssi; int channel; TYPE_4__ ssid; } ;
typedef TYPE_8__ WiFiScanResult ;
struct TYPE_25__ {int status; TYPE_3__* cmd_scan_result; TYPE_10__* resp_scan_result; int payload_case; } ;
typedef TYPE_9__ WiFiScanPayload ;
struct TYPE_19__ {size_t count; scalar_t__ start_index; } ;
struct TYPE_16__ {size_t n_entries; TYPE_8__** entries; } ;
typedef TYPE_10__ RespScanResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (TYPE_10__*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,TYPE_6__*,int *) ;
 int FUNC_8 (TYPE_8__*) ;

__attribute__((used)) static esp_err_t FUNC_9(WiFiScanPayload *VAR_7,
                                         WiFiScanPayload *VAR_8, void *VAR_9)
{
    esp_err_t VAR_10;
    wifi_prov_scan_result_t VAR_11 = {0, 0, 0, 0, 0};
    WiFiScanResult **VAR_12 = ((void*)0);
    wifi_prov_scan_handlers_t *VAR_13 = (wifi_prov_scan_handlers_t *) VAR_9;
    if (!VAR_13) {
        FUNC_0(VAR_5, "Command invoked without handlers");
        return VAR_0;
    }

    RespScanResult *VAR_14 = (RespScanResult *) FUNC_2(sizeof(RespScanResult));
    if (!VAR_14) {
        FUNC_0(VAR_5, "Error allocating memory");
        return VAR_1;
    }
    FUNC_4(VAR_14);

    VAR_8->status = VAR_4;
    VAR_8->payload_case = VAR_6;
    VAR_8->resp_scan_result = VAR_14;

    VAR_12 = (WiFiScanResult **) FUNC_1(VAR_7->cmd_scan_result->count,
                                         sizeof(WiFiScanResult *));
    if (!VAR_12) {
        FUNC_0(VAR_5, "Failed to allocate memory for results array");
        return VAR_1;
    }
    VAR_14->entries = VAR_12;
    VAR_14->n_entries = VAR_7->cmd_scan_result->count;

    for (uint16_t VAR_15 = 0; VAR_15 < VAR_7->cmd_scan_result->count; VAR_15++) {
        VAR_10 = VAR_13->scan_result(VAR_15 + VAR_7->cmd_scan_result->start_index,
                             &VAR_11, &VAR_13->ctx);
        if (VAR_10 != VAR_2) {
            VAR_8->status = VAR_3;
            break;
        }

        VAR_12[VAR_15] = (WiFiScanResult *) FUNC_2(sizeof(WiFiScanResult));
        if (!VAR_12[VAR_15]) {
            FUNC_0(VAR_5, "Failed to allocate memory for result entry");
            return VAR_1;
        }
        FUNC_8(VAR_12[VAR_15]);

        VAR_12[VAR_15]->ssid.len = FUNC_6(VAR_11.ssid, 32);
        VAR_12[VAR_15]->ssid.data = (uint8_t *) FUNC_5(VAR_11.ssid, 32);
        if (!VAR_12[VAR_15]->ssid.data) {
            FUNC_0(VAR_5, "Failed to allocate memory for scan result entry SSID");
            return VAR_1;
        }

        VAR_12[VAR_15]->channel = VAR_11.channel;
        VAR_12[VAR_15]->rssi = VAR_11.rssi;
        VAR_12[VAR_15]->auth = VAR_11.auth;

        VAR_12[VAR_15]->bssid.len = sizeof(VAR_11.bssid);
        VAR_12[VAR_15]->bssid.data = FUNC_2(VAR_12[VAR_15]->bssid.len);
        if (!VAR_12[VAR_15]->bssid.data) {
            FUNC_0(VAR_5, "Failed to allocate memory for scan result entry BSSID");
            return VAR_1;
        }
        FUNC_3(VAR_12[VAR_15]->bssid.data, VAR_11.bssid, VAR_12[VAR_15]->bssid.len);
    }
    return VAR_2;
}
