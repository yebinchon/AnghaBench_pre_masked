
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wifi_mode_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;
struct TYPE_4__ {int sta_bssid_set; int sta_ssid_len; int sta_ssid; int sta_bssid; } ;
typedef TYPE_1__ esp_blufi_extra_info_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_6, esp_event_base_t VAR_7,
                                int32_t VAR_8, void* VAR_9)
{
    wifi_mode_t VAR_10;

    switch (VAR_8) {
    case 128: {
        esp_blufi_extra_info_t VAR_11;

        FUNC_4(VAR_5, VAR_0);
        FUNC_1(&VAR_10);

        FUNC_3(&VAR_11, 0, sizeof(esp_blufi_extra_info_t));
        FUNC_2(VAR_11.sta_bssid, VAR_2, 6);
        VAR_11.sta_bssid_set = 1;
        VAR_11.sta_ssid = VAR_3;
        VAR_11.sta_ssid_len = VAR_4;
        FUNC_0(VAR_10, VAR_1, 0, &VAR_11);
        break;
    }
    default:
        break;
    }
    return;
}
