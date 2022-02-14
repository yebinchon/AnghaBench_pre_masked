
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa2_funcs {int wpa2_deinit; int wpa2_init; int wpa2_start; int wpa2_sm_rx_eapol; } ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct wpa2_funcs*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,...) ;

esp_err_t FUNC_4(void *VAR_10)
{
    struct wpa2_funcs *VAR_11;

    FUNC_3(VAR_4, "WPA2 ENTERPRISE VERSION: [%s] enable\n",
               VAR_5);

    VAR_11 = (struct wpa2_funcs *)FUNC_2(sizeof(struct wpa2_funcs));
    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_3, "WPA2: no mem for wpa2 cb\n");
        return VAR_0;
    }

    VAR_11->wpa2_sm_rx_eapol = VAR_8;
    VAR_11->wpa2_start = VAR_9;
    VAR_11->wpa2_init = VAR_7;
    VAR_11->wpa2_deinit = VAR_6;

    FUNC_1(VAR_11);

    FUNC_3(VAR_2, "WPA2 ENTERPRISE CRYPTO INIT.\r\n");






    return VAR_1;
}
