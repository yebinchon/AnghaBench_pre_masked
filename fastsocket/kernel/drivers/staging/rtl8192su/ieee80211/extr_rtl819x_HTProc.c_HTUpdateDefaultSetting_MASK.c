
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_device {scalar_t__ bTxUseDriverAssingedRate; scalar_t__ bTxDisableRateFallBack; TYPE_1__* pHTInfo; } ;
struct TYPE_6__ {scalar_t__ bTxEnableFwCalcDur; } ;
struct TYPE_5__ {scalar_t__ bRegTxEnableFwCalcDur; } ;
struct TYPE_4__ {int bRegShortGI20MHz; int bRegShortGI40MHz; int bRegBW40MHz; int bRegSuppCCK; unsigned long nAMSDU_MaxSize; int bAMPDUEnable; int AMPDU_Factor; int SelfMimoPs; int bRegRT2RTAggregation; int bRegRxReorderEnable; int RxReorderWinSize; int RxReorderPendingTime; scalar_t__ MPDU_Density; scalar_t__ bAMSDU_Support; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;
typedef scalar_t__ BOOLEAN ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(struct ieee80211_device* VAR_2)
{
 PRT_HIGH_THROUGHPUT VAR_3 = VAR_2->pHTInfo;





 VAR_3->bRegShortGI20MHz= 1;
 VAR_3->bRegShortGI40MHz= 1;


 VAR_3->bRegBW40MHz = 1;


 if(VAR_3->bRegBW40MHz)
  VAR_3->bRegSuppCCK = 1;
 else
  VAR_3->bRegSuppCCK = 1;


 VAR_3->nAMSDU_MaxSize = 7935UL;
 VAR_3->bAMSDU_Support = 0;


 VAR_3->bAMPDUEnable = 1;
 VAR_3->AMPDU_Factor = 2;
 VAR_3->MPDU_Density = 0;


 VAR_3->SelfMimoPs = 3;
 if(VAR_3->SelfMimoPs == 2)
  VAR_3->SelfMimoPs = 3;

 VAR_2->bTxDisableRateFallBack = 0;
 VAR_2->bTxUseDriverAssingedRate = 0;







 VAR_3->bRegRT2RTAggregation = 1;


 VAR_3->bRegRxReorderEnable = 1;
 VAR_3->RxReorderWinSize = 64;
 VAR_3->RxReorderPendingTime = 30;



}
