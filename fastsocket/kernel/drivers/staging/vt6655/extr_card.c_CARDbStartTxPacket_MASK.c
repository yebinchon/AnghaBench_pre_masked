
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bStopBeacon; scalar_t__ bBeaconBufReady; scalar_t__ eOPMode; int PortOffset; scalar_t__ bStopDataPkt; scalar_t__ bStopTx0Pkt; } ;
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
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

BOOL FUNC_1 (PVOID VAR_9, CARD_PKT_TYPE VAR_10)
{
    PSDevice VAR_11 = (PSDevice) VAR_9;


    if (VAR_10 == VAR_3) {
        VAR_11->bStopBeacon = VAR_0;
        VAR_11->bStopTx0Pkt = VAR_0;
        VAR_11->bStopDataPkt = VAR_0;
    } else if (VAR_10 == VAR_4) {
        VAR_11->bStopBeacon = VAR_0;
    } else if (VAR_10 == VAR_6) {
        VAR_11->bStopTx0Pkt = VAR_0;
    } else if (VAR_10 == VAR_5) {
        VAR_11->bStopDataPkt = VAR_0;
    }

    if ((VAR_11->bStopBeacon == VAR_0) &&
        (VAR_11->bBeaconBufReady == VAR_8) &&
        (VAR_11->eOPMode == VAR_2)) {
        FUNC_0(VAR_11->PortOffset, VAR_1, VAR_7);
    }

    return(VAR_8);
}
