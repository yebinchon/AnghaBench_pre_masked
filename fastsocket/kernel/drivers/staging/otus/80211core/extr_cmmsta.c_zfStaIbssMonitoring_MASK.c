
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef scalar_t__ u16_t ;
struct zsPartnerNotifyEvent {int peerMacAddr; int bssid; } ;
struct TYPE_5__ {scalar_t__ oppositeCount; TYPE_1__* oppositeInfo; scalar_t__ bssid; scalar_t__ bChannelScan; } ;
struct TYPE_6__ {int (* zfcbIbssPartnerNotify ) (int *,int ,struct zsPartnerNotifyEvent*) ;TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__ valid; scalar_t__ aliveCounter; scalar_t__* macAddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,struct zsPartnerNotifyEvent*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (int *,int ,scalar_t__*,int,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(zdev_t* VAR_6, u8_t VAR_7)
{
    u16_t VAR_8;
    u16_t VAR_9;
    struct zsPartnerNotifyEvent VAR_10;

    FUNC_8(VAR_6);

    FUNC_6();



    FUNC_7(VAR_6);

    if ( VAR_5->sta.oppositeCount == 0 )
    {
        goto done;
    }

    if ( VAR_5->sta.bChannelScan )
    {
        goto done;
    }

    VAR_9 = VAR_5->sta.oppositeCount;

    for(VAR_8=0; VAR_8 < VAR_2; VAR_8++)
    {
        if ( VAR_9 == 0 )
        {
            break;
        }

        if ( VAR_7 )
        {
            VAR_5->sta.oppositeInfo[VAR_8].valid = 0;
        }

        if ( VAR_5->sta.oppositeInfo[VAR_8].valid == 0 )
        {
            continue;
        }

        VAR_9--;

        if ( VAR_5->sta.oppositeInfo[VAR_8].aliveCounter )
        {
            FUNC_5("Setting alive to ", VAR_5->sta.oppositeInfo[VAR_8].aliveCounter);

            FUNC_9(VAR_6);

            if ( VAR_5->sta.oppositeInfo[VAR_8].aliveCounter != VAR_1 )
            {
                FUNC_2(VAR_6, VAR_4,
                              (u16_t*)VAR_5->sta.oppositeInfo[VAR_8].macAddr, 1, 0, 0);
            }

            FUNC_7(VAR_6);
            VAR_5->sta.oppositeInfo[VAR_8].aliveCounter--;
        }
        else
        {
            FUNC_4("zfStaIbssMonitoring remove the peer station");
            FUNC_1(VAR_10.bssid, (u8_t *)(VAR_5->sta.bssid), 6);
            FUNC_1(VAR_10.peerMacAddr, VAR_5->sta.oppositeInfo[VAR_8].macAddr, 6);

            VAR_5->sta.oppositeInfo[VAR_8].valid = 0;
            VAR_5->sta.oppositeCount--;
            if (VAR_5->zfcbIbssPartnerNotify != ((void*)0))
            {
                FUNC_9(VAR_6);
                VAR_5->zfcbIbssPartnerNotify(VAR_6, 0, &VAR_10);
                FUNC_7(VAR_6);
            }
        }
    }

done:
    if ( VAR_7 == 0 )
    {
        FUNC_3(VAR_6, VAR_0, VAR_3);
    }

    FUNC_9(VAR_6);
}
