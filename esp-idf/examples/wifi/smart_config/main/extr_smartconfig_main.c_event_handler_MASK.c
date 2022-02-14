
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bssid_set; int * bssid; int * password; int * ssid; } ;
struct TYPE_7__ {TYPE_1__ sta; } ;
typedef TYPE_2__ wifi_config_t ;
typedef int uint8_t ;
struct TYPE_8__ {int bssid_set; int password; int ssid; int bssid; } ;
typedef TYPE_3__ smartconfig_event_got_ssid_pswd_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ esp_event_base_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int,int *,int,int *) ;

__attribute__((used)) static void FUNC_10(void* VAR_16, esp_event_base_t VAR_17,
                                int32_t VAR_18, void* VAR_19)
{
    if (VAR_17 == VAR_11 && VAR_18 == VAR_13) {
        FUNC_9(VAR_15, "smartconfig_example_task", 4096, ((void*)0), 3, ((void*)0));
    } else if (VAR_17 == VAR_11 && VAR_18 == VAR_12) {
        FUNC_3();
        FUNC_7(VAR_14, VAR_0);
    } else if (VAR_17 == VAR_3 && VAR_18 == VAR_4) {
        FUNC_8(VAR_14, VAR_0);
    } else if (VAR_17 == VAR_5 && VAR_18 == VAR_8) {
        FUNC_1(VAR_10, "Scan done");
    } else if (VAR_17 == VAR_5 && VAR_18 == VAR_6) {
        FUNC_1(VAR_10, "Found channel");
    } else if (VAR_17 == VAR_5 && VAR_18 == VAR_7) {
        FUNC_1(VAR_10, "Got SSID and password");

        smartconfig_event_got_ssid_pswd_t *VAR_20 = (smartconfig_event_got_ssid_pswd_t *)VAR_19;
        wifi_config_t VAR_21;
        uint8_t VAR_22[33] = { 0 };
        uint8_t VAR_23[65] = { 0 };

        FUNC_2(&VAR_21, sizeof(wifi_config_t));
        FUNC_6(VAR_21.sta.ssid, VAR_20->ssid, sizeof(VAR_21.sta.ssid));
        FUNC_6(VAR_21.sta.password, VAR_20->password, sizeof(VAR_21.sta.password));
        VAR_21.sta.bssid_set = VAR_20->bssid_set;
        if (VAR_21.sta.bssid_set == 1) {
            FUNC_6(VAR_21.sta.bssid, VAR_20->bssid, sizeof(VAR_21.sta.bssid));
        }

        FUNC_6(VAR_22, VAR_20->ssid, sizeof(VAR_20->ssid));
        FUNC_6(VAR_23, VAR_20->password, sizeof(VAR_20->password));
        FUNC_1(VAR_10, "SSID:%s", VAR_22);
        FUNC_1(VAR_10, "PASSWORD:%s", VAR_23);

        FUNC_0( FUNC_4() );
        FUNC_0( FUNC_5(VAR_2, &VAR_21) );
        FUNC_0( FUNC_3() );
    } else if (VAR_17 == VAR_5 && VAR_18 == VAR_9) {
        FUNC_8(VAR_14, VAR_1);
    }
}
