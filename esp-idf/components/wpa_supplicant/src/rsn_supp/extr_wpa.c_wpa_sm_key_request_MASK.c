
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int kck; } ;
struct wpa_sm {scalar_t__ pairwise_cipher; scalar_t__ proto; TYPE_1__ ptk; scalar_t__ ptk_set; int request_counter; int key_mgmt; } ;
struct wpa_eapol_key {int * key_mic; int key_data_length; int replay_counter; int key_length; int key_info; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,int) ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct wpa_sm*,int ,int,int *,int ,int *,size_t,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int * FUNC_7 (struct wpa_sm*,int ,int *,int,size_t*,void*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct wpa_sm*,int *) ;

void FUNC_10(struct wpa_sm *VAR_17, int VAR_18, int VAR_19)
{
    size_t VAR_20;
    struct wpa_eapol_key *VAR_21;
    int VAR_22, VAR_23;
    u8 VAR_24[VAR_2], *VAR_25;

    if (FUNC_4(VAR_17->key_mgmt) || FUNC_5(VAR_17->key_mgmt))
        VAR_23 = VAR_12;
    else if (VAR_17->pairwise_cipher == VAR_6)
        VAR_23 = VAR_14;
    else
        VAR_23 = VAR_13;

    if (FUNC_9(VAR_17, VAR_24) < 0) {




        return;
    }

    VAR_25 = FUNC_7(VAR_17, VAR_4, ((void*)0),
                  sizeof(*VAR_21), &VAR_20, (void *) &VAR_21);
    if (VAR_25 == ((void*)0))
        return;

    VAR_21->type = VAR_17->proto == VAR_15 ?
        VAR_0 : VAR_1;
    VAR_22 = VAR_10 | VAR_23;
    if (VAR_17->ptk_set)
        VAR_22 |= VAR_9;
    if (VAR_18)
        VAR_22 |= VAR_7|VAR_11;
    if (VAR_19)
        VAR_22 |= VAR_8;
    FUNC_0(VAR_21->key_info, VAR_22);
    FUNC_0(VAR_21->key_length, 0);
    FUNC_2(VAR_21->replay_counter, VAR_17->request_counter,
          VAR_16);
    FUNC_1(VAR_17->request_counter, VAR_16);

    FUNC_0(VAR_21->key_data_length, 0);






    FUNC_3(VAR_17, VAR_17->ptk.kck, VAR_23, VAR_24, VAR_3,
               VAR_25, VAR_20, VAR_22 & VAR_9 ?
               VAR_21->key_mic : ((void*)0));
    FUNC_8(VAR_25);
}
