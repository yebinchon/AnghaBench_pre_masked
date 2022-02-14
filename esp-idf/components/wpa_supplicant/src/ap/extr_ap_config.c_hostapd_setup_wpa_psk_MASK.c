
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_ssid {TYPE_1__* wpa_psk; int * wpa_passphrase; } ;
struct hostapd_bss_config {struct hostapd_ssid ssid; } ;
struct TYPE_2__ {int group; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_ssid*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct hostapd_bss_config *VAR_1)
{
    struct hostapd_ssid *VAR_2 = &VAR_1->ssid;

    if (VAR_2->wpa_passphrase != ((void*)0)) {
        if (VAR_2->wpa_psk != ((void*)0)) {
         FUNC_1(VAR_0, "Using pre-configured WPA PSK "
                   "instead of passphrase");
        } else {
         FUNC_1(VAR_0, "Deriving WPA PSK based on "
                   "passphrase\n");
            if (FUNC_0(VAR_2) < 0)
                return -1;
        }
        VAR_2->wpa_psk->group = 1;
    }

    return 0;
}
