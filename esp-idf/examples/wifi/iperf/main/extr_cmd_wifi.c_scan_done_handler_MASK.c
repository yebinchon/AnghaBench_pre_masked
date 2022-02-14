
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rssi; int ssid; } ;
typedef TYPE_1__ wifi_ap_record_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void* VAR_2, esp_event_base_t VAR_3,
                              int32_t VAR_4, void* VAR_5)
{
    uint16_t VAR_6 = 0;
    uint8_t VAR_7;
    wifi_ap_record_t *VAR_8;

    FUNC_2(&VAR_6);
    VAR_8 = FUNC_5(VAR_6 * sizeof(wifi_ap_record_t));
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_1, "Failed to malloc buffer to print scan results");
        return;
    }

    if (FUNC_3(&VAR_6,(wifi_ap_record_t *)VAR_8) == VAR_0) {
        for(VAR_7=0; VAR_7<VAR_6; VAR_7++) {
            FUNC_1(VAR_1, "[%s][rssi=%d]", VAR_8[VAR_7].ssid, VAR_8[VAR_7].rssi);
        }
    }
    FUNC_4(VAR_8);
    FUNC_1(VAR_1, "sta scan done");
}
