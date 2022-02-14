
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wifi_sta_config_t ;
struct TYPE_3__ {int sta; } ;
typedef TYPE_1__ wifi_config_t ;
struct wps_sm {int discover_ssid_cnt; scalar_t__ scan_cnt; int ignore_sel_reg; int wps_scan_timer; int config; } ;
typedef int STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *,int,int ) ;
 struct wps_sm* VAR_9 ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_10 ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;

void
FUNC_10(void *VAR_11, STATUS VAR_12)
{
    struct wps_sm *VAR_13 = VAR_9;
    wifi_config_t VAR_14;

    if (FUNC_8() == VAR_8) {
        return;
    }

    if (!VAR_13) {
        return;
    }

    if (VAR_13->discover_ssid_cnt == 1) {
        FUNC_9(VAR_6);
    } else if (VAR_13->discover_ssid_cnt == 0) {
        FUNC_9(VAR_7);
    } else {
        FUNC_6(VAR_1, "PBC session overlap!");
        FUNC_9(VAR_5);
        FUNC_0(VAR_2, VAR_3, 0, 0, VAR_10);
    }

    FUNC_6(VAR_0, "wps scan_done discover_ssid_cnt = %d", VAR_13->discover_ssid_cnt);

    VAR_13->discover_ssid_cnt = 0;

    if (FUNC_7() == VAR_6) {
        FUNC_2();

        FUNC_5(&VAR_14.sta, &VAR_13->config, sizeof(wifi_sta_config_t));
        FUNC_3(0, &VAR_14);

        FUNC_6(VAR_0, "WPS: neg start");
        FUNC_1();
    } else if (FUNC_7() == VAR_7) {
        if (VAR_13->scan_cnt < VAR_4) {
            VAR_13->ignore_sel_reg = 1;
        }
        FUNC_4(&VAR_13->wps_scan_timer, 100, 0);
    } else {
        return;
    }
}
