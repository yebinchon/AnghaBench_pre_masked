
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_funcs {int wpa_michael_mic_failure; int * wpa_config_bss; int wpa_parse_wpa_ie; int wpa_config_parse_string; int wpa_ap_deinit; int wpa_ap_init; int wpa_ap_rx_eapol; int wpa_ap_get_wpa_ie; int wpa_ap_remove; int wpa_ap_join; int wpa_sta_in_4way_handshake; int wpa_sta_connect; int wpa_sta_rx_eapol; int wpa_sta_deinit; int wpa_sta_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_funcs*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_2(void)
{
    struct wpa_funcs *VAR_16;

    VAR_16 = (struct wpa_funcs *)FUNC_1(sizeof(struct wpa_funcs));
    if (!VAR_16) {
        return VAR_0;
    }

    VAR_16->wpa_sta_init = VAR_8;
    VAR_16->wpa_sta_deinit = VAR_10;
    VAR_16->wpa_sta_rx_eapol = VAR_13;
    VAR_16->wpa_sta_connect = VAR_14;
    VAR_16->wpa_sta_in_4way_handshake = VAR_15;

    VAR_16->wpa_ap_join = VAR_5;
    VAR_16->wpa_ap_remove = VAR_6;
    VAR_16->wpa_ap_get_wpa_ie = VAR_4;
    VAR_16->wpa_ap_rx_eapol = VAR_7;
    VAR_16->wpa_ap_init = VAR_3;
    VAR_16->wpa_ap_deinit = VAR_2;

    VAR_16->wpa_config_parse_string = VAR_9;
    VAR_16->wpa_parse_wpa_ie = VAR_12;
    VAR_16->wpa_config_bss = ((void*)0);
    VAR_16->wpa_michael_mic_failure = VAR_11;

    FUNC_0(VAR_16);

    return VAR_1;
}
