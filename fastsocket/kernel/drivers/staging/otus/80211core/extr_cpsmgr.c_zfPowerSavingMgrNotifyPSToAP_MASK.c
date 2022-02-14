
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_7__ {scalar_t__ txUnicastFrm; scalar_t__ txBroadcastFrm; scalar_t__ txMulticastFrm; } ;
struct TYPE_5__ {int tempWakeUp; scalar_t__ lastTxUnicastFrm; scalar_t__ lastTxBroadcastFrm; scalar_t__ lastTxMulticastFrm; } ;
struct TYPE_6__ {TYPE_1__ psMgr; } ;
struct TYPE_8__ {TYPE_3__ commTally; TYPE_2__ sta; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zdev_t *VAR_1)
{
    FUNC_3(VAR_1);
    FUNC_1();

    if ( (VAR_0->sta.psMgr.tempWakeUp != 1)&&
         (VAR_0->sta.psMgr.lastTxUnicastFrm != VAR_0->commTally.txUnicastFrm ||
          VAR_0->sta.psMgr.lastTxBroadcastFrm != VAR_0->commTally.txBroadcastFrm ||
          VAR_0->sta.psMgr.lastTxMulticastFrm != VAR_0->commTally.txMulticastFrm) )
    {
        FUNC_2(VAR_1);
        VAR_0->sta.psMgr.lastTxUnicastFrm = VAR_0->commTally.txUnicastFrm;
        VAR_0->sta.psMgr.lastTxBroadcastFrm = VAR_0->commTally.txBroadcastFrm;
        VAR_0->sta.psMgr.lastTxMulticastFrm = VAR_0->commTally.txMulticastFrm;
        FUNC_4(VAR_1);

        FUNC_0(VAR_1, 1);
    }
}
