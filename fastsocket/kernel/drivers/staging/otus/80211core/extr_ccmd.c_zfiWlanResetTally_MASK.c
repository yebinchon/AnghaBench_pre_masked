
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ rxOFDMDataFrame; scalar_t__ rx11bDataFrame; scalar_t__ Hw_RxPhyTotalCount; scalar_t__ Hw_RxPhyHTError; scalar_t__ Hw_RxPhyCCKError; scalar_t__ Hw_RxPhyOFDMError; scalar_t__ Hw_RxPhyXRError; scalar_t__ Hw_RxPhyMiscError; scalar_t__ Hw_RxDelMPDU; scalar_t__ Hw_RxDropMPDU; scalar_t__ Hw_RxMPDU; scalar_t__* txQosDropCount; scalar_t__ Hw_Tx_MPDU; scalar_t__ Hw_Tx_AMPDU; scalar_t__ BA_Fail; scalar_t__ Tx_MPDU; scalar_t__ LossAP; scalar_t__ Hw_RxTimeOut; scalar_t__ Hw_RxFIFOOverrun; scalar_t__ Hw_DecrypErr_Mul; scalar_t__ Hw_DecrypErr_UNI; scalar_t__ Hw_CRC32Cnt; scalar_t__ Hw_CRC16Cnt; scalar_t__ Hw_TotalRxFrm; scalar_t__ rxBroadcastOctets; scalar_t__ rxBroadcastFrm; scalar_t__ DriverRxMgtFrmCnt; scalar_t__ rxNeedFrgFrm; scalar_t__ DriverDiscardedFrmCauseByFrmCtrl; scalar_t__ DriverDiscardedFrmCauseByMulticastList; scalar_t__ GreaterThanMaxLen; scalar_t__ LessThanDataMinLen; scalar_t__ DriverDiscardedFrm; scalar_t__ rxMulticastOctets; scalar_t__ rxUnicastOctets; scalar_t__ NotifyNDISRxFrmCnt; scalar_t__ rxMulticastFrm; scalar_t__ rxUnicastFrm; scalar_t__ DriverRxFrmCnt; scalar_t__ Hw_UnderrunCnt; scalar_t__ Hw_RetryCnt; scalar_t__ Hw_TotalTxFrm; scalar_t__ RetryFailCnt; scalar_t__ txFrmDrvMgt; scalar_t__ txFrmUpperNDIS; scalar_t__ txMulticastOctets; scalar_t__ txUnicastOctets; scalar_t__ txMulticastFrm; scalar_t__ txUnicastFrm; } ;
struct TYPE_4__ {TYPE_1__ commTally; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t *VAR_1)
{
 FUNC_2(VAR_1);

 FUNC_0();

 FUNC_1(VAR_1);

 VAR_0->commTally.txUnicastFrm = 0;
 VAR_0->commTally.txMulticastFrm = 0;
 VAR_0->commTally.txUnicastOctets = 0;
 VAR_0->commTally.txMulticastOctets = 0;
 VAR_0->commTally.txFrmUpperNDIS = 0;
 VAR_0->commTally.txFrmDrvMgt = 0;
 VAR_0->commTally.RetryFailCnt = 0;
 VAR_0->commTally.Hw_TotalTxFrm = 0;
 VAR_0->commTally.Hw_RetryCnt = 0;
 VAR_0->commTally.Hw_UnderrunCnt = 0;
 VAR_0->commTally.DriverRxFrmCnt = 0;
 VAR_0->commTally.rxUnicastFrm = 0;
 VAR_0->commTally.rxMulticastFrm = 0;
 VAR_0->commTally.NotifyNDISRxFrmCnt = 0;
 VAR_0->commTally.rxUnicastOctets = 0;
 VAR_0->commTally.rxMulticastOctets = 0;
 VAR_0->commTally.DriverDiscardedFrm = 0;
 VAR_0->commTally.LessThanDataMinLen = 0;
 VAR_0->commTally.GreaterThanMaxLen = 0;
 VAR_0->commTally.DriverDiscardedFrmCauseByMulticastList = 0;
 VAR_0->commTally.DriverDiscardedFrmCauseByFrmCtrl = 0;
 VAR_0->commTally.rxNeedFrgFrm = 0;
 VAR_0->commTally.DriverRxMgtFrmCnt = 0;
 VAR_0->commTally.rxBroadcastFrm = 0;
 VAR_0->commTally.rxBroadcastOctets = 0;
 VAR_0->commTally.Hw_TotalRxFrm = 0;
 VAR_0->commTally.Hw_CRC16Cnt = 0;
 VAR_0->commTally.Hw_CRC32Cnt = 0;
 VAR_0->commTally.Hw_DecrypErr_UNI = 0;
 VAR_0->commTally.Hw_DecrypErr_Mul = 0;
 VAR_0->commTally.Hw_RxFIFOOverrun = 0;
 VAR_0->commTally.Hw_RxTimeOut = 0;
 VAR_0->commTally.LossAP = 0;

 VAR_0->commTally.Tx_MPDU = 0;
 VAR_0->commTally.BA_Fail = 0;
 VAR_0->commTally.Hw_Tx_AMPDU = 0;
 VAR_0->commTally.Hw_Tx_MPDU = 0;

 VAR_0->commTally.txQosDropCount[0] = 0;
 VAR_0->commTally.txQosDropCount[1] = 0;
 VAR_0->commTally.txQosDropCount[2] = 0;
 VAR_0->commTally.txQosDropCount[3] = 0;
 VAR_0->commTally.txQosDropCount[4] = 0;

 VAR_0->commTally.Hw_RxMPDU = 0;
 VAR_0->commTally.Hw_RxDropMPDU = 0;
 VAR_0->commTally.Hw_RxDelMPDU = 0;

 VAR_0->commTally.Hw_RxPhyMiscError = 0;
 VAR_0->commTally.Hw_RxPhyXRError = 0;
 VAR_0->commTally.Hw_RxPhyOFDMError = 0;
 VAR_0->commTally.Hw_RxPhyCCKError = 0;
 VAR_0->commTally.Hw_RxPhyHTError = 0;
 VAR_0->commTally.Hw_RxPhyTotalCount = 0;






 FUNC_3(VAR_1);
}
