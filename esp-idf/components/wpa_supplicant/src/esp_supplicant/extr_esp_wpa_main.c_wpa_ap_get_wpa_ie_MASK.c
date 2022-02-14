
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hostapd_data {TYPE_1__* wpa_auth; } ;
struct TYPE_2__ {int * wpa_ie; int wpa_ie_len; } ;


 scalar_t__ FUNC_0 () ;

uint8_t *FUNC_1(uint8_t *VAR_0)
{
    struct hostapd_data *VAR_1 = (struct hostapd_data *)FUNC_0();

    if (!VAR_1 || !VAR_1->wpa_auth || !VAR_1->wpa_auth->wpa_ie) {
        return ((void*)0);
    }

    *VAR_0 = VAR_1->wpa_auth->wpa_ie_len;
    return VAR_1->wpa_auth->wpa_ie;
}
