
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211_device {int HTHighestOperaRate; int HTCurrentOperaRate; int dot11HTOperationalRateSet; int Regdot11HTOperationalRateSet; TYPE_2__* pHTInfo; } ;
struct TYPE_9__ {int dot11HTOperationalRateSet; int dot11OperationalRateSet; } ;
struct TYPE_6__ {int (* InitHalRATRTableHandler ) (TYPE_3__*,int *,int ) ;} ;
struct TYPE_8__ {TYPE_1__ HalFunc; } ;
struct TYPE_7__ {int bCurrentHTSupport; int CurrentMPDUDensity; int AMPDU_Factor; int CurrentAMPDUFactor; int bAMPDUEnable; int bCurrentAMPDUEnable; int nAMSDU_MaxSize; int nCurrent_AMSDU_MaxSize; int bAMSDU_Support; int bCurrent_AMSDU_Support; int bRegShortGI40MHz; int bCurShortGI40MHz; int bRegShortGI20MHz; int bCurShortGI20MHz; int bRegBW40MHz; int bCurBW40MHz; int bRegSuppCCK; int bCurSuppCCK; scalar_t__ bEnableHT; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct ieee80211_device*,int ,int ) ;
 int FUNC_1 (struct ieee80211_device*,int ,int ) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;

void FUNC_3(struct ieee80211_device* VAR_3)
{
 PRT_HIGH_THROUGHPUT VAR_4 = VAR_3->pHTInfo;


 if(VAR_4->bEnableHT)
 {
  VAR_4->bCurrentHTSupport = 1;

  VAR_4->bCurSuppCCK = VAR_4->bRegSuppCCK;

  VAR_4->bCurBW40MHz = VAR_4->bRegBW40MHz;

  VAR_4->bCurShortGI20MHz= VAR_4->bRegShortGI20MHz;

  VAR_4->bCurShortGI40MHz= VAR_4->bRegShortGI40MHz;

  VAR_4->bCurrent_AMSDU_Support = VAR_4->bAMSDU_Support;

  VAR_4->nCurrent_AMSDU_MaxSize = VAR_4->nAMSDU_MaxSize;

  VAR_4->bCurrentAMPDUEnable = VAR_4->bAMPDUEnable;

  VAR_4->CurrentAMPDUFactor = VAR_4->AMPDU_Factor;

  VAR_4->CurrentMPDUDensity = VAR_4->CurrentMPDUDensity;




  FUNC_0(VAR_3, VAR_3->Regdot11HTOperationalRateSet, VAR_3->dot11HTOperationalRateSet);




  VAR_3->HTHighestOperaRate = FUNC_1(VAR_3, VAR_3->dot11HTOperationalRateSet, VAR_1);
  VAR_3->HTCurrentOperaRate = VAR_3->HTHighestOperaRate;

 }
 else
 {
  VAR_4->bCurrentHTSupport = 0;
 }
 return;
}
