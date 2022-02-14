
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_first_ccb; } ;
struct TYPE_7__ {TYPE_1__ ccb_queue; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_8__ {scalar_t__ remote_cid; scalar_t__ in_use; struct TYPE_8__* p_next_ccb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef scalar_t__ UINT16 ;



tL2C_CCB *FUNC_0 (tL2C_LCB *VAR_0, UINT16 VAR_1)
{
    tL2C_CCB *VAR_2;


    if (!VAR_0) {
        return ((void*)0);
    } else {
        for (VAR_2 = VAR_0->ccb_queue.p_first_ccb; VAR_2; VAR_2 = VAR_2->p_next_ccb)
            if ((VAR_2->in_use) && (VAR_2->remote_cid == VAR_1)) {
                return (VAR_2);
            }
    }


    return (((void*)0));
}
