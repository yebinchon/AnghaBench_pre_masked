
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* ULONGLONG ;
struct TYPE_6__ {void* MulticastReceivedFrameCount; int FCSErrorCount; int ACKFailureCount; int RTSFailureCount; int RTSSuccessCount; void* MultipleRetryCount; void* RetryCount; void* FailedCount; void* MulticastTransmittedFrameCount; } ;
struct TYPE_5__ {scalar_t__ dwRsrMulticast; scalar_t__ dwRsrBroadcast; scalar_t__* dwTsrMoreThanOnceRetry; scalar_t__* dwTsrRetry; scalar_t__* dwTsrErr; scalar_t__* dwTsrMulticast; scalar_t__* dwTsrBroadcast; } ;
typedef TYPE_1__* PSStatCounter ;
typedef TYPE_2__* PSDot11Counters ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void
FUNC_0(
    PSDot11Counters VAR_2,
    PSStatCounter VAR_3,
    DWORD VAR_4
    )
{

    VAR_2->MulticastTransmittedFrameCount = (ULONGLONG) (VAR_3->dwTsrBroadcast[VAR_0] +
                                                                  VAR_3->dwTsrBroadcast[VAR_1] +
                                                                  VAR_3->dwTsrMulticast[VAR_0] +
                                                                  VAR_3->dwTsrMulticast[VAR_1]);
    VAR_2->FailedCount = (ULONGLONG) (VAR_3->dwTsrErr[VAR_0] + VAR_3->dwTsrErr[VAR_1]);
    VAR_2->RetryCount = (ULONGLONG) (VAR_3->dwTsrRetry[VAR_0] + VAR_3->dwTsrRetry[VAR_1]);
    VAR_2->MultipleRetryCount = (ULONGLONG) (VAR_3->dwTsrMoreThanOnceRetry[VAR_0] +
                                                          VAR_3->dwTsrMoreThanOnceRetry[VAR_1]);

    VAR_2->RTSSuccessCount += (ULONGLONG) (VAR_4 & 0x000000ff);
    VAR_2->RTSFailureCount += (ULONGLONG) ((VAR_4 & 0x0000ff00) >> 8);
    VAR_2->ACKFailureCount += (ULONGLONG) ((VAR_4 & 0x00ff0000) >> 16);
    VAR_2->FCSErrorCount += (ULONGLONG) ((VAR_4 & 0xff000000) >> 24);

    VAR_2->MulticastReceivedFrameCount = (ULONGLONG) (VAR_3->dwRsrBroadcast +
                                                               VAR_3->dwRsrMulticast);
}
