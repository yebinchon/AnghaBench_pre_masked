
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wifi_init_config_t ;
struct TYPE_4__ {int ssid; int rssi; scalar_t__ authmode; int primary; int group_cipher; int pairwise_cipher; } ;
typedef TYPE_1__ wifi_ap_record_t ;
typedef int uint16_t ;
typedef int esp_netif_t ;
typedef int ap_info ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*,TYPE_1__*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void FUNC_16(void)
{
    FUNC_6();
    FUNC_0(FUNC_4());
    esp_netif_t *VAR_4 = FUNC_5();
    FUNC_3(VAR_4);

    wifi_init_config_t VAR_5 = FUNC_2();
    FUNC_0(FUNC_7(&VAR_5));

    uint16_t VAR_6 = VAR_0;
    wifi_ap_record_t VAR_7[VAR_0];
    uint16_t VAR_8 = 0;
    FUNC_13(VAR_7, 0, sizeof(VAR_7));

    FUNC_0(FUNC_11(VAR_3));
    FUNC_0(FUNC_12());
    FUNC_0(FUNC_10(((void*)0), 1));
    FUNC_0(FUNC_9(&VAR_6, VAR_7));
    FUNC_0(FUNC_8(&VAR_8));
    FUNC_1(VAR_1, "Total APs scanned = %u", VAR_8);
    for (int VAR_9 = 0; (VAR_9 < VAR_0) && (VAR_9 < VAR_8); VAR_9++) {
        FUNC_1(VAR_1, "SSID \t\t%s", VAR_7[VAR_9].ssid);
        FUNC_1(VAR_1, "RSSI \t\t%d", VAR_7[VAR_9].rssi);
        FUNC_14(VAR_7[VAR_9].authmode);
        if (VAR_7[VAR_9].authmode != VAR_2) {
            FUNC_15(VAR_7[VAR_9].pairwise_cipher, VAR_7[VAR_9].group_cipher);
        }
        FUNC_1(VAR_1, "Channel \t\t%d\n", VAR_7[VAR_9].primary);
    }

}
