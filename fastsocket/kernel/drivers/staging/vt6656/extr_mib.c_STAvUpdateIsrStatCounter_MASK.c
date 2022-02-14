
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwIsrRxNoBuf; int dwIsrMIBNearfull; int dwIsrSoftInterrupt; int dwIsrUnrecoverableError; int dwIsrWatchDog; int dwIsrSTIMERInt; int dwIsrTBTTInt; int dwIsrRx0OK; int dwIsrBeaconTxOK; int dwIsrTx0OK; int dwIsrUnknown; } ;
struct TYPE_5__ {TYPE_1__ ISRStat; } ;
typedef TYPE_2__* PSStatCounter ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_0 (PSStatCounter VAR_10, BYTE VAR_11, BYTE VAR_12)
{




    if (VAR_11 == 0) {
        VAR_10->ISRStat.dwIsrUnknown++;
        return;
    }


    if (VAR_11 & VAR_0)
        VAR_10->ISRStat.dwIsrTx0OK++;

    if (VAR_11 & VAR_1)
        VAR_10->ISRStat.dwIsrBeaconTxOK++;

    if (VAR_11 & VAR_4)
        VAR_10->ISRStat.dwIsrRx0OK++;

    if (VAR_11 & VAR_8)
        VAR_10->ISRStat.dwIsrTBTTInt++;

    if (VAR_11 & VAR_7)
        VAR_10->ISRStat.dwIsrSTIMERInt++;

    if (VAR_11 & VAR_9)
        VAR_10->ISRStat.dwIsrWatchDog++;


    if (VAR_12 & VAR_2)
        VAR_10->ISRStat.dwIsrUnrecoverableError++;

    if (VAR_12 & VAR_6)
        VAR_10->ISRStat.dwIsrSoftInterrupt++;

    if (VAR_12 & VAR_3)
        VAR_10->ISRStat.dwIsrMIBNearfull++;

    if (VAR_12 & VAR_5)
        VAR_10->ISRStat.dwIsrRxNoBuf++;

}
