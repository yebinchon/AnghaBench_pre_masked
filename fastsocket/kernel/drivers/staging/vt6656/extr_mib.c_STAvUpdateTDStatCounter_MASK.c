
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ullTsrAllOK; } ;
struct TYPE_7__ {int dwTsrTotalRetry; int* dwTxFail; int dwTsrDirected; TYPE_2__* abyTxPktInfo; int dwTsrMulticast; int dwTsrBroadcast; int dwTsrTransmitTimeout; int dwTsrRetryTimeout; int dwTsrErr; int TxFailCount; int ullTxDirectedBytes; int ullTxDirectedFrames; int ullTxMulticastBytes; int ullTxMulticastFrames; int ullTxBroadcastBytes; int ullTxBroadcastFrames; int * dwTxOk; TYPE_1__ CustomStat; int ullTsrOK; int TxRetryOkCount; int TxNoRetryOkCount; int * dwTxRetryCount; int dwTsrMoreThanOnceRetry; int dwTsrOnceRetry; int dwTsrRetry; int dwTsrTxPacket; } ;
struct TYPE_6__ {scalar_t__ byBroadMultiUni; scalar_t__ wLength; } ;
typedef TYPE_3__* PSStatCounter ;
typedef int BYTE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_0 (
    PSStatCounter VAR_6,
    BYTE VAR_7,
    BYTE VAR_8,
    BYTE VAR_9
    )
{
    BYTE VAR_10;

    VAR_6->dwTsrTxPacket++;

    VAR_10 = (VAR_9 & 0xF0) >> 4;
    if (VAR_10 != 0) {
        VAR_6->dwTsrRetry++;
        VAR_6->dwTsrTotalRetry += VAR_10;
        VAR_6->dwTxFail[VAR_8]+= VAR_10;
        VAR_6->dwTxFail[VAR_0] += VAR_10;

        if ( VAR_10 == 0x1)
            VAR_6->dwTsrOnceRetry++;
        else
            VAR_6->dwTsrMoreThanOnceRetry++;

        if (VAR_10 <= 8)
            VAR_6->dwTxRetryCount[VAR_10-1]++;

    }
    if ( !(VAR_9 & (VAR_2 | VAR_1))) {
        VAR_6->ullTsrOK++;
        VAR_6->CustomStat.ullTsrAllOK++;

        VAR_6->dwTxOk[VAR_8]++;
        VAR_6->dwTxOk[VAR_0]++;

        if ( VAR_6->abyTxPktInfo[VAR_7].byBroadMultiUni == VAR_3 ) {
            VAR_6->ullTxBroadcastFrames++;
            VAR_6->ullTxBroadcastBytes += VAR_6->abyTxPktInfo[VAR_7].wLength;
        } else if ( VAR_6->abyTxPktInfo[VAR_7].byBroadMultiUni == VAR_4 ) {
            VAR_6->ullTxMulticastFrames++;
            VAR_6->ullTxMulticastBytes += VAR_6->abyTxPktInfo[VAR_7].wLength;
        } else if ( VAR_6->abyTxPktInfo[VAR_7].byBroadMultiUni == VAR_5 ) {
            VAR_6->ullTxDirectedFrames++;
            VAR_6->ullTxDirectedBytes += VAR_6->abyTxPktInfo[VAR_7].wLength;
        }
    }
    else {





        VAR_6->dwTsrErr++;
        if (VAR_9 & VAR_1)
            VAR_6->dwTsrRetryTimeout++;
        if (VAR_9 & VAR_2)
            VAR_6->dwTsrTransmitTimeout++;
    }

    if ( VAR_6->abyTxPktInfo[VAR_7].byBroadMultiUni == VAR_3 ) {
        VAR_6->dwTsrBroadcast++;
    } else if ( VAR_6->abyTxPktInfo[VAR_7].byBroadMultiUni == VAR_4 ) {
        VAR_6->dwTsrMulticast++;
    } else if ( VAR_6->abyTxPktInfo[VAR_7].byBroadMultiUni == VAR_5 ) {
        VAR_6->dwTsrDirected++;
    }
}
