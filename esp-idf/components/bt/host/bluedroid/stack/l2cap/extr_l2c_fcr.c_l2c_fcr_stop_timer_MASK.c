
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ in_use; } ;
struct TYPE_5__ {TYPE_4__ mon_retrans_timer; } ;
struct TYPE_6__ {TYPE_1__ fcrb; } ;
typedef TYPE_2__ tL2C_CCB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;

void FUNC_2 (tL2C_CCB *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    if (VAR_0->fcrb.mon_retrans_timer.in_use) {
        FUNC_1 (&VAR_0->fcrb.mon_retrans_timer);
    }
}
