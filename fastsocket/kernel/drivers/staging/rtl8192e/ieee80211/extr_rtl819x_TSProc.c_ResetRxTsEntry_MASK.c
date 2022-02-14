
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RxIndicateSeq; int RxTimeoutIndicateSeq; int RxAdmittedBARecord; int TsCommonInfo; } ;
typedef TYPE_1__* PRX_TS_RECORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(PRX_TS_RECORD VAR_0)
{
 FUNC_1(&VAR_0->TsCommonInfo);
 VAR_0->RxIndicateSeq = 0xffff;
 VAR_0->RxTimeoutIndicateSeq = 0xffff;
 FUNC_0(&VAR_0->RxAdmittedBARecord);
}
