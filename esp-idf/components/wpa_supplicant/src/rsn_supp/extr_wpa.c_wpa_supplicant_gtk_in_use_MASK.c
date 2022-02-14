
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_sm {scalar_t__ group_cipher; scalar_t__* bssid; } ;
struct wpa_gtk_data {int gtk_len; int keyidx; int alg; scalar_t__* gtk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (int ,char*,scalar_t__*,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,int*,scalar_t__*,int*,scalar_t__*,int,int) ;

bool FUNC_5(struct wpa_sm *VAR_3, struct wpa_gtk_data *VAR_4)
{
    u8 *VAR_5 = VAR_4->gtk;
    u8 VAR_6[32];
    u8 VAR_7[32] = {0};
    u8 VAR_8;
    int VAR_9;
    u8 VAR_10[6];
    int VAR_11;

    FUNC_2(VAR_1, "WPA: Group Key", VAR_4->gtk, VAR_4->gtk_len);





    if (VAR_3->group_cipher == VAR_2) {

        FUNC_1(VAR_6, VAR_4->gtk, 16);
        FUNC_1(VAR_6 + 16, VAR_4->gtk + 16, 8);
        FUNC_1(VAR_6 + 24, VAR_4->gtk + 24, 8);
        VAR_5 = VAR_6;
    }


    if (FUNC_4(&VAR_8, &VAR_9, VAR_10, &VAR_11, VAR_7, VAR_4->gtk_len, VAR_4->keyidx) == 0) {
        if (VAR_8 == 0 && VAR_9 == VAR_4->alg && FUNC_0(VAR_10, VAR_3->bssid, VAR_0) == 0 &&
          FUNC_0(VAR_5, VAR_7, VAR_4->gtk_len) == 0) {
            FUNC_3(VAR_1, "GTK %d is already in use in entry %d, it may be an attack, ignor it.", VAR_4->keyidx, VAR_4->keyidx + 2);
            return 1;
        }
    }

    if (FUNC_4(&VAR_8, &VAR_9, VAR_10, &VAR_11, VAR_7, VAR_4->gtk_len, (VAR_4->keyidx+1)%2) == 0) {
     if (VAR_8 == 0 && VAR_9 == VAR_4->alg && FUNC_0(VAR_10, VAR_3->bssid, VAR_0) == 0 &&
       FUNC_0(VAR_5, VAR_7, VAR_4->gtk_len) == 0) {
            FUNC_3(VAR_1, "GTK %d is already in use in entry %d, it may be an attack, ignor it.", VAR_4->keyidx, (VAR_4->keyidx+1)%2 + 2);
            return 1;
        }
    }

    return 0;
}
