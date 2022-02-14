
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
struct TYPE_3__ {int Hw_UnderrunCnt; int Hw_TotalRxFrm; int Hw_CRC32Cnt; int Hw_CRC16Cnt; int Hw_DecrypErr_UNI; int Hw_RxFIFOOverrun; int Hw_DecrypErr_Mul; int Hw_RetryCnt; int Hw_TotalTxFrm; int Hw_RxTimeOut; int Tx_MPDU; int BA_Fail; int Hw_Tx_AMPDU; int Hw_Tx_MPDU; int RateCtrlTxMPDU; int RateCtrlBAFail; int Hw_RxMPDU; int Hw_RxDropMPDU; int Hw_RxDelMPDU; int Hw_RxPhyMiscError; int Hw_RxPhyXRError; int Hw_RxPhyOFDMError; int Hw_RxPhyCCKError; int Hw_RxPhyHTError; int Hw_RxPhyTotalCount; } ;
struct TYPE_4__ {TYPE_1__ commTally; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t*VAR_2, u32_t* VAR_3, u8_t VAR_4)
{
    FUNC_3(VAR_2);

    FUNC_1();

    FUNC_2(VAR_2);

    if (VAR_4 == 0)
    {
        VAR_1->commTally.Hw_UnderrunCnt += (0xFFFF & VAR_3[1]);
        VAR_1->commTally.Hw_TotalRxFrm += VAR_3[2];
        VAR_1->commTally.Hw_CRC32Cnt += VAR_3[3];
        VAR_1->commTally.Hw_CRC16Cnt += VAR_3[4];




        VAR_1->commTally.Hw_DecrypErr_UNI += VAR_3[5];

        VAR_1->commTally.Hw_RxFIFOOverrun += VAR_3[6];
        VAR_1->commTally.Hw_DecrypErr_Mul += VAR_3[7];
        VAR_1->commTally.Hw_RetryCnt += VAR_3[8];
        VAR_1->commTally.Hw_TotalTxFrm += VAR_3[9];
        VAR_1->commTally.Hw_RxTimeOut +=VAR_3[10];

        VAR_1->commTally.Tx_MPDU += VAR_3[11];
        VAR_1->commTally.BA_Fail += VAR_3[12];
        VAR_1->commTally.Hw_Tx_AMPDU += VAR_3[13];
        VAR_1->commTally.Hw_Tx_MPDU += VAR_3[14];
        VAR_1->commTally.RateCtrlTxMPDU += VAR_3[11];
        VAR_1->commTally.RateCtrlBAFail += VAR_3[12];
    }
    else
    {
        VAR_1->commTally.Hw_RxMPDU += VAR_3[1];
        VAR_1->commTally.Hw_RxDropMPDU += VAR_3[2];
        VAR_1->commTally.Hw_RxDelMPDU += VAR_3[3];

        VAR_1->commTally.Hw_RxPhyMiscError += VAR_3[4];
        VAR_1->commTally.Hw_RxPhyXRError += VAR_3[5];
        VAR_1->commTally.Hw_RxPhyOFDMError += VAR_3[6];
        VAR_1->commTally.Hw_RxPhyCCKError += VAR_3[7];
        VAR_1->commTally.Hw_RxPhyHTError += VAR_3[8];
        VAR_1->commTally.Hw_RxPhyTotalCount += VAR_3[9];
    }

    FUNC_4(VAR_2);

    if (VAR_4 == 0)
    {
        FUNC_0(VAR_0, "rsplen =", VAR_3[0]);
        FUNC_0(VAR_0, "Hw_UnderrunCnt    = ", (0xFFFF & VAR_3[1]));
        FUNC_0(VAR_0, "Hw_TotalRxFrm     = ", VAR_3[2]);
        FUNC_0(VAR_0, "Hw_CRC32Cnt       = ", VAR_3[3]);
        FUNC_0(VAR_0, "Hw_CRC16Cnt       = ", VAR_3[4]);
        FUNC_0(VAR_0, "Hw_DecrypErr_UNI  = ", VAR_3[5]);
        FUNC_0(VAR_0, "Hw_RxFIFOOverrun  = ", VAR_3[6]);
        FUNC_0(VAR_0, "Hw_DecrypErr_Mul  = ", VAR_3[7]);
        FUNC_0(VAR_0, "Hw_RetryCnt       = ", VAR_3[8]);
        FUNC_0(VAR_0, "Hw_TotalTxFrm     = ", VAR_3[9]);
        FUNC_0(VAR_0, "Hw_RxTimeOut      = ", VAR_3[10]);
        FUNC_0(VAR_0, "Tx_MPDU           = ", VAR_3[11]);
        FUNC_0(VAR_0, "BA_Fail           = ", VAR_3[12]);
        FUNC_0(VAR_0, "Hw_Tx_AMPDU       = ", VAR_3[13]);
        FUNC_0(VAR_0, "Hw_Tx_MPDU        = ", VAR_3[14]);
    }
    else
    {
        FUNC_0(VAR_0, "rsplen             = ", VAR_3[0]);
        FUNC_0(VAR_0, "Hw_RxMPDU          = ", (0xFFFF & VAR_3[1]));
        FUNC_0(VAR_0, "Hw_RxDropMPDU      = ", VAR_3[2]);
        FUNC_0(VAR_0, "Hw_RxDelMPDU       = ", VAR_3[3]);
        FUNC_0(VAR_0, "Hw_RxPhyMiscError  = ", VAR_3[4]);
        FUNC_0(VAR_0, "Hw_RxPhyXRError    = ", VAR_3[5]);
        FUNC_0(VAR_0, "Hw_RxPhyOFDMError  = ", VAR_3[6]);
        FUNC_0(VAR_0, "Hw_RxPhyCCKError   = ", VAR_3[7]);
        FUNC_0(VAR_0, "Hw_RxPhyHTError    = ", VAR_3[8]);
        FUNC_0(VAR_0, "Hw_RxPhyTotalCount = ", VAR_3[9]);
    }

}
