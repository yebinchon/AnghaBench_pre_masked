
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wifi_mode_t ;
struct TYPE_7__ {int ssid_len; int ssid; int bssid; } ;
typedef TYPE_1__ wifi_event_sta_connected_t ;
struct TYPE_8__ {int ssid; int rssi; } ;
typedef TYPE_2__ wifi_ap_record_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;
typedef TYPE_2__ esp_blufi_ap_record_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;





 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*,TYPE_2__*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(void* VAR_8, esp_event_base_t VAR_9,
                                int32_t VAR_10, void* VAR_11)
{
    wifi_event_sta_connected_t *VAR_12;
    wifi_mode_t VAR_13;

    switch (VAR_10) {
    case 128:
        FUNC_5();
        break;
    case 130:
        VAR_4 = 1;
        VAR_12 = (wifi_event_sta_connected_t*) VAR_11;
        FUNC_12(VAR_3, VAR_12->bssid, 6);
        FUNC_12(VAR_5, VAR_12->ssid, VAR_12->ssid_len);
        VAR_6 = VAR_12->ssid_len;
        break;
    case 129:


        VAR_4 = 0;
        FUNC_13(VAR_5, 0, 32);
        FUNC_13(VAR_3, 0, 6);
        VAR_6 = 0;
        FUNC_5();
        FUNC_14(VAR_7, VAR_0);
        break;
    case 132:
        FUNC_6(&VAR_13);


        if (VAR_4) {
            FUNC_3(VAR_13, VAR_2, 0, ((void*)0));
        } else {
            FUNC_3(VAR_13, VAR_1, 0, ((void*)0));
        }
        break;
    case 131: {
        uint16_t VAR_14 = 0;
        FUNC_7(&VAR_14);
        if (VAR_14 == 0) {
            FUNC_1("Nothing AP found");
            break;
        }
        wifi_ap_record_t *VAR_15 = (wifi_ap_record_t *)FUNC_11(sizeof(wifi_ap_record_t) * VAR_14);
        if (!VAR_15) {
            FUNC_0("malloc error, ap_list is NULL");
            break;
        }
        FUNC_2(FUNC_8(&VAR_14, VAR_15));
        esp_blufi_ap_record_t * VAR_16 = (esp_blufi_ap_record_t *)FUNC_11(VAR_14 * sizeof(esp_blufi_ap_record_t));
        if (!VAR_16) {
            if (VAR_15) {
                FUNC_10(VAR_15);
            }
            FUNC_0("malloc error, blufi_ap_list is NULL");
            break;
        }
        for (int VAR_17 = 0; VAR_17 < VAR_14; ++VAR_17)
        {
            VAR_16[VAR_17].rssi = VAR_15[VAR_17].rssi;
            FUNC_12(VAR_16[VAR_17].ssid, VAR_15[VAR_17].ssid, sizeof(VAR_15[VAR_17].ssid));
        }
        FUNC_4(VAR_14, VAR_16);
        FUNC_9();
        FUNC_10(VAR_15);
        FUNC_10(VAR_16);
        break;
    }
    default:
        break;
    }
    return;
}
