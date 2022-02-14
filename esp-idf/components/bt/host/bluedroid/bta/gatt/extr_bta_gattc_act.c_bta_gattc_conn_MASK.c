
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tBTA_GATT_STATUS ;
typedef int tBTA_GATTC_IF ;
struct TYPE_12__ {int layer_specific; } ;
struct TYPE_14__ {void* already_connect; TYPE_1__ hdr; } ;
struct TYPE_13__ {scalar_t__ layer_specific; } ;
struct TYPE_15__ {TYPE_3__ int_conn; TYPE_2__ hdr; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
struct TYPE_16__ {TYPE_8__* p_srcb; int transport; int bta_conn_id; int bda; scalar_t__ p_rcb; int state; } ;
typedef TYPE_5__ tBTA_GATTC_CLCB ;
struct TYPE_17__ {scalar_t__ state; scalar_t__ mtu; void* srvc_hdl_chg; int * p_srvc_cache; int connected; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__,int *,int ,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,int ,int *) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (int ,int ,int ) ;

void FUNC_9(tBTA_GATTC_CLCB *VAR_13, tBTA_GATTC_DATA *VAR_14)
{
    tBTA_GATTC_IF VAR_15;
    FUNC_0("bta_gattc_conn server cache state=%d", VAR_13->p_srcb->state);

    if (VAR_14 != ((void*)0)) {
        FUNC_0("bta_gattc_conn conn_id=%d", VAR_14->hdr.layer_specific);
        VAR_13->bta_conn_id = VAR_14->int_conn.hdr.layer_specific;

        FUNC_1(VAR_14->hdr.layer_specific,
                                &VAR_15, VAR_13->bda, &VAR_13->transport);
    }

    VAR_13->p_srcb->connected = VAR_12;

    if (VAR_13->p_srcb->mtu == 0) {
        VAR_13->p_srcb->mtu = VAR_11;
    }


    if (VAR_13->p_srcb->p_srvc_cache == ((void*)0) ||
            VAR_13->p_srcb->state != VAR_4) {
        if (VAR_13->p_srcb->state == VAR_4) {

            VAR_13->p_srcb->state = VAR_5;
            if (FUNC_2(VAR_13)) {
                VAR_13->p_srcb->state = VAR_4;
                FUNC_4(VAR_13->p_srcb, VAR_7);

                FUNC_3(VAR_13->bta_conn_id, VAR_13->bda);
            } else

            {
                VAR_13->p_srcb->state = VAR_3;

                FUNC_7(VAR_13, ((void*)0));
            }
        } else {
            VAR_13->state = VAR_1;
        }
    } else {

        if (VAR_13->p_srcb->srvc_hdl_chg) {
            VAR_13->p_srcb->srvc_hdl_chg = VAR_10;

            FUNC_6(VAR_13, VAR_2, ((void*)0));
        }
    }

    if (VAR_13->p_rcb) {

        if (VAR_13->transport == VAR_9) {
            FUNC_8(VAR_8, VAR_0, VAR_13->bda);
        }
        tBTA_GATT_STATUS VAR_16 = VAR_7;
        if (VAR_14 && VAR_14->int_conn.already_connect) {

            VAR_14->int_conn.already_connect = VAR_10;
            VAR_16 = VAR_6;
        }
        FUNC_5(VAR_13->p_rcb,
                                  VAR_16,
                                  VAR_13->bda,
                                  VAR_13->bta_conn_id,
                                  VAR_13->transport,
                                  VAR_13->p_srcb->mtu);

    }
}
