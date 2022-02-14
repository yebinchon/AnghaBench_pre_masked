
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_ptk {int dummy; } ;
struct wpa_sm {scalar_t__ proto; int tptk_set; int key_install; int anonce; int assoc_wpa_ie_len; int assoc_wpa_ie; int const* snonce; int bssid; scalar_t__ ptk_set; struct wpa_ptk tptk; scalar_t__ renew_snonce; } ;
struct wpa_eapol_key {int key_nonce; int key_data_length; } ;
struct wpa_eapol_ie_parse {int const* pmkid; } ;
typedef int ie ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (struct wpa_eapol_ie_parse*,int ,int) ;
 scalar_t__ FUNC_5 (int const*,size_t) ;
 int FUNC_6 (struct wpa_sm*,int *,int ,int ,int ) ;
 int FUNC_7 (struct wpa_sm*,unsigned char const*,struct wpa_eapol_key const*,struct wpa_ptk*) ;
 int FUNC_8 (int ,char*,int const*,size_t) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct wpa_sm*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct wpa_sm*,unsigned char const*,int const*) ;
 int FUNC_13 (int const*,size_t,struct wpa_eapol_ie_parse*) ;
 scalar_t__ FUNC_14 (struct wpa_sm*,int ,struct wpa_eapol_key const*,int ,int const*,int ,int ,struct wpa_ptk*) ;

void FUNC_15(struct wpa_sm *VAR_8,
                      const unsigned char *VAR_9,
                      const struct wpa_eapol_key *VAR_10,
                      u16 VAR_11)
{
    struct wpa_eapol_ie_parse VAR_12;
    struct wpa_ptk *VAR_13;
    int VAR_14;

    FUNC_11(VAR_5);

    FUNC_9(VAR_0, "WPA 1/4-Way Handshake\n");

    FUNC_4(&VAR_12, 0, sizeof(VAR_12));


    if (VAR_8->proto == VAR_7) {

        const u8 *VAR_15 = (const u8 *) (VAR_10 + 1);
        size_t VAR_16 = FUNC_0(VAR_10->key_data_length);
        FUNC_8(VAR_1, "RSN: msg 1/4 key data", VAR_15, VAR_16);
        FUNC_13(VAR_15, VAR_16, &VAR_12);
        if (VAR_12.pmkid) {
            FUNC_8(VAR_0, "RSN: PMKID from "
                    "Authenticator", VAR_12.pmkid, VAR_2);
        }
    }

    VAR_14 = FUNC_12(VAR_8, VAR_9, VAR_12.pmkid);

    if (VAR_14 == -2) {




        return;
    }
    if (VAR_14)
        goto failed;

    if (FUNC_2()
            && FUNC_1() == VAR_4) {
        FUNC_6(VAR_8, ((void*)0), VAR_8->bssid, 0, 0);
    }

    if (VAR_8->renew_snonce) {
        if (FUNC_5(VAR_8->snonce, VAR_6)) {



            goto failed;
        }

        VAR_8->renew_snonce = 0;
        FUNC_8(VAR_0, "WPA: Renewed SNonce",
                VAR_8->snonce, VAR_6);
    }



    VAR_13 = &VAR_8->tptk;
    FUNC_7(VAR_8, VAR_9, VAR_10, VAR_13);

    VAR_8->tptk_set = 1;
    VAR_8->ptk_set = 0;
    VAR_8->key_install = 1;

    if (FUNC_14(VAR_8, VAR_8->bssid, VAR_10, VAR_11, VAR_8->snonce,
                       VAR_8->assoc_wpa_ie, VAR_8->assoc_wpa_ie_len,
                       VAR_13))
        goto failed;

    FUNC_3(VAR_8->anonce, VAR_10->key_nonce, VAR_6);
    return;

failed:
    FUNC_10(VAR_8, VAR_3);
}
