
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
struct TYPE_8__ {size_t* slide_signal_strength; size_t slide_rssi_total; int* rx_rssi_percentage; size_t* Slide_Beacon_pwdb; size_t Slide_Beacon_Total; size_t* slide_evm; size_t slide_evm_total; size_t signal_quality; size_t last_signal_strength_inpercent; int* rx_evm_percentage; int num_process_phyinfo; int signal_strength; } ;
struct r8192_priv {size_t NumTotalRFPath; int undecorated_smoothed_pwdb; TYPE_3__ stats; TYPE_1__* ieee80211; } ;
struct ieee80211_rx_stats {unsigned int Seq_Num; size_t SignalStrength; int* RxMIMOSignalStrength; size_t RxPWDBAll; scalar_t__ SignalQuality; int* RxMIMOSignalQuality; scalar_t__ bToSelfBA; scalar_t__ bPacketBeacon; scalar_t__ bPacketToSelf; scalar_t__ bIsCCK; int bPacketMatchBSSID; int rssi; int bIsAMPDU; } ;
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
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (size_t) ;

void FUNC_6(struct r8192_priv * VAR_8,u8* VAR_9, struct ieee80211_rx_stats * VAR_10, struct ieee80211_rx_stats * VAR_11)
{
 bool VAR_12 = 0;
 u8 VAR_13;
 u32 VAR_14, VAR_15;

 static u32 VAR_16=0, VAR_17=0;
 static u32 VAR_18=0, VAR_19=0;
 static u32 VAR_20=0, VAR_21=0;

 static u32 VAR_22=0, VAR_23=0;
 static u32 VAR_24=0;

 struct ieee80211_hdr_3addr *VAR_25;
 u16 VAR_26 ;
 unsigned int VAR_27,VAR_28;
 VAR_25 = (struct ieee80211_hdr_3addr *)VAR_9;
 VAR_26 = FUNC_3(VAR_25->seq_ctl);
 VAR_27 = FUNC_1(VAR_26);
 VAR_28 = FUNC_2(VAR_26);

 VAR_11->Seq_Num = VAR_28;



 if(!VAR_10->bIsAMPDU)
 {

  VAR_12 = 1;
 }else
 {
 }


 if(VAR_17++ >= VAR_3)
 {
  VAR_17 = VAR_3;
  VAR_20 = VAR_8->stats.slide_signal_strength[VAR_16];
  VAR_8->stats.slide_rssi_total -= VAR_20;
 }
 VAR_8->stats.slide_rssi_total += VAR_10->SignalStrength;

 VAR_8->stats.slide_signal_strength[VAR_16++] = VAR_10->SignalStrength;
 if(VAR_16 >= VAR_3)
  VAR_16 = 0;


 VAR_15 = VAR_8->stats.slide_rssi_total/VAR_17;
 VAR_8->stats.signal_strength = FUNC_5((u8)VAR_15);
 VAR_11->rssi = VAR_8->stats.signal_strength;



 if(!VAR_10->bPacketMatchBSSID)
 {
  if(!VAR_10->bToSelfBA)
   return;
 }

 if(!VAR_12)
  return;







 VAR_8->stats.num_process_phyinfo++;






 if(!VAR_10->bIsCCK && (VAR_10->bPacketToSelf || VAR_10->bToSelfBA))
 {
  for (VAR_13 = VAR_4; VAR_13 < VAR_8->NumTotalRFPath; VAR_13++)
  {
                     if (!FUNC_4(VAR_8->ieee80211->dev, VAR_13))
            continue;


   if(VAR_8->stats.rx_rssi_percentage[VAR_13] == 0)
   {
    VAR_8->stats.rx_rssi_percentage[VAR_13] = VAR_10->RxMIMOSignalStrength[VAR_13];

   }
   if(VAR_10->RxMIMOSignalStrength[VAR_13] > VAR_8->stats.rx_rssi_percentage[VAR_13])
   {
    VAR_8->stats.rx_rssi_percentage[VAR_13] =
     ( (VAR_8->stats.rx_rssi_percentage[VAR_13]*(VAR_5-1)) +
     (VAR_10->RxMIMOSignalStrength[VAR_13])) /(VAR_5);
    VAR_8->stats.rx_rssi_percentage[VAR_13] = VAR_8->stats.rx_rssi_percentage[VAR_13] + 1;
   }
   else
   {
    VAR_8->stats.rx_rssi_percentage[VAR_13] =
     ( (VAR_8->stats.rx_rssi_percentage[VAR_13]*(VAR_5-1)) +
     (VAR_10->RxMIMOSignalStrength[VAR_13])) /(VAR_5);
   }
   FUNC_0(VAR_0,"priv->stats.rx_rssi_percentage[rfPath]  = %d \n" ,VAR_8->stats.rx_rssi_percentage[VAR_13] );
  }
 }





 FUNC_0(VAR_1, "Smooth %s PWDB = %d\n",
    VAR_10->bIsCCK? "CCK": "OFDM",
    VAR_10->RxPWDBAll);

 if(VAR_10->bPacketBeacon)
 {

  if(VAR_23++ >= VAR_2)
  {
   VAR_23 = VAR_2;
   VAR_24 = VAR_8->stats.Slide_Beacon_pwdb[VAR_22];
   VAR_8->stats.Slide_Beacon_Total -= VAR_24;


  }
  VAR_8->stats.Slide_Beacon_Total += VAR_10->RxPWDBAll;
  VAR_8->stats.Slide_Beacon_pwdb[VAR_22] = VAR_10->RxPWDBAll;

  VAR_22++;
  if(VAR_22 >= VAR_2)
   VAR_22 = 0;
  VAR_10->RxPWDBAll = VAR_8->stats.Slide_Beacon_Total/VAR_23;
  if(VAR_10->RxPWDBAll >= 3)
   VAR_10->RxPWDBAll -= 3;
 }

 FUNC_0(VAR_1, "Smooth %s PWDB = %d\n",
    VAR_10->bIsCCK? "CCK": "OFDM",
    VAR_10->RxPWDBAll);


 if(VAR_10->bPacketToSelf || VAR_10->bPacketBeacon || VAR_10->bToSelfBA)
 {
  if(VAR_8->undecorated_smoothed_pwdb < 0)
  {
   VAR_8->undecorated_smoothed_pwdb = VAR_10->RxPWDBAll;

  }

  if(VAR_10->RxPWDBAll > (u32)VAR_8->undecorated_smoothed_pwdb)
  {
   VAR_8->undecorated_smoothed_pwdb =
     ( ((VAR_8->undecorated_smoothed_pwdb)*(VAR_5-1)) +
     (VAR_10->RxPWDBAll)) /(VAR_5);
   VAR_8->undecorated_smoothed_pwdb = VAR_8->undecorated_smoothed_pwdb + 1;
  }
  else
  {
   VAR_8->undecorated_smoothed_pwdb =
     ( ((VAR_8->undecorated_smoothed_pwdb)*(VAR_5-1)) +
     (VAR_10->RxPWDBAll)) /(VAR_5);
  }
 }





 if(VAR_10->SignalQuality == 0)
 {
 }
 else
 {
  if(VAR_10->bPacketToSelf || VAR_10->bPacketBeacon || VAR_10->bToSelfBA){
   if(VAR_19++ >= VAR_3){
    VAR_19 = VAR_3;
    VAR_21 = VAR_8->stats.slide_evm[VAR_18];
    VAR_8->stats.slide_evm_total -= VAR_21;
   }

   VAR_8->stats.slide_evm_total += VAR_10->SignalQuality;

   VAR_8->stats.slide_evm[VAR_18++] = VAR_10->SignalQuality;
   if(VAR_18 >= VAR_3)
    VAR_18 = 0;


   VAR_15 = VAR_8->stats.slide_evm_total/VAR_19;
   VAR_8->stats.signal_quality = VAR_15;

   VAR_8->stats.last_signal_strength_inpercent = VAR_15;
  }


  if(VAR_10->bPacketToSelf || VAR_10->bPacketBeacon || VAR_10->bToSelfBA)
  {
   for(VAR_14 = 0; VAR_14<2 ; VAR_14++)
   {
    if(VAR_10->RxMIMOSignalQuality[VAR_14] != -1)
    {
     if(VAR_8->stats.rx_evm_percentage[VAR_14] == 0)
     {
      VAR_8->stats.rx_evm_percentage[VAR_14] = VAR_10->RxMIMOSignalQuality[VAR_14];
     }
     VAR_8->stats.rx_evm_percentage[VAR_14] =
      ( (VAR_8->stats.rx_evm_percentage[VAR_14]* (VAR_5-1)) +
      (VAR_10->RxMIMOSignalQuality[VAR_14]* 1)) / (VAR_5);
    }
   }
  }
 }


}
