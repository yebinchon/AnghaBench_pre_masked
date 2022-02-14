
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wifi_sta_config_t ;
struct TYPE_8__ {scalar_t__ bssid_set; int bssid; int password; int ssid; } ;
struct TYPE_9__ {TYPE_2__ sta; } ;
typedef TYPE_3__ wifi_config_t ;
struct wps_sm {int wps_success_cb_timer; int bssid; int key_len; int key; int ssid_len; int ssid; int wps_msg_timeout_timer; int wps_timeout_timer; TYPE_1__* wps; } ;
struct TYPE_7__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 struct wps_sm* VAR_9 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_10 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

int FUNC_12(void)
{
    struct wps_sm *VAR_11 = VAR_9;
    int VAR_12 = VAR_0;

    if (!VAR_9) {
        return VAR_0;
    }

    if (VAR_11->wps->state == VAR_7) {
        wifi_config_t *VAR_13 = (wifi_config_t *)FUNC_8(sizeof(wifi_config_t));

        if (VAR_13 == ((void*)0)) {
            FUNC_0(VAR_4, VAR_5, 0, 0, VAR_10);
            return VAR_0;
        }

        FUNC_9(VAR_2, "wps finished------>");
        FUNC_10(VAR_8);
        FUNC_1();
        FUNC_4(&VAR_11->wps_timeout_timer);
        FUNC_4(&VAR_11->wps_msg_timeout_timer);

        FUNC_6(VAR_13, 0x00, sizeof(wifi_sta_config_t));
        FUNC_5(VAR_13->sta.ssid, VAR_11->ssid, VAR_11->ssid_len);
        FUNC_5(VAR_13->sta.password, VAR_11->key, VAR_11->key_len);
        FUNC_5(VAR_13->sta.bssid, VAR_11->bssid, VAR_1);
        VAR_13->sta.bssid_set = 0;
        FUNC_2(0, VAR_13);
        FUNC_7(VAR_13);
        VAR_13 = ((void*)0);

        FUNC_4(&VAR_11->wps_success_cb_timer);
        FUNC_3(&VAR_11->wps_success_cb_timer, 1000, 0);

        VAR_12 = 0;
    } else {
        FUNC_9(VAR_3, "wps failed----->");

        VAR_12 = FUNC_11(VAR_6);
    }

    return VAR_12;
}
