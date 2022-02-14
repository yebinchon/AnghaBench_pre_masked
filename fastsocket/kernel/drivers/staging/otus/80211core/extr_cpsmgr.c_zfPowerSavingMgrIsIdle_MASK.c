
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_4__ {scalar_t__ isSleepAllowed; scalar_t__ sleepAllowedtick; } ;
struct TYPE_5__ {scalar_t__ powerSaveMode; int ReceivedPktRatePerSecond; TYPE_1__ psMgr; scalar_t__ bChannelScan; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static u8_t FUNC_7(zdev_t *VAR_4)
{
    u8_t VAR_5 = 0;

    FUNC_5(VAR_4);
    FUNC_3();

    FUNC_4(VAR_4);

    if ( FUNC_1(VAR_4) && VAR_3->sta.psMgr.isSleepAllowed == 0 )
    {
        goto done;
    }

    if ( VAR_3->sta.bChannelScan )
    {
        goto done;
    }

    if ( FUNC_2(VAR_4) )
    {
        goto done;
    }

    if (VAR_3->sta.powerSaveMode == VAR_2)
    {
        if (VAR_3->sta.ReceivedPktRatePerSecond > 200)
        {
            goto done;
        }

        if ( FUNC_1(VAR_4)
             && (VAR_3->wlanMode == VAR_1) )
        {
            if (VAR_3->sta.psMgr.sleepAllowedtick) {
                VAR_3->sta.psMgr.sleepAllowedtick--;
                goto done;
            }
        }
    }

    VAR_5 = 1;

done:
    FUNC_6(VAR_4);

    if ( FUNC_0(VAR_4) == VAR_0 )
    {
        VAR_5 = 0;
    }

    return VAR_5;
}
