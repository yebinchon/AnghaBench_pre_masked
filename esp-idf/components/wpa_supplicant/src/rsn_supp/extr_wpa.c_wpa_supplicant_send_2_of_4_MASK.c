
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct wpa_eapol_key {int key_mic; struct wpa_eapol_key const* key_nonce; struct wpa_eapol_key const* key_data_length; struct wpa_eapol_key const* replay_counter; struct wpa_eapol_key const* key_length; struct wpa_eapol_key const* key_info; int type; } const wpa_eapol_key ;
typedef struct wpa_eapol_key u8 ;
struct wpa_sm {scalar_t__ proto; } ;
struct wpa_ptk {int kck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct wpa_eapol_key const*,size_t) ;
 size_t VAR_11 ;
 int FUNC_1 (struct wpa_eapol_key const*,struct wpa_eapol_key const*,size_t) ;
 int FUNC_2 (struct wpa_sm*,int ,int,unsigned char const*,int ,struct wpa_eapol_key*,size_t,int ) ;
 int FUNC_3 (int ,char*,struct wpa_eapol_key const*,size_t) ;
 int FUNC_4 (int ,char*) ;
 struct wpa_eapol_key* FUNC_5 (struct wpa_sm*,int ,int *,int,size_t*,void*) ;
 int FUNC_6 (struct wpa_eapol_key*) ;

int FUNC_7(struct wpa_sm *VAR_12, const unsigned char *VAR_13,
                   const struct wpa_eapol_key *VAR_14,
                   int VAR_15, const u8 *VAR_16,
                   const u8 *VAR_17, size_t VAR_18,
                   struct wpa_ptk *VAR_19)
{
    size_t VAR_20;
    struct wpa_eapol_key *VAR_21;
    u8 *VAR_22;

    if (VAR_17 == ((void*)0)) {




        return -1;
    }

    FUNC_3(VAR_6, "WPA: WPA IE for msg 2/4\n", VAR_17, VAR_18);

    VAR_22 = FUNC_5(VAR_12, VAR_3,
                  ((void*)0), sizeof(*VAR_21) + VAR_18,
                  &VAR_20, (void *) &VAR_21);
    if (VAR_22 == ((void*)0)) {
        return -1;
    }

    VAR_21->type = VAR_12->proto == VAR_10 ?
        VAR_0 : VAR_1;
    FUNC_0(VAR_21->key_info,
             VAR_15 | VAR_7 | VAR_8);
    if (VAR_12->proto == VAR_10)
        FUNC_0(VAR_21->key_length, 0);
    else
        FUNC_1(VAR_21->key_length, VAR_14->key_length, 2);

    FUNC_1(VAR_21->replay_counter, VAR_14->replay_counter,
          VAR_11);

    FUNC_0(VAR_21->key_data_length, VAR_18);
    FUNC_1(VAR_21 + 1, VAR_17, VAR_18);

    FUNC_1(VAR_21->key_nonce, VAR_16, VAR_9);

    FUNC_4(VAR_4, "WPA Send EAPOL-Key 2/4\n");

    FUNC_2(VAR_12, VAR_19->kck, VAR_15, VAR_13, VAR_2,
               VAR_22, VAR_20, VAR_21->key_mic);
    FUNC_6(VAR_22);

    return 0;
}
