
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_state_machine {struct wpa_state_machine* wpa_ie; struct wpa_state_machine* last_rx_eapol_key; struct wpa_state_machine* assoc_resp_ftie; scalar_t__ GUpdateStationKeys; TYPE_1__* group; } ;
struct TYPE_2__ {int GKeyDoneStations; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_state_machine*) ;
 int FUNC_1 (struct wpa_state_machine*) ;
 int FUNC_2 (int ,char*,struct wpa_state_machine*) ;

__attribute__((used)) static void FUNC_3(struct wpa_state_machine *VAR_2)
{
    FUNC_1(VAR_2);
    if (VAR_2->GUpdateStationKeys) {
        VAR_2->group->GKeyDoneStations--;
        VAR_2->GUpdateStationKeys = VAR_0;
    }



    FUNC_2( VAR_1, "wpa_free_sta_sm: free eapol=%p\n", VAR_2->last_rx_eapol_key);
    FUNC_0(VAR_2->last_rx_eapol_key);
    FUNC_0(VAR_2->wpa_ie);
    FUNC_0(VAR_2);
}
