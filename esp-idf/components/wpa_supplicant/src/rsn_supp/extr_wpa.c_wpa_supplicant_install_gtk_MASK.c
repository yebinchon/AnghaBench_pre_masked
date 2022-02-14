
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * seq; } ;
struct wpa_sm {scalar_t__ group_cipher; int key_entry_valid; scalar_t__ pairwise_cipher; int bssid; TYPE_1__ install_gtk; } ;
struct wpa_gtk_data {int gtk_len; int keyidx; int tx; int key_rsc_len; int alg; int * gtk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int ,int,int,int *,int,int *,int,int) ;

int FUNC_4(struct wpa_sm *VAR_3,
                      struct wpa_gtk_data *VAR_4)
{
    u8 *VAR_5 = VAR_4->gtk;
    u8 VAR_6[32];
       u8 *VAR_7=(VAR_3->install_gtk).seq;

    FUNC_1(VAR_0, "WPA: Group Key", VAR_4->gtk, VAR_4->gtk_len);






    FUNC_1(VAR_0, "WPA: RSC", VAR_7, VAR_4->key_rsc_len);
    if (VAR_3->group_cipher == VAR_2) {

        FUNC_0(VAR_6, VAR_4->gtk, 16);
        FUNC_0(VAR_6 + 16, VAR_4->gtk + 16, 8);
        FUNC_0(VAR_6 + 24, VAR_4->gtk + 24, 8);
        VAR_5 = VAR_6;
    }

    VAR_3->key_entry_valid = VAR_4->keyidx;
    if (VAR_3->pairwise_cipher == VAR_1) {
        if (FUNC_3(&(VAR_3->install_gtk), VAR_4->alg,
                   VAR_3->bssid,
                   VAR_4->keyidx, 1, VAR_7, VAR_4->key_rsc_len,
                   VAR_5, VAR_4->gtk_len,VAR_3->key_entry_valid) < 0) {




            return -1;
        }
    } else if (FUNC_3(&(VAR_3->install_gtk), VAR_4->alg,
                  VAR_3->bssid,
                  VAR_4->keyidx, VAR_4->tx, VAR_7, VAR_4->key_rsc_len,
                  VAR_5, VAR_4->gtk_len, VAR_3->key_entry_valid) < 0) {





        return -1;
    }

    return 0;
}
