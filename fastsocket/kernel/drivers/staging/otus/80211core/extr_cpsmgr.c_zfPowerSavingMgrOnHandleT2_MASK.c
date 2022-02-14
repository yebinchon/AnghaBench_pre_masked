
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_6__ {scalar_t__ tempWakeUp; int lastTxMulticastFrm; int lastTxBroadcastFrm; int lastTxUnicastFrm; int state; } ;
struct TYPE_7__ {TYPE_2__ psMgr; } ;
struct TYPE_5__ {int txMulticastFrm; int txBroadcastFrm; int txUnicastFrm; } ;
struct TYPE_8__ {TYPE_3__ sta; TYPE_1__ commTally; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(zdev_t* VAR_2)
{
    FUNC_6(VAR_2);
    FUNC_4();


    if ( FUNC_0(VAR_2) != FUNC_1(VAR_2) )
    {
        return;
    }

    FUNC_5(VAR_2);
    VAR_1->sta.psMgr.state = VAR_0;
    VAR_1->sta.psMgr.lastTxUnicastFrm = VAR_1->commTally.txUnicastFrm;
    VAR_1->sta.psMgr.lastTxBroadcastFrm = VAR_1->commTally.txBroadcastFrm;
    VAR_1->sta.psMgr.lastTxMulticastFrm = VAR_1->commTally.txMulticastFrm;
    FUNC_7(VAR_2);


FUNC_3("zfPowerSavingMgrOnHandleT2 zzzz....\n");
    FUNC_2(VAR_2, 1);
    VAR_1->sta.psMgr.tempWakeUp = 0;
}
