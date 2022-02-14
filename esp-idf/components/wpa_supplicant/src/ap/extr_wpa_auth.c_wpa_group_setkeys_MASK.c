
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int GM; int GN; int GM_igtk; int GN_igtk; scalar_t__ GKeyDoneStations; int GTKReKey; int wpa_group_state; int changed; scalar_t__ vlan_id; } ;
struct wpa_authenticator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_authenticator*,int ,struct wpa_group*) ;
 int VAR_4 ;
 int FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct wpa_authenticator *VAR_5,
                  struct wpa_group *VAR_6)
{
    int VAR_7;

    FUNC_2( VAR_1, "WPA: group state machine entering state "
           "SETKEYS (VLAN-ID %d)\n", VAR_6->vlan_id);
    VAR_6->changed = VAR_2;
    VAR_6->wpa_group_state = VAR_3;
    VAR_6->GTKReKey = VAR_0;
    VAR_7 = VAR_6->GM;
    VAR_6->GM = VAR_6->GN;
    VAR_6->GN = VAR_7;
    FUNC_1(VAR_5, VAR_6);

    if (VAR_6->GKeyDoneStations) {
        FUNC_2( VAR_1, "wpa_group_setkeys: Unexpected "
               "GKeyDoneStations=%d when starting new GTK rekey",
               VAR_6->GKeyDoneStations);
        VAR_6->GKeyDoneStations = 0;
    }
    FUNC_0(VAR_5, VAR_4, VAR_6);
    FUNC_2( VAR_1, "wpa_group_setkeys: GKeyDoneStations=%d",
           VAR_6->GKeyDoneStations);
}
