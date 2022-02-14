
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int Hw_UnderrunCnt; int Hw_TotalRxFrm; int Hw_CRC32Cnt; int Hw_CRC16Cnt; int Hw_DecrypErr_UNI; int Hw_RxFIFOOverrun; int Hw_DecrypErr_Mul; int Hw_RetryCnt; int Hw_TotalTxFrm; int Hw_RxTimeOut; int Tx_MPDU; int BA_Fail; int Hw_Tx_AMPDU; int Hw_Tx_MPDU; int Hw_RxMPDU; int Hw_RxDropMPDU; int Hw_RxDelMPDU; int Hw_RxPhyMiscError; int Hw_RxPhyXRError; int Hw_RxPhyOFDMError; int Hw_RxPhyCCKError; int Hw_RxPhyHTError; int Hw_RxPhyTotalCount; } ;
struct TYPE_4__ {TYPE_1__ commTally; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_3)
{
    FUNC_2(VAR_3);

    FUNC_1(VAR_0, "Hw_UnderrunCnt    = ", VAR_2->commTally.Hw_UnderrunCnt);
    FUNC_1(VAR_0, "Hw_TotalRxFrm     = ", VAR_2->commTally.Hw_TotalRxFrm);
    FUNC_1(VAR_0, "Hw_CRC32Cnt       = ", VAR_2->commTally.Hw_CRC32Cnt);
    FUNC_1(VAR_0, "Hw_CRC16Cnt       = ", VAR_2->commTally.Hw_CRC16Cnt);
    FUNC_1(VAR_1, "Hw_DecrypErr_UNI  = ", VAR_2->commTally.Hw_DecrypErr_UNI);
    FUNC_1(VAR_0, "Hw_RxFIFOOverrun  = ", VAR_2->commTally.Hw_RxFIFOOverrun);
    FUNC_1(VAR_1, "Hw_DecrypErr_Mul  = ", VAR_2->commTally.Hw_DecrypErr_Mul);
    FUNC_1(VAR_1, "Hw_RetryCnt       = ", VAR_2->commTally.Hw_RetryCnt);
    FUNC_1(VAR_0, "Hw_TotalTxFrm     = ", VAR_2->commTally.Hw_TotalTxFrm);
    FUNC_1(VAR_0, "Hw_RxTimeOut      = ", VAR_2->commTally.Hw_RxTimeOut);
    FUNC_1(VAR_0, "Tx_MPDU           = ", VAR_2->commTally.Tx_MPDU);
    FUNC_1(VAR_0, "BA_Fail           = ", VAR_2->commTally.BA_Fail);
    FUNC_1(VAR_0, "Hw_Tx_AMPDU       = ", VAR_2->commTally.Hw_Tx_AMPDU);
    FUNC_1(VAR_0, "Hw_Tx_MPDU        = ", VAR_2->commTally.Hw_Tx_MPDU);

    FUNC_1(VAR_1, "Hw_RxMPDU          = ", VAR_2->commTally.Hw_RxMPDU);
    FUNC_1(VAR_1, "Hw_RxDropMPDU      = ", VAR_2->commTally.Hw_RxDropMPDU);
    FUNC_1(VAR_1, "Hw_RxDelMPDU       = ", VAR_2->commTally.Hw_RxDelMPDU);
    FUNC_1(VAR_1, "Hw_RxPhyMiscError  = ", VAR_2->commTally.Hw_RxPhyMiscError);
    FUNC_1(VAR_1, "Hw_RxPhyXRError    = ", VAR_2->commTally.Hw_RxPhyXRError);
    FUNC_1(VAR_1, "Hw_RxPhyOFDMError  = ", VAR_2->commTally.Hw_RxPhyOFDMError);
    FUNC_1(VAR_1, "Hw_RxPhyCCKError   = ", VAR_2->commTally.Hw_RxPhyCCKError);
    FUNC_1(VAR_1, "Hw_RxPhyHTError    = ", VAR_2->commTally.Hw_RxPhyHTError);
    FUNC_1(VAR_1, "Hw_RxPhyTotalCount = ", VAR_2->commTally.Hw_RxPhyTotalCount);

    if (!((VAR_2->commTally.Tx_MPDU == 0) && (VAR_2->commTally.BA_Fail == 0)))
    {
        FUNC_0("BA Fail Ratio(%)  = ", VAR_2->commTally.BA_Fail * 100,
                (VAR_2->commTally.BA_Fail + VAR_2->commTally.Tx_MPDU));
    }

    if (!((VAR_2->commTally.Hw_Tx_MPDU == 0) && (VAR_2->commTally.Hw_Tx_AMPDU == 0)))
    {
        FUNC_0("Avg Agg Number    = ",
                VAR_2->commTally.Hw_Tx_MPDU, VAR_2->commTally.Hw_Tx_AMPDU);
    }
}
