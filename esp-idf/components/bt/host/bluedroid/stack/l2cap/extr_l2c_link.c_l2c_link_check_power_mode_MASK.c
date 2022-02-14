
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* p_first_ccb; } ;
struct TYPE_6__ {int handle; int remote_bd_addr; TYPE_1__ ccb_queue; int link_xmit_data_q; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_7__ {int xmit_hold_q; struct TYPE_7__* p_next_ccb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef scalar_t__ tBTM_PM_MODE ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

BOOLEAN FUNC_4 (tL2C_LCB *VAR_4)
{
    tBTM_PM_MODE VAR_5;
    tL2C_CCB *VAR_6;
    BOOLEAN VAR_7 = VAR_2;




    if (FUNC_3(VAR_4->link_xmit_data_q)) {
        for (VAR_6 = VAR_4->ccb_queue.p_first_ccb; VAR_6; VAR_6 = VAR_6->p_next_ccb) {
            if (!FUNC_2(VAR_6->xmit_hold_q)) {
                VAR_7 = VAR_3;
                break;
            }
        }
    } else {
        VAR_7 = VAR_3;
    }


    if ( VAR_7 ) {

        if (FUNC_0(VAR_4->remote_bd_addr, &VAR_5) == VAR_1) {
            if ( VAR_5 == VAR_0 ) {
                FUNC_1 ("LCB(0x%x) is in PM pending state\n", VAR_4->handle);

                return VAR_3;
            }
        }
    }
    return VAR_2;
}
