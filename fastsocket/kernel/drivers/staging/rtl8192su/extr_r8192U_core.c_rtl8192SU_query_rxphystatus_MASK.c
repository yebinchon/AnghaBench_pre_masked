
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {long* rxSNRdB; int * received_bwtype; int numqry_phystatusHT; int numqry_phystatusCCK; int numqry_phystatus; } ;
struct r8192_priv {TYPE_1__ stats; scalar_t__* brfpath_rxenable; int bCckHighPower; } ;
struct ieee80211_rx_stats {int bPacketMatchBSSID; int bPacketToSelf; int bIsCCK; int bPacketBeacon; int bToSelfBA; int* RxMIMOSignalQuality; int RxPWDBAll; char RecvSignalPower; int SignalQuality; int* RxMIMOSignalStrength; char RxPower; int SignalStrength; } ;
struct TYPE_9__ {int* cfosho; int* gain_trsw; int* rxsnr; int pwdb_all; int rxsc; int * rxevm; } ;
typedef TYPE_2__ rx_drvinfo_819x_usb ;
struct TYPE_10__ {scalar_t__ BW; int RxMCS; scalar_t__ RxHT; } ;
typedef TYPE_3__ rx_desc_819x_usb ;
struct TYPE_11__ {int cck_agc_rpt; int sq_rpt; } ;
typedef TYPE_4__ phy_sts_cck_819xusb_t ;
typedef int phy_ofdm_rx_status_rxsc_sgien_exintfflag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,char,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ieee80211_rx_stats*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (long) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(
 struct r8192_priv * VAR_6,
 struct ieee80211_rx_stats * VAR_7,
 rx_desc_819x_usb *VAR_8,
 rx_drvinfo_819x_usb * VAR_9,
 struct ieee80211_rx_stats * VAR_10,
 bool VAR_11,
 bool VAR_12,
 bool VAR_13,
 bool VAR_14
 )
{


 phy_sts_cck_819xusb_t * VAR_15;
 phy_ofdm_rx_status_rxsc_sgien_exintfflag* VAR_16;


 u8 VAR_17, VAR_18, VAR_19;
 char VAR_20[4], VAR_21=0;


 u8 VAR_22, VAR_23;
 u32 VAR_24, VAR_25=0;

 u8 VAR_26=0;
 u8 VAR_27 = 0;



 VAR_6->stats.numqry_phystatus++;

 VAR_26 = FUNC_5(VAR_8);


 FUNC_1(VAR_10, 0, sizeof(struct ieee80211_rx_stats));
 VAR_7->bPacketMatchBSSID = VAR_10->bPacketMatchBSSID = VAR_11;
 VAR_7->bPacketToSelf = VAR_10->bPacketToSelf = VAR_12;
 VAR_7->bIsCCK = VAR_10->bIsCCK = VAR_26;
 VAR_7->bPacketBeacon = VAR_10->bPacketBeacon = VAR_13;
 VAR_7->bToSelfBA = VAR_10->bToSelfBA = VAR_14;


 VAR_7->RxMIMOSignalQuality[0] = -1;
 VAR_7->RxMIMOSignalQuality[1] = -1;
 VAR_10->RxMIMOSignalQuality[0] = -1;
 VAR_10->RxMIMOSignalQuality[1] = -1;

 if(VAR_26)
 {
  u8 VAR_28;



  VAR_15 = (phy_sts_cck_819xusb_t *)VAR_9;
  VAR_6->stats.numqry_phystatusCCK++;

  if(!VAR_6->bCckHighPower)
  {
   VAR_28 = VAR_15->cck_agc_rpt & 0xc0;
   VAR_28 = VAR_28>>6;
   switch(VAR_28)
   {



    case 0x3:
     VAR_21 = -35 - (VAR_15->cck_agc_rpt & 0x3e);
     break;
    case 0x2:
     VAR_21 = -23 - (VAR_15->cck_agc_rpt & 0x3e);
     break;
    case 0x1:
     VAR_21 = -11 - (VAR_15->cck_agc_rpt & 0x3e);
     break;
    case 0x0:
     VAR_21 = 8 - (VAR_15->cck_agc_rpt & 0x3e);
     break;
   }
  }
  else
  {
   VAR_28 = VAR_9->cfosho[0] & 0x60;
   VAR_28 = VAR_28>>5;
   switch(VAR_28)
   {
    case 0x3:
     VAR_21 = -35 - ((VAR_15->cck_agc_rpt & 0x1f)<<1) ;
     break;
    case 0x2:
     VAR_21 = -23 - ((VAR_15->cck_agc_rpt & 0x1f)<<1);
     break;
    case 0x1:
     VAR_21 = -11 - ((VAR_15->cck_agc_rpt & 0x1f)<<1) ;
     break;
    case 0x0:
     VAR_21 = -8 - ((VAR_15->cck_agc_rpt & 0x1f)<<1) ;
     break;
   }
  }

  VAR_23 = FUNC_3(VAR_21);
  VAR_7->RxPWDBAll = VAR_10->RxPWDBAll = VAR_23;

  VAR_7->RecvSignalPower = VAR_21;





 {
   u8 VAR_29;

   if(VAR_7->RxPWDBAll > 40)
   {
    VAR_29 = 100;
   }else
   {
    VAR_29 = VAR_15->sq_rpt;

    if(VAR_15->sq_rpt > 64)
     VAR_29 = 0;
    else if (VAR_15->sq_rpt < 20)
     VAR_29 = 100;
    else
     VAR_29 = ((64-VAR_29) * 100) / 44;
   }
   VAR_7->SignalQuality = VAR_10->SignalQuality = VAR_29;
   VAR_7->RxMIMOSignalQuality[0] = VAR_10->RxMIMOSignalQuality[0] = VAR_29;
   VAR_7->RxMIMOSignalQuality[1] = VAR_10->RxMIMOSignalQuality[1] = -1;
  }
 }
 else
 {
  VAR_6->stats.numqry_phystatusHT++;


  VAR_6->brfpath_rxenable[0] = VAR_6->brfpath_rxenable[1] = VAR_5;





  for(VAR_17=VAR_3; VAR_17<VAR_4; VAR_17++)
  {

   if (VAR_6->brfpath_rxenable[VAR_17])
    VAR_27++;
   VAR_20[VAR_17] = ((VAR_9->gain_trsw[VAR_17]&0x3F)*2) - 110;


   VAR_24 = FUNC_3(VAR_20[VAR_17]);
   VAR_25 += VAR_24;
   FUNC_0(VAR_0, "RF-%d RXPWR=%x RSSI=%d\n", VAR_17, VAR_20[VAR_17], VAR_24);






   VAR_6->stats.rxSNRdB[VAR_17] = (long)(VAR_9->rxsnr[VAR_17]/2);







   {
    VAR_7->RxMIMOSignalStrength[VAR_17] =(u8) VAR_24;
    VAR_10->RxMIMOSignalStrength[VAR_17] =(u8) VAR_24;
   }
  }
  VAR_21 = (((VAR_9->pwdb_all ) >> 1 )& 0x7f) -106;
  VAR_23 = FUNC_3(VAR_21);

  VAR_7->RxPWDBAll = VAR_10->RxPWDBAll = VAR_23;
  VAR_7->RxPower = VAR_10->RxPower = VAR_21;
  VAR_7->RecvSignalPower = VAR_21;






   if(VAR_8->RxHT && VAR_8->RxMCS>=VAR_2 &&
    VAR_8->RxMCS<=VAR_1)
   VAR_18 = 2;
  else
   VAR_18 = 1;

  for(VAR_17=0; VAR_17<VAR_18; VAR_17++)
  {
   VAR_22 = FUNC_2( (VAR_9->rxevm[VAR_17] ));
   FUNC_0(VAR_0, "RXRATE=%x RXEVM=%x EVM=%s%d\n", VAR_8->RxMCS, VAR_9->rxevm[VAR_17], "%", VAR_22);


   {
    if(VAR_17==0)
     VAR_7->SignalQuality = VAR_10->SignalQuality = (u8)(VAR_22 & 0xff);
    VAR_7->RxMIMOSignalQuality[VAR_17] = VAR_10->RxMIMOSignalQuality[VAR_17] = (u8)(VAR_22 & 0xff);
   }
  }




  VAR_16 = (phy_ofdm_rx_status_rxsc_sgien_exintfflag *)&VAR_19;

  if(VAR_8->BW)
   VAR_6->stats.received_bwtype[1+VAR_9->rxsc]++;
  else
   VAR_6->stats.received_bwtype[0]++;
 }



 if(VAR_26)
 {
  VAR_7->SignalStrength = VAR_10->SignalStrength = (u8)(FUNC_4((long)VAR_23));

 }
 else
 {


  if (VAR_27 != 0)
   VAR_7->SignalStrength = VAR_10->SignalStrength = (u8)(FUNC_4((long)(VAR_25/=VAR_27)));
 }
}
