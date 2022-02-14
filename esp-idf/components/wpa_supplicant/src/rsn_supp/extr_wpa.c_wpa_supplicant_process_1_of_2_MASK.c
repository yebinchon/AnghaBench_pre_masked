
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_gtk_data {int dummy; } ;
struct wpa_sm {scalar_t__ proto; int key_info; struct wpa_gtk_data gd; } ;
struct wpa_eapol_key {int key_data_length; int key_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct wpa_gtk_data*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_sm*,int ) ;
 int FUNC_4 (struct wpa_sm*,struct wpa_eapol_key*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wpa_sm*,int const*,int ,int ,struct wpa_gtk_data*) ;
 int FUNC_7 (struct wpa_sm*,struct wpa_eapol_key*,int ,int ,int,int ,struct wpa_gtk_data*) ;
 scalar_t__ FUNC_8 (struct wpa_sm*,struct wpa_eapol_key*,int ,int ) ;

void FUNC_9(struct wpa_sm *VAR_4,
                      const unsigned char *VAR_5,
                      struct wpa_eapol_key *VAR_6,
                      int VAR_7, u16 VAR_8)
{
    u16 VAR_9, VAR_10;
    int VAR_11;
    struct wpa_gtk_data *VAR_12=&(VAR_4->gd);

    FUNC_1(VAR_12, 0, sizeof(struct wpa_gtk_data));

    FUNC_2(VAR_0, "WPA 1/2 Group Key Handshake\n");

    VAR_9 = FUNC_0(VAR_6->key_info);
    VAR_10 = FUNC_0(VAR_6->key_data_length);

    if (VAR_4->proto == VAR_3) {
        VAR_11 = FUNC_6(VAR_4,
                            (const u8 *) (VAR_6 + 1),
                            VAR_10, VAR_9,
                            VAR_12);
    } else {
        VAR_11 = FUNC_7(VAR_4, VAR_6, VAR_10,
                            VAR_9, VAR_7,
                            VAR_8, VAR_12);
    }

    FUNC_5(VAR_2);

    if (VAR_11)
        goto failed;


    FUNC_4(VAR_4, VAR_6, 0);
    VAR_4->key_info=VAR_9;

    if (FUNC_8(VAR_4, VAR_6, VAR_8, VAR_9))
        goto failed;

    return;

failed:
    FUNC_3(VAR_4, VAR_1);
}
