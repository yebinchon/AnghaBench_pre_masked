
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_last_ccb; TYPE_3__* p_first_ccb; } ;
typedef TYPE_2__ tL2C_CCB_Q ;
struct TYPE_8__ {scalar_t__ ccb_priority; TYPE_5__* p_lcb; struct TYPE_8__* p_prev_ccb; struct TYPE_8__* p_next_ccb; int local_cid; int in_use; } ;
typedef TYPE_3__ tL2C_CCB ;
struct TYPE_9__ {TYPE_1__* rr_serv; TYPE_2__ ccb_queue; } ;
struct TYPE_6__ {scalar_t__ num_ccb; int quota; TYPE_3__* p_serve_ccb; TYPE_3__* p_first_ccb; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,TYPE_5__*) ;

void FUNC_3 (tL2C_CCB *VAR_0)
{
    tL2C_CCB *VAR_1;
    tL2C_CCB_Q *VAR_2 = ((void*)0);



    if (VAR_0->p_lcb != ((void*)0)) {
        VAR_2 = &VAR_0->p_lcb->ccb_queue;
    }

    if ( (!VAR_0->in_use) || (VAR_2 == ((void*)0)) ) {
        FUNC_2 ("l2cu_enqueue_ccb  CID: 0x%04x ERROR in_use: %u  p_lcb: %p",
                           VAR_0->local_cid, VAR_0->in_use, VAR_0->p_lcb);
        return;
    }

    FUNC_1 ("l2cu_enqueue_ccb CID: 0x%04x  priority: %d",
                       VAR_0->local_cid, VAR_0->ccb_priority);


    if (!VAR_2->p_first_ccb) {
        VAR_2->p_first_ccb = VAR_2->p_last_ccb = VAR_0;
        VAR_0->p_next_ccb = VAR_0->p_prev_ccb = ((void*)0);
    } else {
        VAR_1 = VAR_2->p_first_ccb;

        while (VAR_1 != ((void*)0)) {

            if (VAR_0->ccb_priority < VAR_1->ccb_priority) {

                if (VAR_1 == VAR_2->p_first_ccb) {
                    VAR_2->p_first_ccb = VAR_0;
                } else {
                    VAR_1->p_prev_ccb->p_next_ccb = VAR_0;
                }

                VAR_0->p_next_ccb = VAR_1;
                VAR_0->p_prev_ccb = VAR_1->p_prev_ccb;
                VAR_1->p_prev_ccb = VAR_0;
                break;
            }

            VAR_1 = VAR_1->p_next_ccb;
        }


        if (!VAR_1) {

            VAR_2->p_last_ccb->p_next_ccb = VAR_0;

            VAR_0->p_next_ccb = ((void*)0);
            VAR_0->p_prev_ccb = VAR_2->p_last_ccb;
            VAR_2->p_last_ccb = VAR_0;
        }
    }



    if (VAR_0->p_lcb != ((void*)0)) {

        if (VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].num_ccb == 0 ) {

            VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_first_ccb = VAR_0;

            VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].p_serve_ccb = VAR_0;

            VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].quota = FUNC_0(VAR_0->ccb_priority);
        }

        VAR_0->p_lcb->rr_serv[VAR_0->ccb_priority].num_ccb++;
    }


}
