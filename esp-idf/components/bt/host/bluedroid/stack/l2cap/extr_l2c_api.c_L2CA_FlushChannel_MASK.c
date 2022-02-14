
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
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_18__ {int link_xmit_data_q; int handle; } ;
typedef TYPE_5__ tL2C_LCB ;
struct TYPE_14__ {scalar_t__ mode; } ;
struct TYPE_15__ {TYPE_1__ fcr; } ;
struct TYPE_19__ {int xmit_hold_q; int local_cid; TYPE_4__* p_rcb; TYPE_2__ peer_cfg; TYPE_5__* p_lcb; } ;
typedef TYPE_6__ tL2C_CCB ;
typedef int list_node_t ;
typedef scalar_t__ UINT16 ;
struct TYPE_20__ {scalar_t__ layer_specific; scalar_t__ event; } ;
struct TYPE_16__ {int (* pL2CA_TxComplete_Cb ) (int ,scalar_t__) ;} ;
struct TYPE_17__ {TYPE_3__ api; } ;
struct TYPE_13__ {scalar_t__ is_flush_active; } ;
typedef TYPE_7__ BT_HDR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_12__ VAR_4 ;
 int FUNC_11 (TYPE_6__*) ;
 TYPE_6__* FUNC_12 (int *,scalar_t__) ;
 int * FUNC_13 (int ) ;
 int const* FUNC_14 (int ) ;
 int * FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*) ;
 int FUNC_17 (int ,TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (int ,scalar_t__) ;

UINT16 FUNC_20 (UINT16 VAR_5, UINT16 VAR_6)
{
    tL2C_CCB *VAR_7;
    tL2C_LCB *VAR_8;
    UINT16 VAR_9 = 0,
                    VAR_10 = 0,
                    VAR_11 = 0;

    VAR_7 = FUNC_12(((void*)0), VAR_5);

    if ( !VAR_7 || ((VAR_8 = VAR_7->p_lcb) == ((void*)0)) ) {
        FUNC_5 ("L2CA_FlushChannel()  abnormally returning 0  CID: 0x%04x", VAR_5);
        return (0);
    }

    if (VAR_6 != VAR_2) {
        FUNC_3 ("L2CA_FlushChannel (FLUSH)  CID: 0x%04x  NumToFlush: %d  QC: %u  pFirst: %p",
                         VAR_5, VAR_6,
                         FUNC_9(VAR_7->xmit_hold_q),
                         FUNC_10(VAR_7->xmit_hold_q));
    } else {
        FUNC_3 ("L2CA_FlushChannel (QUERY)  CID: 0x%04x", VAR_5);
    }


    if (VAR_7->peer_cfg.fcr.mode != VAR_1) {

        if (VAR_6 != VAR_2) {

            if ( (FUNC_2(FUNC_1 ()))
                    && (FUNC_0() == 0) ) {
                if ( VAR_4.is_flush_active == VAR_0 ) {
                    VAR_4.is_flush_active = VAR_3;


                    FUNC_6 (VAR_8->handle, 0);
                }
            }
        }




        for (const list_node_t *VAR_12 = FUNC_13(VAR_8->link_xmit_data_q);
                (VAR_6 > 0) && VAR_12 != FUNC_14(VAR_8->link_xmit_data_q);) {
            BT_HDR *VAR_13 = (BT_HDR *)FUNC_16(VAR_12);
            VAR_12 = FUNC_15(VAR_12);
            if ((VAR_13->layer_specific == 0) && (VAR_13->event == VAR_5)) {
                VAR_6--;
                VAR_10++;

                FUNC_17(VAR_8->link_xmit_data_q, VAR_13);
                FUNC_18(VAR_13);
            }
        }
    }


    while ( (VAR_6 != 0) && (!FUNC_8(VAR_7->xmit_hold_q))) {
        BT_HDR *VAR_14 = (BT_HDR *)FUNC_7(VAR_7->xmit_hold_q, 0);
        if (VAR_14) {
            FUNC_18 (VAR_14);
        }
        VAR_6--;
        VAR_11++;
    }


    if ( (VAR_7->p_rcb) && (VAR_7->p_rcb->api.pL2CA_TxComplete_Cb) && (VAR_11) ) {
        (*VAR_7->p_rcb->api.pL2CA_TxComplete_Cb)(VAR_7->local_cid, VAR_11);
    }


    for (const list_node_t *VAR_15 = FUNC_13(VAR_8->link_xmit_data_q);
            VAR_15 != FUNC_14(VAR_8->link_xmit_data_q);
            VAR_15 = FUNC_15(VAR_15)) {

        BT_HDR *VAR_16 = (BT_HDR *)FUNC_16(VAR_15);
        if (VAR_16->event == VAR_5) {
            VAR_9++;
        }
    }


    VAR_9 += FUNC_9(VAR_7->xmit_hold_q);


    FUNC_4 ("L2CA_FlushChannel()  flushed: %u + %u,  num_left: %u", VAR_10, VAR_11, VAR_9);


    FUNC_11 (VAR_7);

    return (VAR_9);
}
