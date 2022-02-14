
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_10__ {long* rxSNRdB; int * received_bwtype; int numqry_phystatusHT; int numqry_phystatusCCK; int numqry_phystatus; } ;
struct r8192_priv {scalar_t__ rf_type; TYPE_1__ stats; scalar_t__* brfpath_rxenable; TYPE_2__* ieee80211; } ;
struct ieee80211_rx_stats {int bPacketMatchBSSID; int bPacketToSelf; size_t bIsCCK; int bPacketBeacon; int bToSelfBA; int* RxMIMOSignalQuality; char* cck_adc_pwdb; size_t RxPWDBAll; char RecvSignalPower; size_t SignalQuality; size_t* RxMIMOSignalStrength; char RxPower; size_t SignalStrength; } ;
typedef int rx_fwinfo_819x_pci ;
typedef TYPE_3__* prx_fwinfo_819x_pci ;
typedef int prx_desc_819x_pci ;
struct TYPE_13__ {int* trsw_gain_X; size_t* rxsnr_X; int pwdb_all; size_t* rxevm_X; size_t rxsc_sgien_exflg; } ;
typedef TYPE_4__ phy_sts_ofdm_819xpci_t ;
struct TYPE_14__ {size_t* adc_pwdb_X; int cck_agc_rpt; size_t sq_rpt; } ;
typedef TYPE_5__ phy_sts_cck_819xpci_t ;
struct TYPE_15__ {int rxsc; } ;
typedef TYPE_6__ phy_ofdm_rx_status_rxsc_sgien_exintfflag ;
struct TYPE_16__ {scalar_t__ Enable; } ;
struct TYPE_12__ {scalar_t__ RxRate; scalar_t__ BW; scalar_t__ RxHT; } ;
struct TYPE_11__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_9__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_rx_stats*,int ,int) ;
 int VAR_7 ;
 size_t FUNC_2 (int ,int ,int) ;
 size_t FUNC_3 (char) ;
 size_t FUNC_4 (char) ;
 scalar_t__ FUNC_5 (long) ;
 size_t FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(
 struct r8192_priv * VAR_8,
 struct ieee80211_rx_stats * VAR_9,
 prx_desc_819x_pci VAR_10,
 prx_fwinfo_819x_pci VAR_11,
 struct ieee80211_rx_stats * VAR_12,
 bool VAR_13,
 bool VAR_14,
 bool VAR_15,
 bool VAR_16
 )
{

 phy_sts_ofdm_819xpci_t* VAR_17;
 phy_sts_cck_819xpci_t * VAR_18;
 phy_ofdm_rx_status_rxsc_sgien_exintfflag* VAR_19;
 u8 *VAR_20;
 u8 VAR_21,VAR_22, VAR_23, VAR_24, VAR_25;
 char VAR_26[4], VAR_27=0;

 char VAR_28, VAR_29;
 u8 VAR_30, VAR_31;
 u32 VAR_32, VAR_33=0;

 u8 VAR_34=0;
 u8 VAR_35 = 0;


 static u8 VAR_36 = 0;
 static u32 VAR_37 = 0;

 VAR_8->stats.numqry_phystatus++;

 VAR_34 = FUNC_6(VAR_11);


 FUNC_1(VAR_12, 0, sizeof(struct ieee80211_rx_stats));
 VAR_9->bPacketMatchBSSID = VAR_12->bPacketMatchBSSID = VAR_13;
 VAR_9->bPacketToSelf = VAR_12->bPacketToSelf = VAR_14;
 VAR_9->bIsCCK = VAR_12->bIsCCK = VAR_34;
 VAR_9->bPacketBeacon = VAR_12->bPacketBeacon = VAR_15;
 VAR_9->bToSelfBA = VAR_12->bToSelfBA = VAR_16;

 if(VAR_36 == 0)
 {
  VAR_37 = FUNC_2(VAR_8->ieee80211->dev, VAR_7, 0x200);
  VAR_36 = 1;
 }


 VAR_20 = (u8*)VAR_11;


 VAR_20 += sizeof(rx_fwinfo_819x_pci);


 VAR_18 = (phy_sts_cck_819xpci_t *)VAR_20;
 VAR_17 = (phy_sts_ofdm_819xpci_t *)VAR_20;

 VAR_9->RxMIMOSignalQuality[0] = -1;
 VAR_9->RxMIMOSignalQuality[1] = -1;
 VAR_12->RxMIMOSignalQuality[0] = -1;
 VAR_12->RxMIMOSignalQuality[1] = -1;

 if(VAR_34)
 {







  u8 VAR_38;




  VAR_8->stats.numqry_phystatusCCK++;
  if(!VAR_37)
  {
   VAR_38 = VAR_18->cck_agc_rpt & 0xc0;
   VAR_38 = VAR_38>>6;
   switch(VAR_38)
   {



    case 0x3:
     VAR_27 = -35 - (VAR_18->cck_agc_rpt & 0x3e);
     break;
    case 0x2:
     VAR_27 = -23 - (VAR_18->cck_agc_rpt & 0x3e);
     break;
    case 0x1:
     VAR_27 = -11 - (VAR_18->cck_agc_rpt & 0x3e);
     break;
    case 0x0:
     VAR_27 = 8 - (VAR_18->cck_agc_rpt & 0x3e);
     break;
   }
  }
  else
  {
   VAR_38 = VAR_18->cck_agc_rpt & 0x60;
   VAR_38 = VAR_38>>5;
   switch(VAR_38)
   {
    case 0x3:
     VAR_27 = -35 - ((VAR_18->cck_agc_rpt & 0x1f)<<1) ;
     break;
    case 0x2:
     VAR_27 = -23 - ((VAR_18->cck_agc_rpt & 0x1f)<<1);
     break;
    case 0x1:
     VAR_27 = -11 - ((VAR_18->cck_agc_rpt & 0x1f)<<1) ;
     break;
    case 0x0:
     VAR_27 = -8 - ((VAR_18->cck_agc_rpt & 0x1f)<<1) ;
     break;
   }
  }

  VAR_31 = FUNC_4(VAR_27);
  VAR_9->RxPWDBAll = VAR_12->RxPWDBAll = VAR_31;
  VAR_9->RecvSignalPower = VAR_27;




  if(VAR_13)
  {
   u8 VAR_39;

   if(VAR_9->RxPWDBAll > 40)
   {
    VAR_39 = 100;
   }else
   {
    VAR_39 = VAR_18->sq_rpt;

    if(VAR_18->sq_rpt > 64)
     VAR_39 = 0;
    else if (VAR_18->sq_rpt < 20)
     VAR_39 = 100;
    else
     VAR_39 = ((64-VAR_39) * 100) / 44;
   }
   VAR_9->SignalQuality = VAR_12->SignalQuality = VAR_39;
   VAR_9->RxMIMOSignalQuality[0] = VAR_12->RxMIMOSignalQuality[0] = VAR_39;
   VAR_9->RxMIMOSignalQuality[1] = VAR_12->RxMIMOSignalQuality[1] = -1;
  }
 }
 else
 {
  VAR_8->stats.numqry_phystatusHT++;



  for(VAR_21=VAR_4; VAR_21<VAR_5; VAR_21++)
  {

   if (VAR_8->brfpath_rxenable[VAR_21])
    VAR_35++;
   VAR_26[VAR_21] = ((VAR_17->trsw_gain_X[VAR_21]&0x3F)*2) - 110;



   VAR_23 = VAR_17->rxsnr_X[VAR_21];
   VAR_28 = (char)(VAR_23);
   VAR_28 /= 2;
   VAR_8->stats.rxSNRdB[VAR_21] = (long)VAR_28;


   VAR_32 = FUNC_4(VAR_26[VAR_21]);
   if (VAR_8->brfpath_rxenable[VAR_21])
    VAR_33 += VAR_32;


   if(VAR_13)
   {
    VAR_9->RxMIMOSignalStrength[VAR_21] =(u8) VAR_32;
    VAR_12->RxMIMOSignalStrength[VAR_21] =(u8) VAR_32;
   }
  }







  VAR_27 = (((VAR_17->pwdb_all ) >> 1 )& 0x7f) -106;
  VAR_31 = FUNC_4(VAR_27);

  VAR_9->RxPWDBAll = VAR_12->RxPWDBAll = VAR_31;
  VAR_9->RxPower = VAR_12->RxPower = VAR_27;
  VAR_9->RecvSignalPower = VAR_27;



  if(VAR_11->RxHT && VAR_11->RxRate>=VAR_1 &&
   VAR_11->RxRate<=VAR_0)
   VAR_22 = 2;
  else
   VAR_22 = 1;

  for(VAR_21=0; VAR_21<VAR_22; VAR_21++)
  {
   VAR_24 = VAR_17->rxevm_X[VAR_21];
   VAR_29 = (char)(VAR_24);




   VAR_29 /= 2;

   VAR_30 = FUNC_3(VAR_29);



   if(VAR_13)
   {
    if(VAR_21==0)
     VAR_9->SignalQuality = VAR_12->SignalQuality = (u8)(VAR_30 & 0xff);
    VAR_9->RxMIMOSignalQuality[VAR_21] = VAR_12->RxMIMOSignalQuality[VAR_21] = (u8)(VAR_30 & 0xff);
   }
  }



  VAR_25 = VAR_17->rxsc_sgien_exflg;
  VAR_19 = (phy_ofdm_rx_status_rxsc_sgien_exintfflag *)&VAR_25;
  if(VAR_11->BW)
   VAR_8->stats.received_bwtype[1+VAR_19->rxsc]++;
  else
   VAR_8->stats.received_bwtype[0]++;
 }



 if(VAR_34)
 {
  VAR_9->SignalStrength = VAR_12->SignalStrength = (u8)(FUNC_5((long)VAR_31));

 }
 else
 {


  if (VAR_35 != 0)
   VAR_9->SignalStrength = VAR_12->SignalStrength = (u8)(FUNC_5((long)(VAR_33/=VAR_35)));
 }
}
