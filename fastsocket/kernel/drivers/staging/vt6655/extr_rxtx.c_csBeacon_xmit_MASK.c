
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t WORD ;
typedef size_t UINT ;
struct TYPE_16__ {void* wSeqCtl; scalar_t__ wDurationID; } ;
struct TYPE_15__ {scalar_t__ eCurrentPHYType; int byPreambleType; int wSeqCounter; size_t wBCNBufLen; int PortOffset; int tx_beacon_dma; scalar_t__ tx_beacon_bufs; } ;
struct TYPE_14__ {void* wTimeStampOff; void* wTransmitLength; int bySignalField; int byServiceField; void* wDuration; } ;
struct TYPE_13__ {size_t cbMPDULen; int p80211Header; } ;
struct TYPE_12__ {int wFIFOCtl; } ;
typedef int STxShortBufHead ;
typedef int STxDataHead_ab ;
typedef int PWORD ;
typedef TYPE_1__* PSTxShortBufHead ;
typedef TYPE_2__* PSTxMgmtPacket ;
typedef TYPE_3__* PSTxDataHead_ab ;
typedef TYPE_4__* PSDevice ;
typedef TYPE_5__* PS802_11Header ;
typedef size_t PBYTE ;
typedef int CMD_STATUS ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,size_t,size_t,scalar_t__,int ,size_t,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__*,int ,size_t) ;
 int FUNC_7 (TYPE_1__*,int ,size_t) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ,size_t,scalar_t__,size_t,int ,int ,int ,int,int ) ;
 int** VAR_17 ;

CMD_STATUS FUNC_9(PSDevice VAR_18, PSTxMgmtPacket VAR_19) {

    BYTE VAR_20;
    PBYTE VAR_21 = (PBYTE)VAR_18->tx_beacon_bufs;
    UINT VAR_22 = VAR_19->cbMPDULen + VAR_16;
    UINT VAR_23 = 0;
    WORD VAR_24 = sizeof(STxShortBufHead);
    PSTxShortBufHead VAR_25 = (PSTxShortBufHead) VAR_21;
    PSTxDataHead_ab VAR_26 = (PSTxDataHead_ab) (VAR_21 + VAR_24);
    PS802_11Header VAR_27;
    WORD VAR_28;
    WORD VAR_29 = 0x0000;


    FUNC_7(VAR_25, 0, VAR_24);

    if (VAR_18->eCurrentPHYType == VAR_9) {
        VAR_28 = VAR_14;
        VAR_20 = VAR_10;
    } else {
        VAR_28 = VAR_13;
        VAR_20 = VAR_11;
    }


    VAR_18->byPreambleType = VAR_12;



    VAR_25->wFIFOCtl |= VAR_6;



    if (VAR_20 == VAR_10) {
        VAR_26->wDuration = FUNC_5((WORD)FUNC_8(VAR_18, VAR_2, VAR_22, VAR_20,
                                                          VAR_28, VAR_4, 0, 0, 1, VAR_0));
    }
    else if (VAR_20 == VAR_11) {
        VAR_25->wFIFOCtl |= VAR_5;
        VAR_26->wDuration = FUNC_5((WORD)FUNC_8(VAR_18, VAR_3, VAR_22, VAR_20,
                                                          VAR_28, VAR_4, 0, 0, 1, VAR_0));
    }

    FUNC_0(VAR_18, VAR_22, VAR_28, VAR_20,
        (PWORD)&(VAR_29), (PBYTE)&(VAR_26->byServiceField), (PBYTE)&(VAR_26->bySignalField)
    );
    VAR_26->wTransmitLength = FUNC_5(VAR_29);

    VAR_26->wTimeStampOff = FUNC_5(VAR_17[VAR_18->byPreambleType%2][VAR_28%VAR_8]);
    VAR_23 = VAR_24 + sizeof(STxDataHead_ab);


    VAR_27 = (PS802_11Header)(VAR_21 + VAR_23);
    FUNC_6(VAR_27, VAR_19->p80211Header, VAR_19->cbMPDULen);

    VAR_27->wDurationID = 0;
    VAR_27->wSeqCtl = FUNC_5(VAR_18->wSeqCounter << 4);
    VAR_18->wSeqCounter++ ;
    if (VAR_18->wSeqCounter > 0x0fff)
        VAR_18->wSeqCounter = 0;


    VAR_18->wBCNBufLen = VAR_19->cbMPDULen + VAR_23;

    FUNC_3(VAR_18->PortOffset, (VAR_18->tx_beacon_dma));

    FUNC_2(VAR_18->PortOffset, VAR_18->wBCNBufLen);

    FUNC_1(VAR_18->PortOffset, VAR_7, VAR_15);

    FUNC_4(VAR_18->PortOffset);

    return VAR_1;
}
