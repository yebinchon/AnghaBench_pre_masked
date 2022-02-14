
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_8__ {size_t* slide_signal_strength; size_t slide_rssi_total; int* rx_rssi_percentage; size_t* Slide_Beacon_pwdb; size_t Slide_Beacon_Total; size_t* slide_evm; size_t slide_evm_total; size_t signal_quality; size_t last_signal_strength_inpercent; int* rx_evm_percentage; void* signal_strength; int num_process_phyinfo; } ;
struct r8192_priv {int undecorated_smoothed_pwdb; TYPE_3__ stats; TYPE_1__* ieee80211; } ;
struct ieee80211_rx_stats {unsigned int Seq_Num; size_t SignalStrength; int* RxMIMOSignalStrength; size_t RxPWDBAll; scalar_t__ SignalQuality; int* RxMIMOSignalQuality; scalar_t__ bToSelfBA; scalar_t__ bPacketBeacon; scalar_t__ bPacketToSelf; scalar_t__ bIsCCK; int bPacketMatchBSSID; void* rssi; scalar_t__ bFirstMPDU; int bIsAMPDU; } ;
struct ieee80211_hdr_3addr {int seq_ctl; } ;
struct TYPE_10__ {int UndecoratedSmoothedPWDB; } ;
struct TYPE_7__ {size_t RxPWDBAll; } ;
struct TYPE_9__ {TYPE_2__ Status; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_4 (struct r8192_priv*,struct ieee80211_rx_stats*) ;
 int FUNC_5 (int ,size_t) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (struct r8192_priv*,struct ieee80211_rx_stats*) ;

__attribute__((used)) static void FUNC_8(struct r8192_priv * VAR_9, u8* VAR_10,struct ieee80211_rx_stats * VAR_11, struct ieee80211_rx_stats * VAR_12)
{
 bool VAR_13 = 0;
 u8 VAR_14;
 u32 VAR_15, VAR_16;

 static u32 VAR_17=0, VAR_18=0;
 static u32 VAR_19=0, VAR_20=0;
 static u32 VAR_21=0, VAR_22=0;




 static u32 VAR_23=0, VAR_24=0;
 static u32 VAR_25=0;

 struct ieee80211_hdr_3addr *VAR_26;
 u16 VAR_27 ;
 unsigned int VAR_28,VAR_29;
 VAR_26 = (struct ieee80211_hdr_3addr *)VAR_10;
 VAR_27 = FUNC_3(VAR_26->seq_ctl);
 VAR_28 = FUNC_1(VAR_27);
 VAR_29 = FUNC_2(VAR_27);

 VAR_12->Seq_Num = VAR_29;



 if(!VAR_11->bIsAMPDU)
 {

  VAR_13 = 1;
 }else
 {
 }

 if(VAR_18++ >= VAR_3)
 {
  VAR_18 = VAR_3;
  VAR_21 = VAR_9->stats.slide_signal_strength[VAR_17];
  VAR_9->stats.slide_rssi_total -= VAR_21;
 }
 VAR_9->stats.slide_rssi_total += VAR_11->SignalStrength;

 VAR_9->stats.slide_signal_strength[VAR_17++] = VAR_11->SignalStrength;
 if(VAR_17 >= VAR_3)
  VAR_17 = 0;


 VAR_16 = VAR_9->stats.slide_rssi_total/VAR_18;
 VAR_9->stats.signal_strength = FUNC_6((u8)VAR_16);
 VAR_12->rssi = VAR_9->stats.signal_strength;



 if(!VAR_11->bPacketMatchBSSID)
 {
  if(!VAR_11->bToSelfBA)
   return;
 }

 if(!VAR_13)
  return;

 FUNC_4(VAR_9,VAR_11);




 VAR_9->stats.num_process_phyinfo++;
 if(!VAR_11->bIsCCK && VAR_11->bPacketToSelf)
 {
  for (VAR_14 = VAR_4; VAR_14 < VAR_5; VAR_14++)
  {
   if (!FUNC_5(VAR_9->ieee80211->dev, VAR_14))
    continue;
   FUNC_0(VAR_0,"Jacken -> pPreviousstats->RxMIMOSignalStrength[rfpath]  = %d \n" ,VAR_11->RxMIMOSignalStrength[VAR_14] );

   if(VAR_9->stats.rx_rssi_percentage[VAR_14] == 0)
   {
    VAR_9->stats.rx_rssi_percentage[VAR_14] = VAR_11->RxMIMOSignalStrength[VAR_14];

   }
   if(VAR_11->RxMIMOSignalStrength[VAR_14] > VAR_9->stats.rx_rssi_percentage[VAR_14])
   {
    VAR_9->stats.rx_rssi_percentage[VAR_14] =
     ( (VAR_9->stats.rx_rssi_percentage[VAR_14]*(VAR_6-1)) +
     (VAR_11->RxMIMOSignalStrength[VAR_14])) /(VAR_6);
    VAR_9->stats.rx_rssi_percentage[VAR_14] = VAR_9->stats.rx_rssi_percentage[VAR_14] + 1;
   }
   else
   {
    VAR_9->stats.rx_rssi_percentage[VAR_14] =
     ( (VAR_9->stats.rx_rssi_percentage[VAR_14]*(VAR_6-1)) +
     (VAR_11->RxMIMOSignalStrength[VAR_14])) /(VAR_6);
   }
   FUNC_0(VAR_0,"Jacken -> priv->RxStats.RxRSSIPercentage[rfPath]  = %d \n" ,VAR_9->stats.rx_rssi_percentage[VAR_14] );
  }
 }






 if(VAR_11->bPacketBeacon)
 {

  if(VAR_24++ >= VAR_2)
  {
   VAR_24 = VAR_2;
   VAR_25 = VAR_9->stats.Slide_Beacon_pwdb[VAR_23];
   VAR_9->stats.Slide_Beacon_Total -= VAR_25;


  }
  VAR_9->stats.Slide_Beacon_Total += VAR_11->RxPWDBAll;
  VAR_9->stats.Slide_Beacon_pwdb[VAR_23] = VAR_11->RxPWDBAll;

  VAR_23++;
  if(VAR_23 >= VAR_2)
   VAR_23 = 0;
  VAR_11->RxPWDBAll = VAR_9->stats.Slide_Beacon_Total/VAR_24;
  if(VAR_11->RxPWDBAll >= 3)
   VAR_11->RxPWDBAll -= 3;
 }

 FUNC_0(VAR_1, "Smooth %s PWDB = %d\n",
    VAR_11->bIsCCK? "CCK": "OFDM",
    VAR_11->RxPWDBAll);

 if(VAR_11->bPacketToSelf || VAR_11->bPacketBeacon || VAR_11->bToSelfBA)
 {
  if(VAR_9->undecorated_smoothed_pwdb < 0)
  {
   VAR_9->undecorated_smoothed_pwdb = VAR_11->RxPWDBAll;

  }

  if(VAR_11->RxPWDBAll > (u32)VAR_9->undecorated_smoothed_pwdb)
  {
   VAR_9->undecorated_smoothed_pwdb =
     ( ((VAR_9->undecorated_smoothed_pwdb)*(VAR_6-1)) +
     (VAR_11->RxPWDBAll)) /(VAR_6);
   VAR_9->undecorated_smoothed_pwdb = VAR_9->undecorated_smoothed_pwdb + 1;
  }
  else
  {
   VAR_9->undecorated_smoothed_pwdb =
     ( ((VAR_9->undecorated_smoothed_pwdb)*(VAR_6-1)) +
     (VAR_11->RxPWDBAll)) /(VAR_6);
  }
  FUNC_7(VAR_9,VAR_11);
 }





 if(VAR_11->SignalQuality == 0)
 {
 }
 else
 {
  if(VAR_11->bPacketToSelf || VAR_11->bPacketBeacon || VAR_11->bToSelfBA){
   if(VAR_20++ >= VAR_3){
    VAR_20 = VAR_3;
    VAR_22 = VAR_9->stats.slide_evm[VAR_19];
    VAR_9->stats.slide_evm_total -= VAR_22;
   }

   VAR_9->stats.slide_evm_total += VAR_11->SignalQuality;

   VAR_9->stats.slide_evm[VAR_19++] = VAR_11->SignalQuality;
   if(VAR_19 >= VAR_3)
    VAR_19 = 0;


   VAR_16 = VAR_9->stats.slide_evm_total/VAR_20;
   VAR_9->stats.signal_quality = VAR_16;

   VAR_9->stats.last_signal_strength_inpercent = VAR_16;
  }


  if(VAR_11->bPacketToSelf || VAR_11->bPacketBeacon || VAR_11->bToSelfBA)
  {
   for(VAR_15 = 0; VAR_15<2 ; VAR_15++)
   {
    if(VAR_11->RxMIMOSignalQuality[VAR_15] != -1)
    {
     if(VAR_9->stats.rx_evm_percentage[VAR_15] == 0)
     {
      VAR_9->stats.rx_evm_percentage[VAR_15] = VAR_11->RxMIMOSignalQuality[VAR_15];
     }
     VAR_9->stats.rx_evm_percentage[VAR_15] =
      ( (VAR_9->stats.rx_evm_percentage[VAR_15]* (VAR_6-1)) +
      (VAR_11->RxMIMOSignalQuality[VAR_15]* 1)) / (VAR_6);
    }
   }
  }
 }

}
