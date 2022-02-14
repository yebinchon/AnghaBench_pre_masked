
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
typedef int ULONG ;
struct TYPE_32__ {scalar_t__ QuadPart; } ;
struct TYPE_31__ {scalar_t__ RxNoBuffer; } ;
struct TYPE_30__ {scalar_t__ QuadPart; } ;
struct TYPE_29__ {scalar_t__ QuadPart; } ;
struct TYPE_28__ {scalar_t__ QuadPart; } ;
struct TYPE_27__ {scalar_t__ QuadPart; } ;
struct TYPE_26__ {scalar_t__ QuadPart; } ;
struct TYPE_25__ {scalar_t__ QuadPart; } ;
struct TYPE_24__ {scalar_t__ QuadPart; } ;
struct TYPE_21__ {scalar_t__ LastRssi2; scalar_t__ LastRssi1; scalar_t__ LastRssi0; } ;
struct TYPE_22__ {int WpaSupplicantUP; TYPE_13__ RssiSample; } ;
struct TYPE_20__ {scalar_t__ RxAntennaSel; scalar_t__ LastRssi0; scalar_t__ LastRssi2; scalar_t__ LastRssi1; scalar_t__ TxDoneCount; } ;
struct TYPE_19__ {scalar_t__ OneSecFalseCCACnt; } ;
struct TYPE_18__ {TYPE_9__ FrameDuplicateCount; TYPE_7__ FCSErrorCount; TYPE_6__ ReceivedFragmentCount; TYPE_5__ RTSFailureCount; TYPE_4__ RTSSuccessCount; TYPE_3__ FailedCount; TYPE_2__ RetryCount; TYPE_1__ TransmittedFragmentCount; } ;
struct TYPE_23__ {TYPE_14__ StaCfg; scalar_t__ BbpRssiToDbmDelta; TYPE_12__ ate; TYPE_11__ RalinkCounters; TYPE_10__ WlanCounters; TYPE_8__ Counters8023; } ;
typedef TYPE_15__* PRTMP_ADAPTER ;
typedef int LONG ;
typedef int INT ;


 scalar_t__ FUNC_0 (TYPE_15__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_15__* FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3, struct iw_request_info *VAR_4,
  struct iw_point *VAR_5, char *VAR_6)
{
 INT VAR_7 = 0;
    PRTMP_ADAPTER VAR_8 = FUNC_2(VAR_3);

    if (VAR_6 == ((void*)0))
    {
        VAR_5->length = 0;
        return -VAR_0;
    }

    FUNC_3(VAR_6, 0x00, VAR_1);
    FUNC_4(VAR_6, "\n\n");
 {
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Tx success                      = %ld\n", (ULONG)VAR_8->WlanCounters.TransmittedFragmentCount.QuadPart);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Tx success without retry        = %ld\n", (ULONG)VAR_8->WlanCounters.TransmittedFragmentCount.QuadPart - (ULONG)VAR_8->WlanCounters.RetryCount.QuadPart);
 }
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Tx success after retry          = %ld\n", (ULONG)VAR_8->WlanCounters.RetryCount.QuadPart);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Tx fail to Rcv ACK after retry  = %ld\n", (ULONG)VAR_8->WlanCounters.FailedCount.QuadPart);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "RTS Success Rcv CTS             = %ld\n", (ULONG)VAR_8->WlanCounters.RTSSuccessCount.QuadPart);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "RTS Fail Rcv CTS                = %ld\n", (ULONG)VAR_8->WlanCounters.RTSFailureCount.QuadPart);

    FUNC_4(VAR_6+FUNC_5(VAR_6), "Rx success                      = %ld\n", (ULONG)VAR_8->WlanCounters.ReceivedFragmentCount.QuadPart);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Rx with CRC                     = %ld\n", (ULONG)VAR_8->WlanCounters.FCSErrorCount.QuadPart);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Rx drop due to out of resource  = %ld\n", (ULONG)VAR_8->Counters8023.RxNoBuffer);
    FUNC_4(VAR_6+FUNC_5(VAR_6), "Rx duplicate frame              = %ld\n", (ULONG)VAR_8->WlanCounters.FrameDuplicateCount.QuadPart);

    FUNC_4(VAR_6+FUNC_5(VAR_6), "False CCA (one second)          = %ld\n", (ULONG)VAR_8->RalinkCounters.OneSecFalseCCACnt);
 {
 FUNC_4(VAR_6+FUNC_5(VAR_6), "RSSI-A                          = %ld\n", (LONG)(VAR_8->StaCfg.RssiSample.LastRssi0 - VAR_8->BbpRssiToDbmDelta));
        FUNC_4(VAR_6+FUNC_5(VAR_6), "RSSI-B (if available)           = %ld\n", (LONG)(VAR_8->StaCfg.RssiSample.LastRssi1 - VAR_8->BbpRssiToDbmDelta));
        FUNC_4(VAR_6+FUNC_5(VAR_6), "RSSI-C (if available)           = %ld\n\n", (LONG)(VAR_8->StaCfg.RssiSample.LastRssi2 - VAR_8->BbpRssiToDbmDelta));
 }






    VAR_5->length = FUNC_5(VAR_6) + 1;
    FUNC_1(VAR_2, ("<== rt_private_get_statistics, wrq->length = %d\n", VAR_5->length));

    return VAR_7;
}
