
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int client_if; scalar_t__ num_clcb; int dereg_pending; } ;
typedef TYPE_2__ tBTA_GATTC_RCB ;
typedef int tBTA_GATTC_DATA ;
struct TYPE_11__ {TYPE_8__* clcb; TYPE_1__* bg_track; } ;
typedef TYPE_3__ tBTA_GATTC_CB ;
typedef size_t UINT8 ;
struct TYPE_13__ {int bta_conn_id; TYPE_2__* p_rcb; scalar_t__ in_use; } ;
struct TYPE_12__ {int layer_specific; int event; } ;
struct TYPE_9__ {int cif_mask; int cif_adv_mask; int remote_bda; scalar_t__ in_use; } ;
typedef TYPE_4__ BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_8__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,int ,int ,int ) ;

void FUNC_5(tBTA_GATTC_CB *VAR_5, tBTA_GATTC_RCB *VAR_6)
{
    UINT8 VAR_7;
    BT_HDR VAR_8;

    if (VAR_6 != ((void*)0)) {

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 ++) {
            if (VAR_5->bg_track[VAR_7].in_use) {
                if (VAR_5->bg_track[VAR_7].cif_mask & (1 << (VAR_6->client_if - 1))) {
                    FUNC_4(VAR_6->client_if, VAR_5->bg_track[VAR_7].remote_bda, VAR_3, VAR_3);
                    FUNC_1(VAR_6->client_if, VAR_5->bg_track[VAR_7].remote_bda, VAR_3);
                }
                if (VAR_5->bg_track[VAR_7].cif_adv_mask & (1 << (VAR_6->client_if - 1))) {
                    FUNC_4(VAR_6->client_if, VAR_5->bg_track[VAR_7].remote_bda, VAR_3, VAR_4);
                }
            }
        }

        if (VAR_6->num_clcb > 0) {

            for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 ++) {
                if (VAR_5->clcb[VAR_7].in_use && (VAR_5->clcb[VAR_7].p_rcb == VAR_6)) {
                    VAR_6->dereg_pending = VAR_4;

                    VAR_8.event = VAR_0;
                    VAR_8.layer_specific = VAR_5->clcb[VAR_7].bta_conn_id;
                    FUNC_2(&VAR_5->clcb[VAR_7], (tBTA_GATTC_DATA *)&VAR_8) ;
                }
            }
        } else {
            FUNC_3(VAR_6);
        }
    } else {
        FUNC_0("bta_gattc_deregister Deregister Failedm unknown client cif");
    }
}
