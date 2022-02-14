
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_first_ccb; } ;
struct TYPE_5__ {int timer_entry; TYPE_1__ ccb_queue; } ;
typedef TYPE_2__ tL2C_LCB ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;

void FUNC_2 (BD_ADDR VAR_3)
{
    tL2C_LCB *VAR_4 = FUNC_1 (VAR_3, VAR_1);

    if ( (VAR_4) && (!VAR_4->ccb_queue.p_first_ccb) ) {
        FUNC_0 (&VAR_4->timer_entry, VAR_0, VAR_2);
    }
}
