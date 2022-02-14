
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ bdRT2RTAggregation; } ;
struct TYPE_8__ {TYPE_1__ bssht; } ;
struct ieee80211_device {scalar_t__ pairwise_key_type; int HTHighestOperaRate; int HTCurrentOperaRate; int dot11HTOperationalRateSet; TYPE_2__ current_network; int dev; scalar_t__ (* is_ap_in_wep_tkip ) (int ) ;TYPE_3__* pHTInfo; } ;
struct TYPE_11__ {int ShortGI20Mhz; int ShortGI40Mhz; int DssCCk; scalar_t__ MaxAMSDUSize; scalar_t__ MaxRxAMPDUFactor; int MPDUDensity; int* MCS; scalar_t__ MimoPwrSave; scalar_t__ ChlWidth; } ;
struct TYPE_10__ {int RecommemdedTxWidth; int OptMode; scalar_t__ ExtChlOffset; } ;
struct TYPE_9__ {int bCurrentHTSupport; int bCurTxBW40MHz; int bCurShortGI20MHz; int bCurShortGI40MHz; int bCurSuppCCK; int nAMSDU_MaxSize; int nCurrent_AMSDU_MaxSize; int bCurrentAMPDUEnable; int bAMPDUEnable; scalar_t__ IOTPeer; scalar_t__ AMPDU_Factor; scalar_t__ CurrentAMPDUFactor; int MPDU_Density; int CurrentMPDUDensity; int IOTAction; int ForcedAMSDUMaxSize; scalar_t__ PeerMimoPs; int CurrentOpMode; int bRegRxReorderEnable; int bCurRxReorderEnable; int ForcedAMSDUMode; int bRegRT2RTAggregation; int bAMSDU_Support; int bCurrent_AMSDU_Support; scalar_t__ bRegSuppCCK; scalar_t__ bRegShortGI40MHz; scalar_t__ bRegShortGI20MHz; int * PeerHTInfoBuf; int * PeerHTCapBuf; } ;
typedef TYPE_3__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_4__* PHT_INFORMATION_ELE ;
typedef TYPE_5__* PHT_CAPABILITY_ELE ;
typedef int HT_EXTCHNL_OFFSET ;
typedef int HT_CHANNEL_WIDTH ;
typedef int HT_CAPABILITY_ELE ;
typedef int EWC11NHTInfo ;
typedef int EWC11NHTCap ;


 int FUNC_0 (struct ieee80211_device*,int*,int ) ;
 int FUNC_1 (struct ieee80211_device*,int ,int*) ;
 int FUNC_2 (struct ieee80211_device*,int) ;
 int FUNC_3 (struct ieee80211_device*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,TYPE_5__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int *,int*,int) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(struct ieee80211_device *VAR_13)
{
 PRT_HIGH_THROUGHPUT VAR_14 = VAR_13->pHTInfo;
 PHT_CAPABILITY_ELE VAR_15 = ((void*)0);
 PHT_INFORMATION_ELE VAR_16 = ((void*)0);
 u16 VAR_17 = 0;
 u8* VAR_18 = ((void*)0);

 static u8 VAR_19[] = {0x00, 0x90, 0x4c, 0x33};
 static u8 VAR_20[] = {0x00, 0x90, 0x4c, 0x34};

 if( VAR_14->bCurrentHTSupport == 0 )
 {
  FUNC_4(VAR_7, "<=== HTOnAssocRsp(): HT_DISABLE\n");
  return;
 }
 FUNC_4(VAR_8, "===> HTOnAssocRsp_wq(): HT_ENABLE\n");






 if(!FUNC_6(VAR_14->PeerHTCapBuf,VAR_19, sizeof(VAR_19)))
  VAR_15 = (PHT_CAPABILITY_ELE)(&VAR_14->PeerHTCapBuf[4]);
 else
  VAR_15 = (PHT_CAPABILITY_ELE)(VAR_14->PeerHTCapBuf);

 if(!FUNC_6(VAR_14->PeerHTInfoBuf, VAR_20, sizeof(VAR_20)))
  VAR_16 = (PHT_INFORMATION_ELE)(&VAR_14->PeerHTInfoBuf[4]);
 else
  VAR_16 = (PHT_INFORMATION_ELE)(VAR_14->PeerHTInfoBuf);





 FUNC_5(VAR_6|VAR_8, VAR_15, sizeof(HT_CAPABILITY_ELE));



 FUNC_3(VAR_13, (HT_CHANNEL_WIDTH)(VAR_15->ChlWidth), (HT_EXTCHNL_OFFSET)(VAR_16->ExtChlOffset));


  VAR_14->bCurTxBW40MHz = ((VAR_16->RecommemdedTxWidth == 1)?1:0);





 VAR_14->bCurShortGI20MHz=
  ((VAR_14->bRegShortGI20MHz)?((VAR_15->ShortGI20Mhz==1)?1:0):0);
 VAR_14->bCurShortGI40MHz=
  ((VAR_14->bRegShortGI40MHz)?((VAR_15->ShortGI40Mhz==1)?1:0):0);
 VAR_14->bCurSuppCCK =
  ((VAR_14->bRegSuppCCK)?((VAR_15->DssCCk==1)?1:0):0);





 VAR_14->bCurrent_AMSDU_Support = VAR_14->bAMSDU_Support;

 VAR_17 = (VAR_15->MaxAMSDUSize==0)?3839:7935;

 if(VAR_14->nAMSDU_MaxSize > VAR_17 )
  VAR_14->nCurrent_AMSDU_MaxSize = VAR_17;
 else
  VAR_14->nCurrent_AMSDU_MaxSize = VAR_14->nAMSDU_MaxSize;




 VAR_14->bCurrentAMPDUEnable = VAR_14->bAMPDUEnable;
 if(VAR_13->is_ap_in_wep_tkip && VAR_13->is_ap_in_wep_tkip(VAR_13->dev))
 {
  if( (VAR_14->IOTPeer== VAR_4) ||
    (VAR_14->IOTPeer == VAR_5) )
   VAR_14->bCurrentAMPDUEnable = 0;
 }




 if(!VAR_14->bRegRT2RTAggregation)
 {

  if(VAR_14->AMPDU_Factor > VAR_15->MaxRxAMPDUFactor)
   VAR_14->CurrentAMPDUFactor = VAR_15->MaxRxAMPDUFactor;
  else
   VAR_14->CurrentAMPDUFactor = VAR_14->AMPDU_Factor;

 }else
 {


  if (VAR_13->current_network.bssht.bdRT2RTAggregation)
  {
   if( VAR_13->pairwise_key_type != VAR_9)

    VAR_14->CurrentAMPDUFactor = VAR_15->MaxRxAMPDUFactor;
   else
    VAR_14->CurrentAMPDUFactor = VAR_2;
  }else
  {
   if(VAR_15->MaxRxAMPDUFactor < VAR_1)
    VAR_14->CurrentAMPDUFactor = VAR_15->MaxRxAMPDUFactor;
   else
    VAR_14->CurrentAMPDUFactor = VAR_1;
  }
 }




 if(VAR_14->MPDU_Density > VAR_15->MPDUDensity)
  VAR_14->CurrentMPDUDensity = VAR_14->MPDU_Density;
 else
  VAR_14->CurrentMPDUDensity = VAR_15->MPDUDensity;
 if(VAR_13->pairwise_key_type != VAR_9 )
  VAR_14->CurrentMPDUDensity = 7;
 if(VAR_14->IOTAction & VAR_3)
  {

   VAR_14->bCurrentAMPDUEnable = 0;
   VAR_14->ForcedAMSDUMode = VAR_0;
   VAR_14->ForcedAMSDUMaxSize = 7935;
 }


 VAR_14->bCurRxReorderEnable = VAR_14->bRegRxReorderEnable;
 if(VAR_15->MCS[0] == 0)
  VAR_15->MCS[0] = 0xff;


 FUNC_2(VAR_13, ((VAR_15->MCS[1])!=0));

 FUNC_0(VAR_13, VAR_15->MCS, VAR_13->dot11HTOperationalRateSet);




 VAR_14->PeerMimoPs = VAR_15->MimoPwrSave;
 if(VAR_14->PeerMimoPs == VAR_12)
  VAR_18 = VAR_10;
 else
  VAR_18 = VAR_11;


 VAR_13->HTHighestOperaRate = FUNC_1(VAR_13, VAR_13->dot11HTOperationalRateSet, VAR_18);
 VAR_13->HTCurrentOperaRate = VAR_13->HTHighestOperaRate;




 VAR_14->CurrentOpMode = VAR_16->OptMode;



}
