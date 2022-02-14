
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int kck; } ;
typedef TYPE_1__ u8 ;
typedef int u16 ;
struct TYPE_11__ {int kck; } ;
struct wpa_sm {int ptk_set; int rx_replay_counter_set; TYPE_1__* request_counter; TYPE_1__* rx_replay_counter; TYPE_1__ ptk; TYPE_4__ tptk; scalar_t__ tptk_set; } ;
struct wpa_eapol_key {TYPE_4__* replay_counter; TYPE_4__* key_mic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__ const*,size_t,TYPE_4__*) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct wpa_sm *VAR_2,
                           struct wpa_eapol_key *VAR_3,
                           u16 VAR_4,
                           const u8 *VAR_5, size_t VAR_6)
{
    u8 VAR_7[16];
    int VAR_8 = 0;

    FUNC_1(VAR_7, VAR_3->key_mic, 16);
    if (VAR_2->tptk_set) {
        FUNC_2(VAR_3->key_mic, 0, 16);
        FUNC_3(VAR_2->tptk.kck, VAR_4, VAR_5, VAR_6,
                  VAR_3->key_mic);
        if (FUNC_0(VAR_7, VAR_3->key_mic, 16) != 0) {




        } else {
            VAR_8 = 1;
            VAR_2->tptk_set = 0;
            VAR_2->ptk_set = 1;
            FUNC_1(&VAR_2->ptk, &VAR_2->tptk, sizeof(VAR_2->ptk));
        }
    }

    if (!VAR_8 && VAR_2->ptk_set) {
        FUNC_2(VAR_3->key_mic, 0, 16);
        FUNC_3(VAR_2->ptk.kck, VAR_4, VAR_5, VAR_6,
                  VAR_3->key_mic);
        if (FUNC_0(VAR_7, VAR_3->key_mic, 16) != 0) {




            return -1;
        }
        VAR_8 = 1;
    }

    if (!VAR_8) {




        return -1;
    }

    FUNC_1(VAR_2->rx_replay_counter, VAR_3->replay_counter,
          VAR_1);
    VAR_2->rx_replay_counter_set = 1;

    FUNC_1(VAR_2->request_counter, VAR_3->replay_counter,
          VAR_1);
    return 0;
}
