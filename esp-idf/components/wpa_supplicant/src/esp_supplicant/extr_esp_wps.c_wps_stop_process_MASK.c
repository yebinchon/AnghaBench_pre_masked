
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wifi_sta_config_t ;
typedef int wifi_event_sta_wps_fail_reason_t ;
typedef int u8 ;
struct wps_sm {int wps_success_cb_timer; int wps_msg_timeout_timer; int config; scalar_t__ ssid_len; int * ssid; int * bssid; TYPE_1__* wps; scalar_t__ discover_ssid_cnt; scalar_t__ scan_cnt; } ;
typedef int reason_code ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int *,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct wps_sm* VAR_8 ;
 int FUNC_4 (int *,int) ;
 int VAR_9 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;

int FUNC_7(wifi_event_sta_wps_fail_reason_t VAR_10)
{
    struct wps_sm *VAR_11 = VAR_8;

    if (!VAR_8) {
        return VAR_0;
    }

    FUNC_6(VAR_7);
    VAR_11->scan_cnt = 0;
    VAR_11->discover_ssid_cnt = 0;
    VAR_11->wps->state = VAR_4;
    FUNC_4(VAR_11->bssid, VAR_2);
    FUNC_4(VAR_11->ssid, 32);
    VAR_11->ssid_len = 0;
    FUNC_4((u8 *)&VAR_11->config, sizeof(wifi_sta_config_t));

    FUNC_1();
    FUNC_3(&VAR_11->wps_msg_timeout_timer);
    FUNC_3(&VAR_11->wps_success_cb_timer);

    FUNC_2();

    FUNC_5(VAR_3, "Write wps_fail_information");

    FUNC_0(VAR_5, VAR_6, &VAR_10, sizeof(VAR_10), VAR_9);

    return VAR_1;
}
