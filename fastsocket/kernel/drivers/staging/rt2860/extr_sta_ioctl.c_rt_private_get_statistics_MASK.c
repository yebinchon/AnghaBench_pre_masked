
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct net_device {TYPE_14__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
typedef int ULONG ;
struct TYPE_28__ {scalar_t__ QuadPart; } ;
struct TYPE_27__ {scalar_t__ RxNoBuffer; } ;
struct TYPE_26__ {scalar_t__ QuadPart; } ;
struct TYPE_25__ {scalar_t__ QuadPart; } ;
struct TYPE_24__ {scalar_t__ QuadPart; } ;
struct TYPE_23__ {scalar_t__ QuadPart; } ;
struct TYPE_22__ {scalar_t__ QuadPart; } ;
struct TYPE_21__ {scalar_t__ QuadPart; } ;
struct TYPE_20__ {scalar_t__ QuadPart; } ;
struct TYPE_17__ {scalar_t__ LastRssi2; scalar_t__ LastRssi1; scalar_t__ LastRssi0; } ;
struct TYPE_18__ {int WpaSupplicantUP; TYPE_12__ RssiSample; } ;
struct TYPE_16__ {scalar_t__ OneSecFalseCCACnt; } ;
struct TYPE_15__ {TYPE_9__ FrameDuplicateCount; TYPE_7__ FCSErrorCount; TYPE_6__ ReceivedFragmentCount; TYPE_5__ RTSFailureCount; TYPE_4__ RTSSuccessCount; TYPE_3__ FailedCount; TYPE_2__ RetryCount; TYPE_1__ TransmittedFragmentCount; } ;
struct TYPE_19__ {TYPE_13__ StaCfg; scalar_t__ BbpRssiToDbmDelta; TYPE_11__ RalinkCounters; TYPE_10__ WlanCounters; TYPE_8__ Counters8023; } ;
typedef TYPE_14__* PRTMP_ADAPTER ;
typedef int LONG ;
typedef int INT ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct iw_request_info *VAR_4,
  struct iw_point *VAR_5, char *VAR_6)
{
 INT VAR_7 = 0;
    PRTMP_ADAPTER VAR_8 = VAR_3->ml_priv;

    if (VAR_6 == ((void*)0))
    {
        VAR_5->length = 0;
        return -VAR_0;
    }

    FUNC_1(VAR_6, 0x00, VAR_1);
    FUNC_2(VAR_6, "\n\n");

 {
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Tx success                      = %ld\n", (ULONG)VAR_8->WlanCounters.TransmittedFragmentCount.QuadPart);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Tx success without retry        = %ld\n", (ULONG)VAR_8->WlanCounters.TransmittedFragmentCount.QuadPart - (ULONG)VAR_8->WlanCounters.RetryCount.QuadPart);
 }
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Tx success after retry          = %ld\n", (ULONG)VAR_8->WlanCounters.RetryCount.QuadPart);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Tx fail to Rcv ACK after retry  = %ld\n", (ULONG)VAR_8->WlanCounters.FailedCount.QuadPart);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "RTS Success Rcv CTS             = %ld\n", (ULONG)VAR_8->WlanCounters.RTSSuccessCount.QuadPart);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "RTS Fail Rcv CTS                = %ld\n", (ULONG)VAR_8->WlanCounters.RTSFailureCount.QuadPart);

    FUNC_2(VAR_6+FUNC_3(VAR_6), "Rx success                      = %ld\n", (ULONG)VAR_8->WlanCounters.ReceivedFragmentCount.QuadPart);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Rx with CRC                     = %ld\n", (ULONG)VAR_8->WlanCounters.FCSErrorCount.QuadPart);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Rx drop due to out of resource  = %ld\n", (ULONG)VAR_8->Counters8023.RxNoBuffer);
    FUNC_2(VAR_6+FUNC_3(VAR_6), "Rx duplicate frame              = %ld\n", (ULONG)VAR_8->WlanCounters.FrameDuplicateCount.QuadPart);

    FUNC_2(VAR_6+FUNC_3(VAR_6), "False CCA (one second)          = %ld\n", (ULONG)VAR_8->RalinkCounters.OneSecFalseCCACnt);
 {
     FUNC_2(VAR_6+FUNC_3(VAR_6), "RSSI-A                          = %ld\n", (LONG)(VAR_8->StaCfg.RssiSample.LastRssi0 - VAR_8->BbpRssiToDbmDelta));
        FUNC_2(VAR_6+FUNC_3(VAR_6), "RSSI-B (if available)           = %ld\n", (LONG)(VAR_8->StaCfg.RssiSample.LastRssi1 - VAR_8->BbpRssiToDbmDelta));
        FUNC_2(VAR_6+FUNC_3(VAR_6), "RSSI-C (if available)           = %ld\n\n", (LONG)(VAR_8->StaCfg.RssiSample.LastRssi2 - VAR_8->BbpRssiToDbmDelta));
 }
    FUNC_2(VAR_6+FUNC_3(VAR_6), "WpaSupplicantUP                 = %d\n\n", VAR_8->StaCfg.WpaSupplicantUP);

    VAR_5->length = FUNC_3(VAR_6) + 1;
    FUNC_0(VAR_2, ("<== rt_private_get_statistics, wrq->length = %d\n", VAR_5->length));

    return VAR_7;
}
