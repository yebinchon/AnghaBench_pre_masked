
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ bdRT2RTAggregation; } ;
struct TYPE_10__ {TYPE_1__ bssht; } ;
struct ieee80211_device {scalar_t__ pairwise_key_type; int HTHighestOperaRate; int HTCurrentOperaRate; int dot11HTOperationalRateSet; TYPE_2__ current_network; TYPE_3__* pHTInfo; } ;
struct TYPE_14__ {int Length; } ;
struct TYPE_13__ {int ShortGI20Mhz; int ShortGI40Mhz; int DssCCk; scalar_t__ MaxAMSDUSize; scalar_t__ MaxRxAMPDUFactor; int MPDUDensity; int* MCS; scalar_t__ MimoPwrSave; scalar_t__ ChlWidth; } ;
struct TYPE_12__ {int RecommemdedTxWidth; int OptMode; scalar_t__ ExtChlOffset; } ;
struct TYPE_11__ {int bCurrentHTSupport; int bCurTxBW40MHz; int bCurShortGI20MHz; int bCurShortGI40MHz; int bCurSuppCCK; int nAMSDU_MaxSize; int nCurrent_AMSDU_MaxSize; int bCurrentAMPDUEnable; int bAMPDUEnable; scalar_t__ AMPDU_Factor; scalar_t__ CurrentAMPDUFactor; int MPDU_Density; int CurrentMPDUDensity; int ForcedAMSDUMaxSize; scalar_t__ PeerMimoPs; int CurrentOpMode; int bRegRxReorderEnable; int bCurRxReorderEnable; int IOTAction; int ForcedAMSDUMode; int bRegRT2RTAggregation; int bAMSDU_Support; int bCurrent_AMSDU_Support; scalar_t__ bRegSuppCCK; scalar_t__ bRegShortGI40MHz; scalar_t__ bRegShortGI20MHz; int * PeerHTInfoBuf; int * PeerHTCapBuf; } ;
typedef TYPE_3__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_4__* PHT_INFORMATION_ELE ;
typedef TYPE_5__* PHT_CAPABILITY_ELE ;
typedef int HT_EXTCHNL_OFFSET ;
typedef int HT_CHANNEL_WIDTH ;
typedef int HT_CAPABILITY_ELE ;
typedef int EWC11NHTInfo ;
typedef int EWC11NHTCap ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_device*,int*,int ) ;
 int FUNC_1 (struct ieee80211_device*,int ,int*) ;
 int FUNC_2 (struct ieee80211_device*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,TYPE_5__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_6__ FUNC_5 (int ,int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_6 (int *,int*,int) ;
 TYPE_6__ VAR_15 ;

void FUNC_7(struct ieee80211_device *VAR_16)
{
 PRT_HIGH_THROUGHPUT VAR_17 = VAR_16->pHTInfo;
 PHT_CAPABILITY_ELE VAR_18 = ((void*)0);
 PHT_INFORMATION_ELE VAR_19 = ((void*)0);
 u16 VAR_20 = 0;
 u8* VAR_21 = ((void*)0);

 static u8 VAR_22[] = {0x00, 0x90, 0x4c, 0x33};
 static u8 VAR_23[] = {0x00, 0x90, 0x4c, 0x34};

 if( VAR_17->bCurrentHTSupport == 0 )
 {
  FUNC_3(VAR_6, "<=== HTOnAssocRsp(): HT_DISABLE\n");
  return;
 }
 FUNC_3(VAR_7, "===> HTOnAssocRsp_wq(): HT_ENABLE\n");






 if(!FUNC_6(VAR_17->PeerHTCapBuf,VAR_22, sizeof(VAR_22)))
  VAR_18 = (PHT_CAPABILITY_ELE)(&VAR_17->PeerHTCapBuf[4]);
 else
  VAR_18 = (PHT_CAPABILITY_ELE)(VAR_17->PeerHTCapBuf);

 if(!FUNC_6(VAR_17->PeerHTInfoBuf, VAR_23, sizeof(VAR_23)))
  VAR_19 = (PHT_INFORMATION_ELE)(&VAR_17->PeerHTInfoBuf[4]);
 else
  VAR_19 = (PHT_INFORMATION_ELE)(VAR_17->PeerHTInfoBuf);





 FUNC_4(VAR_5|VAR_7, VAR_18, sizeof(HT_CAPABILITY_ELE));



 FUNC_2(VAR_16, (HT_CHANNEL_WIDTH)(VAR_18->ChlWidth), (HT_EXTCHNL_OFFSET)(VAR_19->ExtChlOffset));


  VAR_17->bCurTxBW40MHz = ((VAR_19->RecommemdedTxWidth == 1)?1:0);





 VAR_17->bCurShortGI20MHz=
  ((VAR_17->bRegShortGI20MHz)?((VAR_18->ShortGI20Mhz==1)?1:0):0);
 VAR_17->bCurShortGI40MHz=
  ((VAR_17->bRegShortGI40MHz)?((VAR_18->ShortGI40Mhz==1)?1:0):0);
 VAR_17->bCurSuppCCK =
  ((VAR_17->bRegSuppCCK)?((VAR_18->DssCCk==1)?1:0):0);





 VAR_17->bCurrent_AMSDU_Support = VAR_17->bAMSDU_Support;

 VAR_20 = (VAR_18->MaxAMSDUSize==0)?3839:7935;

 if(VAR_17->nAMSDU_MaxSize > VAR_20 )
  VAR_17->nCurrent_AMSDU_MaxSize = VAR_20;
 else
  VAR_17->nCurrent_AMSDU_MaxSize = VAR_17->nAMSDU_MaxSize;





 VAR_17->bCurrentAMPDUEnable = VAR_17->bAMPDUEnable;




 if(!VAR_17->bRegRT2RTAggregation)
 {

  if(VAR_17->AMPDU_Factor > VAR_18->MaxRxAMPDUFactor)
   VAR_17->CurrentAMPDUFactor = VAR_18->MaxRxAMPDUFactor;
  else
   VAR_17->CurrentAMPDUFactor = VAR_17->AMPDU_Factor;

 }else
 {






  if (VAR_16->current_network.bssht.bdRT2RTAggregation)
  {
   if( VAR_16->pairwise_key_type != VAR_8)

    VAR_17->CurrentAMPDUFactor = VAR_18->MaxRxAMPDUFactor;
   else
    VAR_17->CurrentAMPDUFactor = VAR_3;
  }else
  {
   if(VAR_18->MaxRxAMPDUFactor < VAR_2)
    VAR_17->CurrentAMPDUFactor = VAR_18->MaxRxAMPDUFactor;
   else
    VAR_17->CurrentAMPDUFactor = VAR_2;
  }
 }




 if(VAR_17->MPDU_Density > VAR_18->MPDUDensity)
  VAR_17->CurrentMPDUDensity = VAR_17->MPDU_Density;
 else
  VAR_17->CurrentMPDUDensity = VAR_18->MPDUDensity;
 if(VAR_16->pairwise_key_type != VAR_8 )
  VAR_17->CurrentMPDUDensity = 7;
 if(0)
  {

   VAR_17->bCurrentAMPDUEnable = 0;
   VAR_17->ForcedAMSDUMode = VAR_1;
   VAR_17->ForcedAMSDUMaxSize = 7935;

  VAR_17->IOTAction |= VAR_4;
 }


 VAR_17->bCurRxReorderEnable = VAR_17->bRegRxReorderEnable;
 if(VAR_18->MCS[0] == 0)
  VAR_18->MCS[0] = 0xff;

 FUNC_0(VAR_16, VAR_18->MCS, VAR_16->dot11HTOperationalRateSet);




 VAR_17->PeerMimoPs = VAR_18->MimoPwrSave;
 if(VAR_17->PeerMimoPs == VAR_11)
  VAR_21 = VAR_9;
 else
  VAR_21 = VAR_10;


 VAR_16->HTHighestOperaRate = FUNC_1(VAR_16, VAR_16->dot11HTOperationalRateSet, VAR_21);
 VAR_16->HTCurrentOperaRate = VAR_16->HTHighestOperaRate;




 VAR_17->CurrentOpMode = VAR_19->OptMode;



}
