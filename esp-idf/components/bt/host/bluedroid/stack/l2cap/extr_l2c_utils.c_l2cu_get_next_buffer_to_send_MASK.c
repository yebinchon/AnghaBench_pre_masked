
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


struct TYPE_26__ {TYPE_8__** p_fixed_ccbs; } ;
typedef TYPE_7__ tL2C_LCB ;
struct TYPE_22__ {scalar_t__ mode; } ;
struct TYPE_23__ {TYPE_3__ fcr; } ;
struct TYPE_20__ {int retrans_q; scalar_t__ remote_busy; scalar_t__ wait_ack; } ;
struct TYPE_27__ {int local_cid; TYPE_6__* p_rcb; TYPE_4__ peer_cfg; int xmit_hold_q; TYPE_1__ fcrb; } ;
typedef TYPE_8__ tL2C_CCB ;
struct TYPE_24__ {int (* pL2CA_TxComplete_Cb ) (int ,int) ;} ;
struct TYPE_25__ {TYPE_5__ api; } ;
struct TYPE_21__ {int (* pL2CA_FixedTxComplete_Cb ) (int ,int) ;} ;
struct TYPE_19__ {TYPE_2__* fixed_reg; } ;
typedef int BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 TYPE_16__ VAR_3 ;
 int FUNC_5 (TYPE_8__*) ;
 TYPE_8__* FUNC_6 (TYPE_7__*) ;
 TYPE_8__* FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int *,TYPE_8__*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

BT_HDR *FUNC_11 (tL2C_LCB *VAR_4)
{
    tL2C_CCB *VAR_5;
    BT_HDR *VAR_6 = ((void*)0);
    VAR_5 = FUNC_7( VAR_4 );





    if (VAR_5 == ((void*)0)) {
        return (((void*)0));
    }

    if (VAR_5->peer_cfg.fcr.mode != VAR_0) {

        if ((VAR_6 = FUNC_3(VAR_5, 0)) == ((void*)0)) {
            return (((void*)0));
        }

    } else {
        VAR_6 = (BT_HDR *)FUNC_1(VAR_5->xmit_hold_q, 0);
        if (((void*)0) == VAR_6) {
            FUNC_0("l2cu_get_buffer_to_send() #2: No data to be sent");
            return (((void*)0));
        }
    }

    if ( VAR_5->p_rcb && VAR_5->p_rcb->api.pL2CA_TxComplete_Cb && (VAR_5->peer_cfg.fcr.mode != VAR_1) ) {
        (*VAR_5->p_rcb->api.pL2CA_TxComplete_Cb)(VAR_5->local_cid, 1);
    }


    FUNC_5 (VAR_5);

    FUNC_8 (VAR_6, VAR_5);


    return (VAR_6);
}
