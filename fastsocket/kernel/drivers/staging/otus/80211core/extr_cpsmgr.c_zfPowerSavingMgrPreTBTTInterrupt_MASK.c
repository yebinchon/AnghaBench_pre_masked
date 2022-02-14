
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {scalar_t__ ticks; scalar_t__ maxSleepPeriods; } ;
struct TYPE_5__ {TYPE_1__ psMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t *VAR_1)
{
    FUNC_5(VAR_1);
    FUNC_3();


    if (FUNC_2(VAR_1)) {
        FUNC_0(VAR_1, 0, 0, 0);
        FUNC_1(VAR_1);
        return;
    }

    FUNC_4(VAR_1);
    VAR_0->sta.psMgr.ticks++;

    if ( VAR_0->sta.psMgr.ticks < VAR_0->sta.psMgr.maxSleepPeriods )
    {
        FUNC_6(VAR_1);
        return;
    }
    else
    {
        VAR_0->sta.psMgr.ticks = 0;
    }

    FUNC_6(VAR_1);

    FUNC_1(VAR_1);
}
