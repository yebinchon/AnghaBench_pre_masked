
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* p_first_ccb; TYPE_3__* p_last_ccb; } ;
struct TYPE_6__ {scalar_t__ link_state; TYPE_1__ ccb_queue; scalar_t__ in_use; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_7__ {scalar_t__ chnl_state; scalar_t__ in_use; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {TYPE_2__* lcb_pool; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

BOOLEAN FUNC_0 (void)
{
    tL2C_LCB *VAR_7;
    tL2C_CCB *VAR_8;
    UINT16 VAR_9;
    BOOLEAN VAR_10 = VAR_2;

    VAR_7 = &VAR_6.lcb_pool[0];

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++, VAR_7++) {
        if (VAR_7->in_use) {

            if ((!VAR_7->ccb_queue.p_first_ccb) || (VAR_7->link_state == VAR_3)) {
                VAR_10 = VAR_5;
                break;
            }

            else if (VAR_7->ccb_queue.p_first_ccb == VAR_7->ccb_queue.p_last_ccb) {
                VAR_8 = VAR_7->ccb_queue.p_first_ccb;

                if ((VAR_8->in_use) &&
                        ((VAR_8->chnl_state == VAR_0) ||
                         (VAR_8->chnl_state == VAR_1))) {
                    VAR_10 = VAR_5;
                    break;
                }
            }
        }
    }
    return VAR_10;
}
