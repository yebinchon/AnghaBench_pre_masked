
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tL2C_RCB ;
struct TYPE_6__ {TYPE_3__* p_first_ccb; } ;
struct TYPE_7__ {scalar_t__ link_state; TYPE_1__ ccb_queue; scalar_t__ in_use; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_8__ {scalar_t__ chnl_state; int * p_rcb; scalar_t__ in_use; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int UINT16 ;
struct TYPE_9__ {TYPE_2__* lcb_pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 TYPE_4__ VAR_5 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4 (UINT16 VAR_6)
{
    tL2C_RCB *VAR_7;
    tL2C_CCB *VAR_8;
    tL2C_LCB *VAR_9;
    int VAR_10;


    if ((VAR_7 = FUNC_2 (VAR_6)) != ((void*)0)) {
        VAR_9 = &VAR_5.lcb_pool[0];
        for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++, VAR_9++) {
            if (VAR_9->in_use) {
                if (((VAR_8 = VAR_9->ccb_queue.p_first_ccb) == ((void*)0))
                        || (VAR_9->link_state == VAR_3)) {
                    continue;
                }

                if ((VAR_8->in_use) &&
                        ((VAR_8->chnl_state == VAR_0) ||
                         (VAR_8->chnl_state == VAR_1))) {
                    continue;
                }

                if (VAR_8->p_rcb == VAR_7) {
                    FUNC_1 (VAR_8, VAR_2, ((void*)0));
                }
            }
        }
        FUNC_3 (VAR_7);
    } else {
        FUNC_0 ("L2CAP - PSM: 0x%04x not found for deregistration", VAR_6);
    }
}
