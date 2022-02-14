
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p_last_ccb; TYPE_3__* p_first_ccb; } ;
typedef TYPE_2__ tL2C_CCB_Q ;
struct TYPE_10__ {size_t ccb_priority; struct TYPE_10__* p_prev_ccb; struct TYPE_10__* p_next_ccb; TYPE_5__* p_lcb; int in_use; int local_cid; } ;
typedef TYPE_3__ tL2C_CCB ;
struct TYPE_11__ {TYPE_1__* rr_serv; TYPE_2__ ccb_queue; } ;
struct TYPE_8__ {scalar_t__ num_ccb; TYPE_3__* p_first_ccb; TYPE_3__* p_serve_ccb; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ,TYPE_5__*,TYPE_2__*,TYPE_3__*) ;

void FUNC_2 (tL2C_CCB *VAR_0)
{
    tL2C_CCB_Q *VAR_1 = ((void*)0);

    FUNC_0 ("l2cu_dequeue_ccb  CID: 0x%04x", VAR_0->local_cid);



    if (VAR_0->p_lcb != ((void*)0)) {
        VAR_1 = &VAR_0->p_lcb->ccb_queue;
    }

    if ( (!VAR_0->in_use) || (VAR_1 == ((void*)0)) || (VAR_1->p_first_ccb == ((void*)0)) ) {
        FUNC_1 ("l2cu_dequeue_ccb  CID: 0x%04x ERROR in_use: %u  p_lcb: %p  p_q: %p  p_q->p_first_ccb: %p",
                           VAR_0->local_cid, VAR_0->in_use, VAR_0->p_lcb, VAR_1, VAR_1 ? VAR_1->p_first_ccb : 0);
        return;
    }



    if (VAR_0->p_lcb != ((void*)0)) {

        VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].num_ccb--;


        if (VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].num_ccb == 0 ) {
            VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_first_ccb = ((void*)0);
            VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_serve_ccb = ((void*)0);
        } else {

            if ( VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_first_ccb == VAR_0 ) {
                VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_first_ccb = VAR_0->p_next_ccb;
            }

            if ( VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_serve_ccb == VAR_0 ) {

                VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_serve_ccb
                    = VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_first_ccb;
            }
        }
    }


    if (VAR_0 == VAR_1->p_first_ccb) {

        VAR_1->p_first_ccb = VAR_0->p_next_ccb;

        if (VAR_1->p_first_ccb) {
            VAR_1->p_first_ccb->p_prev_ccb = ((void*)0);
        } else {
            VAR_1->p_last_ccb = ((void*)0);
        }
    } else if (VAR_0 == VAR_1->p_last_ccb) {

        VAR_1->p_last_ccb = VAR_0->p_prev_ccb;
        VAR_1->p_last_ccb->p_next_ccb = ((void*)0);
    } else {

        VAR_0->p_prev_ccb->p_next_ccb = VAR_0->p_next_ccb;
        VAR_0->p_next_ccb->p_prev_ccb = VAR_0->p_prev_ccb;
    }

    VAR_0->p_next_ccb = VAR_0->p_prev_ccb = ((void*)0);
}
