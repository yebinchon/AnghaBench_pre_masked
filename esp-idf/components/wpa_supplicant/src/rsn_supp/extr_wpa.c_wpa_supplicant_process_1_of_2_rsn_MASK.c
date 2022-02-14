
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_sm {int group_cipher; } ;
struct wpa_gtk_data {int gtk_len; int keyidx; int gtk; int tx; int alg; int key_rsc_len; } ;
struct wpa_eapol_ie_parse {int const* gtk; int gtk_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct wpa_sm*,struct wpa_eapol_ie_parse*) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int ,int,int,int *,int *) ;
 int FUNC_6 (struct wpa_sm*,int) ;
 int FUNC_7 (int const*,size_t,struct wpa_eapol_ie_parse*) ;

int FUNC_8(struct wpa_sm *VAR_2,
                         const u8 *VAR_3,
                         size_t VAR_4,
                         u16 VAR_5,
                         struct wpa_gtk_data *VAR_6)
{
    int VAR_7;
    struct wpa_eapol_ie_parse VAR_8;

    FUNC_3(VAR_0, "RSN: msg 1/2 key data", VAR_3, VAR_4);
    FUNC_7(VAR_3, VAR_4, &VAR_8);
    if (VAR_8.gtk && !(VAR_5 & VAR_1)) {



        return -1;
    }
    if (VAR_8.gtk == ((void*)0)) {



        return -1;
    }
    VAR_7 = VAR_6->gtk_len = VAR_8.gtk_len - 2;

    if (FUNC_5(VAR_2->group_cipher,
                          VAR_6->gtk_len, VAR_7,
                          &VAR_6->key_rsc_len, &VAR_6->alg))
        return -1;

    FUNC_3(VAR_0, "RSN: received GTK in group key handshake",
            VAR_8.gtk, VAR_8.gtk_len);
    VAR_6->keyidx = VAR_8.gtk[0] & 0x3;
    VAR_6->tx = FUNC_6(VAR_2,
                              !!(VAR_8.gtk[0] & FUNC_0(2)));
    if (VAR_8.gtk_len - 2 > sizeof(VAR_6->gtk)) {




        return -1;
    }
    FUNC_2(VAR_6->gtk, VAR_8.gtk + 2, VAR_8.gtk_len - 2);

    if (FUNC_1(VAR_2, &VAR_8) < 0)
    {



    }
    return 0;
}
