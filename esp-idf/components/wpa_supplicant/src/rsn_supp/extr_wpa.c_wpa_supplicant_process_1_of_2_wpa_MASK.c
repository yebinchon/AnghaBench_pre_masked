
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u16 ;
struct TYPE_2__ {struct wpa_eapol_key const* kek; } ;
struct wpa_sm {TYPE_1__ ptk; int group_cipher; } ;
struct wpa_gtk_data {int keyidx; int tx; int * gtk; int alg; int key_rsc_len; int gtk_len; } ;
struct wpa_eapol_key {struct wpa_eapol_key const* key_iv; int key_length; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (struct wpa_eapol_key const*,size_t,int const*,int *) ;
 int FUNC_2 (int *,struct wpa_eapol_key const*,size_t) ;
 scalar_t__ FUNC_3 (int *,int,int,int *,size_t) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int ,int ,size_t,int *,int *) ;
 int FUNC_6 (struct wpa_sm*,int) ;

int FUNC_7(struct wpa_sm *VAR_6,
                         const struct wpa_eapol_key *VAR_7,
                         size_t VAR_8, int VAR_9,
                         size_t VAR_10, u16 VAR_11,
                         struct wpa_gtk_data *VAR_12)
{
    size_t VAR_13;
    u8 VAR_14[32];

    VAR_12->gtk_len = FUNC_0(VAR_7->key_length);
    VAR_13 = VAR_8;
    if (VAR_8 > VAR_10) {






        return -1;
    }
    if (VAR_11 == VAR_5) {
        if (VAR_13 < 8) {




            return -1;
        }
        VAR_13 -= 8;
    }

    if (FUNC_5(VAR_6->group_cipher,
                          VAR_12->gtk_len, VAR_13,
                          &VAR_12->key_rsc_len, &VAR_12->alg))
        return -1;

    VAR_12->keyidx = (VAR_9 & VAR_1) >>
        VAR_2;
    if (VAR_11 == VAR_4) {
        FUNC_2(VAR_14, VAR_7->key_iv, 16);
        FUNC_2(VAR_14 + 16, VAR_6->ptk.kek, 16);
        if (VAR_8 > sizeof(VAR_12->gtk)) {





            return -1;
        }
        FUNC_2(VAR_12->gtk, VAR_7 + 1, VAR_8);
        if (FUNC_3(VAR_14, 32, 256, VAR_12->gtk, VAR_8)) {



            return -1;
        }
    } else if (VAR_11 == VAR_5) {
        if (VAR_8 % 8) {




            return -1;
        }
        if (VAR_13 > sizeof(VAR_12->gtk)) {






            return -1;
        }
        if (FUNC_1(VAR_6->ptk.kek, VAR_13 / 8,
                (const u8 *) (VAR_7 + 1), VAR_12->gtk)) {




         return -1;
        }
    } else {




        return -1;
    }
    VAR_12->tx = FUNC_6(
        VAR_6, !!(VAR_9 & VAR_3));
    return 0;
}
