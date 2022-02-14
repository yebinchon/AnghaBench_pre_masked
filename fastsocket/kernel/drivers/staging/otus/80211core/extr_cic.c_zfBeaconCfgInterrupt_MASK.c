
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_3__ {scalar_t__ beaconTxCnt; int txBeaconInd; scalar_t__ atimWindow; scalar_t__ ibssDelayedInd; int ibssDelayedIndEvent; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; int (* zfcbIbssPartnerNotify ) (int *,int,int *) ;scalar_t__ tickIbssSendBeacon; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_2, u8_t* VAR_3)
{
    u32_t VAR_4;

    FUNC_5(VAR_2);

    FUNC_3();

    if ( VAR_1->wlanMode == VAR_0 )
    {
        VAR_4 = *((u32_t *)VAR_3);
        if ( VAR_1->sta.beaconTxCnt != VAR_4 )
        {
            VAR_1->sta.txBeaconInd = 1;

            FUNC_4(VAR_2);
            VAR_1->tickIbssSendBeacon = 0;
            FUNC_6(VAR_2);
        }
        else
        {
            VAR_1->sta.txBeaconInd = 0;
        }
        VAR_1->sta.beaconTxCnt = VAR_4;
    }
}
