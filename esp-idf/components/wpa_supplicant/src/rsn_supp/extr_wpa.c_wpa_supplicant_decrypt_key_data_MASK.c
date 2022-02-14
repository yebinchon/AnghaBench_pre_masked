
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_eapol_key {int key_data_length; struct wpa_eapol_key* key_iv; } ;
typedef struct wpa_eapol_key u8 ;
typedef int u16 ;
struct TYPE_2__ {struct wpa_eapol_key* kek; } ;
struct wpa_sm {TYPE_1__ ptk; int ptk_set; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct wpa_eapol_key*,int,struct wpa_eapol_key*,struct wpa_eapol_key*) ;
 int FUNC_3 (struct wpa_eapol_key*,struct wpa_eapol_key*,int) ;
 scalar_t__ FUNC_4 (struct wpa_eapol_key*,int,int,struct wpa_eapol_key*,int) ;
 int FUNC_5 (int ,char*,struct wpa_eapol_key*,int) ;
 int FUNC_6 (int ,char*,...) ;

int FUNC_7(struct wpa_sm *VAR_4,
                       struct wpa_eapol_key *VAR_5, u16 VAR_6)
{
    u16 VAR_7 = FUNC_0(VAR_5->key_data_length);

    FUNC_5(VAR_0, "RSN: encrypted key data",
            (u8 *) (VAR_5 + 1), VAR_7);
    if (!VAR_4->ptk_set) {




        return -1;
    }



    if (VAR_6 == VAR_2) {
        u8 VAR_8[32];
        FUNC_3(VAR_8, VAR_5->key_iv, 16);
        FUNC_3(VAR_8 + 16, VAR_4->ptk.kek, 16);
        if (FUNC_4(VAR_8, 32, 256, (u8 *) (VAR_5 + 1), VAR_7)) {



            return -1;
        }
    } else if (VAR_6 == VAR_3 ||
           VAR_6 == VAR_1) {
        u8 *VAR_9;
        if (VAR_7 % 8) {




            return -1;
        }
        VAR_7 -= 8;


        VAR_9 = ((u8 *) (VAR_5+1))+ 8;
        if (FUNC_2(VAR_4->ptk.kek, VAR_7 / 8,
                (u8 *) (VAR_5 + 1), VAR_9)) {




         return -1;
        }
        FUNC_3(VAR_5 + 1, VAR_9, VAR_7);
        FUNC_1(VAR_5->key_data_length, VAR_7);
    } else {




        return -1;
    }
    FUNC_5(VAR_0, "WPA: decrypted EAPOL-Key key data",
            (u8 *) (VAR_5 + 1), VAR_7);
    return 0;
}
