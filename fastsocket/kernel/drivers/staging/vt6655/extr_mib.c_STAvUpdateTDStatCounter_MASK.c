
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONGLONG ;
typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ ullTsrAllOK; } ;
struct TYPE_7__ {int* dwTsrTotalRetry; int * dwTsrDirected; int * dwTsrMulticast; int * dwTsrBroadcast; int * dwTsrACKData; int * dwTsrTransmitTimeout; int * dwTsrRetryTimeout; int * dwTsrErr; int * ullTxDirectedBytes; int * ullTxDirectedFrames; int * ullTxMulticastBytes; int * ullTxMulticastFrames; int * ullTxBroadcastBytes; int * ullTxBroadcastFrames; scalar_t__* ullTsrOK; TYPE_1__ CustomStat; int * dwTsrMoreThanOnceRetry; int * dwTsrOnceRetry; int * dwTsrRetry; int * dwTsrTxOctet; int * dwTsrTxPacket; } ;
struct TYPE_6__ {int * abyAddr3; int * abyAddr1; int wFrameCtl; } ;
typedef TYPE_2__* PWLAN_80211HDR_A4 ;
typedef TYPE_3__* PSStatCounter ;
typedef int * PBYTE ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3 (
    PSStatCounter VAR_7,
    BYTE VAR_8,
    BYTE VAR_9,
    PBYTE VAR_10,
    UINT VAR_11,
    UINT VAR_12
    )
{
    PWLAN_80211HDR_A4 VAR_13;
    PBYTE VAR_14;
    BYTE VAR_15 = VAR_8 & VAR_1;



    VAR_13 = (PWLAN_80211HDR_A4) VAR_10;
    if (FUNC_2(VAR_13->wFrameCtl) == 0) {
        VAR_14 = &(VAR_13->abyAddr1[0]);
    }
    else {
        VAR_14 = &(VAR_13->abyAddr3[0]);
    }

    VAR_7->dwTsrTxPacket[VAR_12]++;
    VAR_7->dwTsrTxOctet[VAR_12] += VAR_11;

    if (VAR_15 != 0) {
        VAR_7->dwTsrRetry[VAR_12]++;
        VAR_7->dwTsrTotalRetry[VAR_12] += VAR_15;

        if (VAR_15 == 1)
            VAR_7->dwTsrOnceRetry[VAR_12]++;
        else
            VAR_7->dwTsrMoreThanOnceRetry[VAR_12]++;
    }

    if ((VAR_9&(VAR_3|VAR_2|VAR_4|VAR_0)) == 0) {
        VAR_7->ullTsrOK[VAR_12]++;
        VAR_7->CustomStat.ullTsrAllOK =
            (VAR_7->ullTsrOK[VAR_5] + VAR_7->ullTsrOK[VAR_6]);

        if (FUNC_0(VAR_14)) {
            VAR_7->ullTxBroadcastFrames[VAR_12]++;
            VAR_7->ullTxBroadcastBytes[VAR_12] += (ULONGLONG)VAR_11;
        }
        else if (FUNC_1(VAR_14)) {
            VAR_7->ullTxMulticastFrames[VAR_12]++;
            VAR_7->ullTxMulticastBytes[VAR_12] += (ULONGLONG)VAR_11;
        }
        else {
            VAR_7->ullTxDirectedFrames[VAR_12]++;
            VAR_7->ullTxDirectedBytes[VAR_12] += (ULONGLONG)VAR_11;
        }
    }
    else {
        if (VAR_9 & VAR_3)
            VAR_7->dwTsrErr[VAR_12]++;
        if (VAR_9 & VAR_2)
            VAR_7->dwTsrRetryTimeout[VAR_12]++;
        if (VAR_9 & VAR_4)
            VAR_7->dwTsrTransmitTimeout[VAR_12]++;
        if (VAR_9 & VAR_0)
            VAR_7->dwTsrACKData[VAR_12]++;
    }

    if (FUNC_0(VAR_14))
        VAR_7->dwTsrBroadcast[VAR_12]++;
    else if (FUNC_1(VAR_14))
        VAR_7->dwTsrMulticast[VAR_12]++;
    else
        VAR_7->dwTsrDirected[VAR_12]++;

}
