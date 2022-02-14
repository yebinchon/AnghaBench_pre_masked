
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ num_clcb; scalar_t__ dereg_pending; int client_if; int (* p_cback ) (int ,TYPE_7__*) ;} ;
typedef TYPE_4__ tBTA_GATTC_RCB ;
struct TYPE_16__ {int reason; } ;
struct TYPE_14__ {scalar_t__ event; int layer_specific; } ;
struct TYPE_18__ {TYPE_3__ int_conn; TYPE_1__ hdr; } ;
typedef TYPE_5__ tBTA_GATTC_DATA ;
struct TYPE_19__ {scalar_t__ transport; int bda; int status; int reason; int bta_conn_id; TYPE_4__* p_rcb; } ;
typedef TYPE_6__ tBTA_GATTC_CLCB ;
typedef int (* tBTA_GATTC_CBACK ) (int ,TYPE_7__*) ;
struct TYPE_15__ {int reason; int status; int remote_bda; int conn_id; int client_if; } ;
struct TYPE_20__ {TYPE_2__ close; } ;
typedef TYPE_7__ tBTA_GATTC ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,TYPE_7__*) ;

void FUNC_7(tBTA_GATTC_CLCB *VAR_7, tBTA_GATTC_DATA *VAR_8)
{
    tBTA_GATTC_CBACK *VAR_9 = &VAR_7->p_rcb->p_cback;
    tBTA_GATTC_RCB *VAR_10 = VAR_7->p_rcb;
    tBTA_GATTC VAR_11;

    FUNC_0("bta_gattc_close conn_id=%d", VAR_7->bta_conn_id);

    VAR_11.close.client_if = VAR_7->p_rcb->client_if;
    VAR_11.close.conn_id = VAR_7->bta_conn_id;
    VAR_11.close.reason = VAR_7->reason;
    VAR_11.close.status = VAR_7->status;
    FUNC_2(VAR_11.close.remote_bda, VAR_7->bda);

    if (VAR_7->transport == VAR_6) {
        FUNC_5( VAR_5 , VAR_0, VAR_7->bda);
    }

    FUNC_3(VAR_7);

    if (VAR_8->hdr.event == VAR_1) {
        VAR_11.close.status = FUNC_1(VAR_8->hdr.layer_specific);
    } else if (VAR_8->hdr.event == VAR_3) {
        VAR_11.close.status = VAR_4;
        VAR_11.close.reason = VAR_8->int_conn.reason;
    }

    if (VAR_9) {
        (* VAR_9)(VAR_2, (tBTA_GATTC *)&VAR_11);
    }

    if (VAR_10->num_clcb == 0 && VAR_10->dereg_pending) {
        FUNC_4(VAR_10);
    }
}
