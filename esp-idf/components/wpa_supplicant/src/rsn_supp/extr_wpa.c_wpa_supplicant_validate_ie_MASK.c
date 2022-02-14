
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {scalar_t__ proto; scalar_t__ rsn_enabled; int * ap_rsn_ie; int ap_rsn_ie_len; int key_mgmt; int * ap_wpa_ie; int ap_wpa_ie_len; } ;
struct wpa_eapol_ie_parse {int rsn_ie_len; int * rsn_ie; int wpa_ie_len; int * wpa_ie; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpa_sm*,...) ;
 scalar_t__ FUNC_5 (struct wpa_sm*) ;

int FUNC_6(struct wpa_sm *VAR_2,
                      const unsigned char *VAR_3,
                      struct wpa_eapol_ie_parse *VAR_4)
{
    if (VAR_2->ap_wpa_ie == ((void*)0) && VAR_2->ap_rsn_ie == ((void*)0)) {




        if (FUNC_5(VAR_2) < 0) {




        } else {




        }
    }

    if (VAR_4->wpa_ie == ((void*)0) && VAR_4->rsn_ie == ((void*)0) &&
        (VAR_2->ap_wpa_ie || VAR_2->ap_rsn_ie)) {






        FUNC_4(VAR_2,
                       VAR_3, VAR_4->wpa_ie, VAR_4->wpa_ie_len,
                       VAR_4->rsn_ie, VAR_4->rsn_ie_len);

        return -1;
    }

    if ((VAR_4->wpa_ie && VAR_2->ap_wpa_ie &&
         (VAR_4->wpa_ie_len != VAR_2->ap_wpa_ie_len ||
         FUNC_0(VAR_4->wpa_ie, VAR_2->ap_wpa_ie, VAR_4->wpa_ie_len) != 0)) ||
        (VAR_4->rsn_ie && VAR_2->ap_rsn_ie &&
         FUNC_1(FUNC_2(VAR_2->key_mgmt),
                VAR_2->ap_rsn_ie, VAR_2->ap_rsn_ie_len,
                VAR_4->rsn_ie, VAR_4->rsn_ie_len))) {






        FUNC_4(VAR_2,
                       VAR_3, VAR_4->wpa_ie, VAR_4->wpa_ie_len,
                       VAR_4->rsn_ie, VAR_4->rsn_ie_len);

        return -1;
    }

    if (VAR_2->proto == VAR_1 &&
        VAR_4->rsn_ie && VAR_2->ap_rsn_ie == ((void*)0) && VAR_2->rsn_enabled) {
        FUNC_4(VAR_2,
                               VAR_3, VAR_4->wpa_ie, VAR_4->wpa_ie_len,
                               VAR_4->rsn_ie, VAR_4->rsn_ie_len);

        return -1;
    }

    return 0;
}
