
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int colli_tmr_on; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
struct TYPE_6__ {scalar_t__ param; } ;
typedef TYPE_2__ TIMER_LIST_ENT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (TIMER_LIST_ENT *VAR_1)
{
    tBTA_AG_SCB *VAR_2;

    FUNC_0 ("bta_ag_colli_timer_cback");
    if (VAR_1) {
        VAR_2 = (tBTA_AG_SCB *)VAR_1->param;
        if (VAR_2) {
            VAR_2->colli_tmr_on = VAR_0;


            FUNC_1 (VAR_2);
        }
    }
}
