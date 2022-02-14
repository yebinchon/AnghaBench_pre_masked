
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct wpa_eapol_key {int key_mic; struct wpa_eapol_key const* key_data_length; struct wpa_eapol_key const* replay_counter; struct wpa_eapol_key const* key_length; struct wpa_eapol_key const* key_info; int type; } const wpa_eapol_key ;
typedef struct wpa_eapol_key u8 ;
typedef size_t u16 ;
struct wpa_sm {scalar_t__ proto; int txcb_flags; } ;
struct wpa_ptk {int kck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct wpa_eapol_key const*,size_t) ;
 size_t VAR_10 ;
 int FUNC_1 (struct wpa_eapol_key const*,struct wpa_eapol_key const*,size_t) ;
 int FUNC_2 (struct wpa_sm*,int ,size_t,unsigned char const*,int ,struct wpa_eapol_key*,size_t,int ) ;
 int FUNC_3 (int ,char*,struct wpa_eapol_key const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;
 struct wpa_eapol_key* FUNC_5 (struct wpa_sm*,int ,int *,int,size_t*,void*) ;
 int FUNC_6 (struct wpa_eapol_key*) ;

int FUNC_7(struct wpa_sm *VAR_11, const unsigned char *VAR_12,
                   const struct wpa_eapol_key *VAR_13,
                   u16 VAR_14, u16 VAR_15,
                   const u8 *VAR_16, size_t VAR_17,
                   struct wpa_ptk *VAR_18)
{
    size_t VAR_19;
    struct wpa_eapol_key *VAR_20;
    u8 *VAR_21;

    if (VAR_16)
        FUNC_3(VAR_4, "WPA: KDE for msg 4/4", VAR_16, VAR_17);

    VAR_21 = FUNC_5(VAR_11, VAR_3, ((void*)0),
                  sizeof(*VAR_20) + VAR_17,
                  &VAR_19, (void *) &VAR_20);
    if (VAR_21 == ((void*)0))
        return -1;

    VAR_11->txcb_flags |= VAR_5;
    FUNC_4(VAR_4, "tx 4/4 txcb_flags=%d\n", VAR_11->txcb_flags);

    VAR_20->type = VAR_11->proto == VAR_9 ?
        VAR_0 : VAR_1;
    VAR_15 &= VAR_8;
    VAR_15 |= VAR_14 | VAR_6 | VAR_7;
    FUNC_0(VAR_20->key_info, VAR_15);
    if (VAR_11->proto == VAR_9)
        FUNC_0(VAR_20->key_length, 0);
    else
        FUNC_1(VAR_20->key_length, VAR_13->key_length, 2);
    FUNC_1(VAR_20->replay_counter, VAR_13->replay_counter,
          VAR_10);

    FUNC_0(VAR_20->key_data_length, VAR_17);
    if (VAR_16)
        FUNC_1(VAR_20 + 1, VAR_16, VAR_17);

    FUNC_4(VAR_4, "WPA Send EAPOL-Key 4/4\n");
    FUNC_2(VAR_11, VAR_18->kck, VAR_14, VAR_12, VAR_2,
               VAR_21, VAR_19, VAR_20->key_mic);
    FUNC_6(VAR_21);

    return 0;
}
