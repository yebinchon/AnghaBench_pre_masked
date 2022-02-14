
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int kck; } ;
struct wpa_sm {scalar_t__ proto; int bssid; TYPE_1__ ptk; int txcb_flags; } ;
struct wpa_eapol_key {int key_mic; int key_data_length; int replay_counter; int key_length; int key_info; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct wpa_sm*,int ,int,int ,int ,int *,size_t,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 (struct wpa_sm*,int ,int *,int,size_t*,void*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct wpa_sm *VAR_11,
                      const struct wpa_eapol_key *VAR_12,
                      int VAR_13, u16 VAR_14)
{
    size_t VAR_15;
    struct wpa_eapol_key *VAR_16;
    u8 *VAR_17;

    VAR_17 = FUNC_4(VAR_11, VAR_3, ((void*)0),
                  sizeof(*VAR_16), &VAR_15, (void *) &VAR_16);
    if (VAR_17 == ((void*)0))
        return -1;

    VAR_11->txcb_flags |= VAR_5;
    FUNC_3(VAR_4, "2/2 txcb_flags=%d\n", VAR_11->txcb_flags);

    VAR_16->type = VAR_11->proto == VAR_9 ?
        VAR_0 : VAR_1;
    VAR_14 &= VAR_6;
    VAR_14 |= VAR_13 | VAR_7 | VAR_8;
    FUNC_0(VAR_16->key_info, VAR_14);
    if (VAR_11->proto == VAR_9)
        FUNC_0(VAR_16->key_length, 0);
    else
        FUNC_1(VAR_16->key_length, VAR_12->key_length, 2);
    FUNC_1(VAR_16->replay_counter, VAR_12->replay_counter,
          VAR_10);

    FUNC_0(VAR_16->key_data_length, 0);

    FUNC_3(VAR_4, "WPA Send 2/2 Group key\n");

    FUNC_2(VAR_11, VAR_11->ptk.kck, VAR_13, VAR_11->bssid, VAR_2,
               VAR_17, VAR_15, VAR_16->key_mic);
    FUNC_5(VAR_17);

    return 0;
}
