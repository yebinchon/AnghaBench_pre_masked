
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwIsrSTIMER1Int; int dwIsrRx1OK; int dwIsrRxNoBuf; int dwIsrMIBNearfull; int dwIsrSoftInterrupt; int dwIsrUnrecoverableError; int dwIsrWatchDog; int dwIsrSTIMERInt; int dwIsrTBTTInt; int dwIsrRx0OK; int dwIsrBeaconTxOK; int dwIsrAC0TxOK; int dwIsrTx0OK; int dwIsrUnknown; } ;
struct TYPE_5__ {TYPE_1__ ISRStat; } ;
typedef TYPE_2__* PSStatCounter ;
typedef int DWORD ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_0 (PSStatCounter VAR_13, DWORD VAR_14)
{





    if (VAR_14 == 0) {
        VAR_13->ISRStat.dwIsrUnknown++;
        return;
    }


    if (VAR_14 & VAR_11)
        VAR_13->ISRStat.dwIsrTx0OK++;

    if (VAR_14 & VAR_0)
        VAR_13->ISRStat.dwIsrAC0TxOK++;

    if (VAR_14 & VAR_1)
        VAR_13->ISRStat.dwIsrBeaconTxOK++;

    if (VAR_14 & VAR_4)
        VAR_13->ISRStat.dwIsrRx0OK++;

    if (VAR_14 & VAR_10)
        VAR_13->ISRStat.dwIsrTBTTInt++;

    if (VAR_14 & VAR_8)
        VAR_13->ISRStat.dwIsrSTIMERInt++;

    if (VAR_14 & VAR_12)
        VAR_13->ISRStat.dwIsrWatchDog++;

    if (VAR_14 & VAR_2)
        VAR_13->ISRStat.dwIsrUnrecoverableError++;

    if (VAR_14 & VAR_7)
        VAR_13->ISRStat.dwIsrSoftInterrupt++;

    if (VAR_14 & VAR_3)
        VAR_13->ISRStat.dwIsrMIBNearfull++;

    if (VAR_14 & VAR_6)
        VAR_13->ISRStat.dwIsrRxNoBuf++;

    if (VAR_14 & VAR_5)
        VAR_13->ISRStat.dwIsrRx1OK++;
    if (VAR_14 & VAR_9)
        VAR_13->ISRStat.dwIsrSTIMER1Int++;

}
