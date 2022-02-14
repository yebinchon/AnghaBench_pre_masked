
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_first_ccb; } ;
struct TYPE_8__ {TYPE_1__ ccb_queue; scalar_t__ in_use; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_9__ {struct TYPE_9__* p_next_ccb; } ;
typedef TYPE_3__ tL2C_CCB ;
struct TYPE_10__ {TYPE_2__* lcb_pool; } ;
typedef scalar_t__ BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 TYPE_5__ VAR_3 ;
 TYPE_2__* FUNC_3 (scalar_t__,int ) ;

void FUNC_4 (BD_ADDR VAR_4)
{
    tL2C_LCB *VAR_5;
    tL2C_CCB *VAR_6;
    tL2C_CCB *VAR_7;
    int VAR_8;
    FUNC_0 ("l2cu_resubmit_pending_sec_req  p_bda: %p", VAR_4);


    if (VAR_4) {
        VAR_5 = FUNC_3 (VAR_4, VAR_0);

        if (VAR_5) {

            for (VAR_6 = VAR_5->ccb_queue.p_first_ccb; VAR_6; VAR_6 = VAR_7) {
                VAR_7 = VAR_6->p_next_ccb;
                FUNC_2 (VAR_6, VAR_1, ((void*)0));
            }
        } else {
            FUNC_1 ("l2cu_resubmit_pending_sec_req - unknown BD_ADDR");
        }
    } else {

        for (VAR_8 = 0, VAR_5 = &VAR_3.lcb_pool[0]; VAR_8 < VAR_2; VAR_8++, VAR_5++) {
            if (VAR_5->in_use) {

                for (VAR_6 = VAR_5->ccb_queue.p_first_ccb; VAR_6; VAR_6 = VAR_7) {
                    VAR_7 = VAR_6->p_next_ccb;
                    FUNC_2 (VAR_6, VAR_1, ((void*)0));
                }
            }
        }
    }
}
