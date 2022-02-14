
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* ULONGLONG ;
struct TYPE_6__ {void* MulticastReceivedFrameCount; int FCSErrorCount; int ACKFailureCount; int RTSFailureCount; int RTSSuccessCount; void* MultipleRetryCount; void* RetryCount; void* FailedCount; void* MulticastTransmittedFrameCount; } ;
struct TYPE_5__ {scalar_t__ dwRsrMulticast; scalar_t__ dwRsrBroadcast; scalar_t__ dwTsrMoreThanOnceRetry; scalar_t__ dwTsrRetry; scalar_t__ dwTsrErr; scalar_t__ dwTsrMulticast; scalar_t__ dwTsrBroadcast; } ;
typedef TYPE_1__* PSStatCounter ;
typedef TYPE_2__* PSDot11Counters ;
typedef scalar_t__ BYTE ;



void
FUNC_0(
    PSDot11Counters VAR_0,
    PSStatCounter VAR_1,
    BYTE VAR_2,
    BYTE VAR_3,
    BYTE VAR_4,
    BYTE VAR_5
    )
{

    VAR_0->MulticastTransmittedFrameCount = (ULONGLONG) (VAR_1->dwTsrBroadcast +
                                                                  VAR_1->dwTsrMulticast);
    VAR_0->FailedCount = (ULONGLONG) (VAR_1->dwTsrErr);
    VAR_0->RetryCount = (ULONGLONG) (VAR_1->dwTsrRetry);
    VAR_0->MultipleRetryCount = (ULONGLONG) (VAR_1->dwTsrMoreThanOnceRetry);

    VAR_0->RTSSuccessCount += (ULONGLONG) VAR_2;
    VAR_0->RTSFailureCount += (ULONGLONG) VAR_3;
    VAR_0->ACKFailureCount += (ULONGLONG) VAR_4;
    VAR_0->FCSErrorCount += (ULONGLONG) VAR_5;

    VAR_0->MulticastReceivedFrameCount = (ULONGLONG) (VAR_1->dwRsrBroadcast +
                                                               VAR_1->dwRsrMulticast);
}
