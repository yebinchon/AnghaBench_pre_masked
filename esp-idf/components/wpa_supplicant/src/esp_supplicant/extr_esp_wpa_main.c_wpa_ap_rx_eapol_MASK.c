
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_state_machine {int dummy; } ;
struct hostapd_data {int wpa_auth; } ;


 int FUNC_0 (int ,struct wpa_state_machine*,int *,size_t) ;

bool FUNC_1(void *VAR_0, void *VAR_1, u8 *VAR_2, size_t VAR_3)
{
    struct hostapd_data *VAR_4 = (struct hostapd_data *)VAR_0;
    struct wpa_state_machine *VAR_5 = (struct wpa_state_machine *)VAR_1;

    if (!VAR_4 || !VAR_5) {
        return 0;
    }

    FUNC_0(VAR_4->wpa_auth, VAR_5, VAR_2, VAR_3);

    return 1;
}
