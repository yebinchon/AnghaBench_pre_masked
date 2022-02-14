
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bStopBeacon; scalar_t__ bStopTx0Pkt; scalar_t__ bStopDataPkt; scalar_t__ bIsBeaconBufReadySet; scalar_t__ cbBeaconBufReadySetCnt; scalar_t__* iTDUsed; int PortOffset; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef scalar_t__ CARD_PKT_TYPE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;

BOOL FUNC_1 (PVOID VAR_11, CARD_PKT_TYPE VAR_12)
{
    PSDevice VAR_13 = (PSDevice) VAR_11;


    if (VAR_12 == VAR_2) {
        VAR_13->bStopBeacon = VAR_7;
        VAR_13->bStopTx0Pkt = VAR_7;
        VAR_13->bStopDataPkt = VAR_7;
    } else if (VAR_12 == VAR_3) {
        VAR_13->bStopBeacon = VAR_7;
    } else if (VAR_12 == VAR_5) {
        VAR_13->bStopTx0Pkt = VAR_7;
    } else if (VAR_12 == VAR_4) {
        VAR_13->bStopDataPkt = VAR_7;
    }

    if (VAR_13->bStopBeacon == VAR_7) {
        if (VAR_13->bIsBeaconBufReadySet == VAR_7) {
            if (VAR_13->cbBeaconBufReadySetCnt < VAR_10) {
                VAR_13->cbBeaconBufReadySetCnt ++;
                return(VAR_0);
            }
        }
        VAR_13->bIsBeaconBufReadySet = VAR_0;
        VAR_13->cbBeaconBufReadySetCnt = 0;
        FUNC_0(VAR_13->PortOffset, VAR_1, VAR_6);
    }

    if (VAR_13->bStopTx0Pkt == VAR_7) {
         if (VAR_13->iTDUsed[VAR_9] != 0){
            return(VAR_0);
        }
    }

    if (VAR_13->bStopDataPkt == VAR_7) {
        if (VAR_13->iTDUsed[VAR_8] != 0){
            return(VAR_0);
        }
    }

    return(VAR_7);
}
