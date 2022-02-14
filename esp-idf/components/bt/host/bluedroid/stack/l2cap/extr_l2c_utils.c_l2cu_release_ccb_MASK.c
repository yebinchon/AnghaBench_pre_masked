
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ psm; scalar_t__ real_psm; } ;
typedef TYPE_3__ tL2C_RCB ;
struct TYPE_14__ {int p_first_ccb; } ;
struct TYPE_16__ {scalar_t__ link_state; TYPE_2__ ccb_queue; scalar_t__ in_use; int remote_bd_addr; } ;
typedef TYPE_4__ tL2C_LCB ;
struct TYPE_13__ {int * waiting_for_ack_q; int * retrans_q; int * srej_rcv_hold_q; } ;
struct TYPE_17__ {scalar_t__ local_cid; int should_free_rcb; scalar_t__ in_use; struct TYPE_17__* p_next_ccb; struct TYPE_17__* p_prev_ccb; TYPE_4__* p_lcb; TYPE_1__ fcrb; int * xmit_hold_q; int timer_entry; TYPE_3__* p_rcb; } ;
typedef TYPE_5__ tL2C_CCB ;
struct TYPE_12__ {TYPE_5__* p_free_ccb_last; TYPE_5__* p_free_ccb_first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 () ;
 TYPE_10__ VAR_4 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_5 ;

void FUNC_10 (tL2C_CCB *VAR_6)
{
    tL2C_LCB *VAR_7 = VAR_6->p_lcb;
    tL2C_RCB *VAR_8 = VAR_6->p_rcb;

    FUNC_0 ("l2cu_release_ccb: cid 0x%04x  in_use: %u", VAR_6->local_cid, VAR_6->in_use);


    if (!VAR_6->in_use) {
        return;
    }

    if (VAR_8 && (VAR_8->psm != VAR_8->real_psm)) {
        FUNC_1(VAR_8->psm);
    }

    if (VAR_6->should_free_rcb) {
        FUNC_9(VAR_8);
        VAR_6->p_rcb = ((void*)0);
        VAR_6->should_free_rcb = 0;
    }

    if (VAR_7) {
        FUNC_2 (VAR_7->remote_bd_addr);
    }


    FUNC_3 (&VAR_6->timer_entry);

    FUNC_4(VAR_6->xmit_hold_q, VAR_5);
    VAR_6->xmit_hold_q = ((void*)0);

    FUNC_4(VAR_6->fcrb.srej_rcv_hold_q, VAR_5);
    FUNC_4(VAR_6->fcrb.retrans_q, VAR_5);
    FUNC_4(VAR_6->fcrb.waiting_for_ack_q, VAR_5);
    VAR_6->fcrb.srej_rcv_hold_q = ((void*)0);
    VAR_6->fcrb.retrans_q = ((void*)0);
    VAR_6->fcrb.waiting_for_ack_q = ((void*)0);




    FUNC_5 (VAR_6);


    if ( (VAR_7) &&
            ( (VAR_6->local_cid >= VAR_1)

              || (VAR_6->local_cid == VAR_2)

            )
       ) {
        FUNC_7 (VAR_6);


        VAR_6->p_lcb = ((void*)0);
    }


    if (!VAR_4.p_free_ccb_first) {
        VAR_4.p_free_ccb_first = VAR_6;
        VAR_4.p_free_ccb_last = VAR_6;
        VAR_6->p_next_ccb = ((void*)0);
        VAR_6->p_prev_ccb = ((void*)0);
    } else {
        VAR_6->p_next_ccb = ((void*)0);
        VAR_6->p_prev_ccb = VAR_4.p_free_ccb_last;
        VAR_4.p_free_ccb_last->p_next_ccb = VAR_6;
        VAR_4.p_free_ccb_last = VAR_6;
    }


    VAR_6->in_use = VAR_0;


    if ((VAR_7) && VAR_7->in_use && (VAR_7->link_state == VAR_3)) {
        if (!VAR_7->ccb_queue.p_first_ccb) {
            FUNC_8 (VAR_7);
        } else {

            FUNC_6 ();
        }
    }
}
