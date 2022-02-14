
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bAddBaReqInProgress; int bAddBaReqDelayed; int bUsingBa; int TxPendingBARecord; int TxAdmittedBARecord; scalar_t__ TxCurSeq; int TsCommonInfo; } ;
typedef TYPE_1__* PTX_TS_RECORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(PTX_TS_RECORD VAR_0)
{
 FUNC_1(&VAR_0->TsCommonInfo);
 VAR_0->TxCurSeq = 0;
 VAR_0->bAddBaReqInProgress = 0;
 VAR_0->bAddBaReqDelayed = 0;
 VAR_0->bUsingBa = 0;
 FUNC_0(&VAR_0->TxAdmittedBARecord);
 FUNC_0(&VAR_0->TxPendingBARecord);
}
