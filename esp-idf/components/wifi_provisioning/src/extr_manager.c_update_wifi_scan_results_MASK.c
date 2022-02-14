
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rssi; int authmode; int * bssid; int ssid; } ;
typedef TYPE_1__ wifi_ap_record_t ;
typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {size_t channel; } ;
struct TYPE_7__ {int scanning; size_t curr_channel; size_t* ap_list_len; int channels_per_group; TYPE_4__ scan_cfg; TYPE_1__** ap_list; TYPE_1__** ap_list_sorted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (size_t,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (size_t,int) ;
 scalar_t__ FUNC_4 (size_t*) ;
 scalar_t__ FUNC_5 (size_t*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_8 (int) ;

__attribute__((used)) static esp_err_t FUNC_9(void)
{
    if (!VAR_6->scanning) {
        return VAR_0;
    }
    FUNC_0(VAR_4, "Scan finished");

    esp_err_t VAR_7 = VAR_1;
    uint16_t VAR_8 = 0;
    uint16_t VAR_9 = VAR_6->curr_channel;

    if (VAR_6->ap_list[VAR_9]) {
        FUNC_7(VAR_6->ap_list[VAR_9]);
        VAR_6->ap_list[VAR_9] = ((void*)0);
        VAR_6->ap_list_len[VAR_9] = 0;
    }

    if (FUNC_4(&VAR_8) != VAR_2) {
        FUNC_1(VAR_4, "Failed to get count of scanned APs");
        goto exit;
    }

    if (!VAR_8) {
        FUNC_0(VAR_4, "Scan result empty");
        VAR_7 = VAR_2;
        goto exit;
    }

    VAR_6->ap_list[VAR_9] = (wifi_ap_record_t *) FUNC_3(VAR_8, sizeof(wifi_ap_record_t));
    if (!VAR_6->ap_list[VAR_9]) {
        FUNC_1(VAR_4, "Failed to allocate memory for AP list");
        goto exit;
    }
    if (FUNC_5(&VAR_8, VAR_6->ap_list[VAR_9]) != VAR_2) {
        FUNC_1(VAR_4, "Failed to get scanned AP records");
        goto exit;
    }
    VAR_6->ap_list_len[VAR_9] = VAR_8;

    if (VAR_6->channels_per_group) {
        FUNC_0(VAR_4, "Scan results for channel %d :", VAR_9);
    } else {
        FUNC_0(VAR_4, "Scan results :");
    }
    FUNC_0(VAR_4, "\tS.N. %-32s %-12s %s %s", "SSID", "BSSID", "RSSI", "AUTH");
    for (uint8_t VAR_10 = 0; VAR_10 < VAR_6->ap_list_len[VAR_9]; VAR_10++) {
        FUNC_0(VAR_4, "\t[%2d] %-32s %02x%02x%02x%02x%02x%02x %4d %4d", VAR_10,
                 VAR_6->ap_list[VAR_9][VAR_10].ssid,
                 VAR_6->ap_list[VAR_9][VAR_10].bssid[0],
                 VAR_6->ap_list[VAR_9][VAR_10].bssid[1],
                 VAR_6->ap_list[VAR_9][VAR_10].bssid[2],
                 VAR_6->ap_list[VAR_9][VAR_10].bssid[3],
                 VAR_6->ap_list[VAR_9][VAR_10].bssid[4],
                 VAR_6->ap_list[VAR_9][VAR_10].bssid[5],
                 VAR_6->ap_list[VAR_9][VAR_10].rssi,
                 VAR_6->ap_list[VAR_9][VAR_10].authmode);
    }


    {
        int VAR_11 = FUNC_2(VAR_8, VAR_3);
        int VAR_12 = VAR_3 - VAR_11 - 1;
        while (VAR_11 > 0 && VAR_12 >= 0) {
            if (VAR_6->ap_list_sorted[VAR_12]) {
                if (VAR_6->ap_list_sorted[VAR_12]->rssi > VAR_6->ap_list[VAR_9][VAR_11 - 1].rssi) {
                    VAR_6->ap_list_sorted[VAR_12 + VAR_11] = &VAR_6->ap_list[VAR_9][VAR_11 - 1];
                    VAR_11--;
                    continue;
                }
                VAR_6->ap_list_sorted[VAR_12 + VAR_11] = VAR_6->ap_list_sorted[VAR_12];
            }
            VAR_12--;
        }
        while (VAR_11 > 0) {
            VAR_6->ap_list_sorted[VAR_11 - 1] = &VAR_6->ap_list[VAR_9][VAR_11 - 1];
            VAR_11--;
        }
    }

    VAR_7 = VAR_2;
    exit:

    if (!VAR_6->channels_per_group) {


        VAR_6->scanning = 0;
        goto final;
    }

    VAR_9 = VAR_6->curr_channel = (VAR_6->curr_channel + 1) % 14;
    if (VAR_7 != VAR_2 || VAR_9 == 0) {
        VAR_6->scanning = 0;
        goto final;
    }

    if ((VAR_9 % VAR_6->channels_per_group) == 0) {
        FUNC_8(120 / VAR_5);
    }

    FUNC_0(VAR_4, "Scan starting on channel %u...", VAR_9);
    VAR_6->scan_cfg.channel = VAR_9;
    VAR_7 = FUNC_6(&VAR_6->scan_cfg, 0);
    if (VAR_7 != VAR_2) {
        FUNC_1(VAR_4, "Failed to start scan");
        VAR_6->scanning = 0;
        goto final;
    }
    FUNC_0(VAR_4, "Scan started");

    final:

    return VAR_7;
}
