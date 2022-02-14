
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {int state; scalar_t__ sleepAllowedtick; } ;
struct TYPE_5__ {scalar_t__ powerSaveMode; int ReceivedPktRatePerSecond; TYPE_1__ psMgr; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(zdev_t* VAR_5)
{
    FUNC_8(VAR_5);
    FUNC_6();


    if ( FUNC_2(VAR_5) == VAR_0 )
    {
        return;
    }

FUNC_5("VtxQ is empty now...Check if HAL TXQ is empty\n");


    if ( FUNC_0(VAR_5) != FUNC_1(VAR_5) )
    {
        return;
    }

FUNC_5("HAL TXQ is empty now...Could go to sleep...\n");

    FUNC_7(VAR_5);

    if (VAR_4->sta.powerSaveMode == VAR_3)
    {
        if (VAR_4->sta.ReceivedPktRatePerSecond > 200)
        {
            FUNC_9(VAR_5);
            return;
        }

        if ( FUNC_4(VAR_5)
             && (VAR_4->wlanMode == VAR_1) )
        {
            if (VAR_4->sta.psMgr.sleepAllowedtick) {
                VAR_4->sta.psMgr.sleepAllowedtick--;
                FUNC_9(VAR_5);
                return;
            }
        }
    }

    VAR_4->sta.psMgr.state = VAR_2;

    FUNC_9(VAR_5);


    if ( FUNC_4(VAR_5) )
    {
FUNC_5("zfPowerSavingMgrOnHandleT1 send Null data\n");
        FUNC_3(VAR_5);
    }



}
