
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct hostapd_data* wpa_passphrase; struct hostapd_data* wpa_psk; } ;
struct hostapd_data {struct hostapd_data* conf; TYPE_1__ ssid; struct hostapd_data* wpa_auth; struct hostapd_data* group; struct hostapd_data* wpa_ie; } ;


 int FUNC_0 (struct hostapd_data*) ;

bool FUNC_1(void *VAR_0)
{
    struct hostapd_data *VAR_1 = (struct hostapd_data *)VAR_0;

    if (VAR_1 == ((void*)0)) {
        return 1;
    }

    if (VAR_1->wpa_auth->wpa_ie != ((void*)0)) {
        FUNC_0(VAR_1->wpa_auth->wpa_ie);
    }

    if (VAR_1->wpa_auth->group != ((void*)0)) {
        FUNC_0(VAR_1->wpa_auth->group);
    }

    if (VAR_1->wpa_auth != ((void*)0)) {
        FUNC_0(VAR_1->wpa_auth);
    }

    if (VAR_1->conf->ssid.wpa_psk != ((void*)0)) {
        FUNC_0(VAR_1->conf->ssid.wpa_psk);
    }

    if (VAR_1->conf->ssid.wpa_passphrase != ((void*)0)) {
        FUNC_0(VAR_1->conf->ssid.wpa_passphrase);
    }

    if (VAR_1->conf != ((void*)0)) {
        FUNC_0(VAR_1->conf);
    }

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1);
    }

    return 1;
}
