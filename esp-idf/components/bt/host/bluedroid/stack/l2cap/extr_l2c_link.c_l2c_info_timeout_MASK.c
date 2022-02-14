
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* p_first_ccb; } ;
struct TYPE_9__ {scalar_t__ link_state; TYPE_1__ ccb_queue; int remote_bd_addr; scalar_t__ w4_info_rsp; int info_timer_entry; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_10__ {int bd_addr; int status; } ;
typedef TYPE_3__ tL2C_CONN_INFO ;
struct TYPE_11__ {scalar_t__ chnl_state; struct TYPE_11__* p_next_ccb; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3 (tL2C_LCB *VAR_9)
{
    tL2C_CCB *VAR_10;

    tL2C_CONN_INFO VAR_11;


    if (VAR_9->w4_info_rsp) {

        for (VAR_10 = VAR_9->ccb_queue.p_first_ccb; VAR_10; VAR_10 = VAR_10->p_next_ccb) {
            if ( (VAR_10->chnl_state == VAR_1) || (VAR_10->chnl_state == VAR_2) ) {
                FUNC_0 (&VAR_9->info_timer_entry, VAR_0, VAR_5);
                return;
            }
        }

        VAR_9->w4_info_rsp = VAR_3;


        if ((VAR_9->link_state != VAR_7) &&
                (VAR_9->link_state != VAR_8)) {

            if (VAR_9->ccb_queue.p_first_ccb) {
                VAR_11.status = VAR_4;
                FUNC_2 (VAR_11.bd_addr, VAR_9->remote_bd_addr, sizeof(BD_ADDR));

                for (VAR_10 = VAR_9->ccb_queue.p_first_ccb; VAR_10; VAR_10 = VAR_10->p_next_ccb) {
                    FUNC_1 (VAR_10, VAR_6, &VAR_11);
                }
            }
        }

    }
}
