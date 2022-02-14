
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct r8192_priv {int bDynamicTxHighPower; int Pwr_Track; int rf_type; scalar_t__ TSSI_13dBm; int rfa_txpowertrackingindex; int rfa_txpowertrackingindex_real; int rfc_txpowertrackingindex; int rfc_txpowertrackingindex_real; int cck_present_attentuation_difference; int cck_present_attentuation; int rfa_txpowertracking_default; scalar_t__ CurrentChannelBW; int cck_present_attentuation_20Mdefault; int cck_present_attentuation_40Mdefault; int bcck_in_ch14; TYPE_3__* ieee80211; TYPE_1__* txbbgain_table; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int Length; scalar_t__ Value; int Op; } ;
struct TYPE_7__ {int channel; } ;
struct TYPE_8__ {int bdynamic_txpower_enable; TYPE_2__ current_network; } ;
struct TYPE_6__ {int txbbgain_value; } ;
typedef TYPE_4__ DCMD_TXCMD_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct net_device*,TYPE_4__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct net_device*,int*,int ,int) ;
 int FUNC_3 (struct net_device*,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct net_device*,int) ;
 scalar_t__ FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int ,int ,int ) ;
 int FUNC_9 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_10(struct net_device * VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_4(VAR_10);
 bool VAR_12, VAR_13 = VAR_3;
 DCMD_TXCMD_T VAR_14;
 u8 VAR_15;
 int VAR_16 =0, VAR_17 = 0, VAR_18 = 0;
 u8 VAR_19, VAR_20[5]={0, 0, 0, 0, 0};
 u32 VAR_21;
 u8 VAR_22;
 u16 VAR_23, VAR_24, VAR_25=0;




 u32 VAR_26=0;

 FUNC_9(VAR_10, 0x1ba, 0);

 VAR_11->ieee80211->bdynamic_txpower_enable = 0;
 VAR_12 = VAR_11->bDynamicTxHighPower;

 VAR_15 = (u8)(VAR_11->Pwr_Track>>24);
 VAR_19 = VAR_11->rf_type;
 VAR_21 = (VAR_19<<8) | VAR_15;

 FUNC_0(VAR_0, "powerlevelOFDM24G = %x\n", VAR_15);

 for(VAR_17 = 0; VAR_17<=30; VAR_17++)
{

 VAR_14.Op = VAR_6;
 VAR_14.Length = 4;
 VAR_14.Value = VAR_21;







 FUNC_2(VAR_10, (u8*)&VAR_14,
        VAR_1, sizeof(DCMD_TXCMD_T));

 FUNC_5(1);

 for(VAR_16 = 0;VAR_16 <= 30; VAR_16++)
 {
  VAR_22 = FUNC_6(VAR_10, 0x1ba);

  if (VAR_22 == 0)
  {
   FUNC_5(1);
   continue;
  }



  VAR_23 = FUNC_7(VAR_10, 0x13c);

  if(VAR_23 == 0)
  {
   FUNC_9(VAR_10, 0x1ba, 0);
   break;
  }

  for(VAR_18 = 0;VAR_18 < 5; VAR_18++)
  {



   if(VAR_18 !=4)
    VAR_20[VAR_18] = FUNC_6(VAR_10, 0x134+VAR_18);
   else
    VAR_20[VAR_18] = FUNC_6(VAR_10, 0x13e);

   FUNC_0(VAR_0, "TSSI_report_value = %d\n", VAR_20[VAR_18]);
  }


  for(VAR_18 = 0;VAR_18 < 5; VAR_18++)
  {
   if(VAR_20[VAR_18] <= 20)
   {
    VAR_13 =VAR_5;
    break;
   }
  }
  if(VAR_13 ==VAR_5)
  {
   FUNC_9(VAR_10, 0x1ba, 0);
   VAR_13 = VAR_3;
   FUNC_0(VAR_0, "we filted this data\n");
   for(VAR_18 = 0;VAR_18 < 5; VAR_18++)
    VAR_20[VAR_18] = 0;
   break;
  }

  for(VAR_18 = 0;VAR_18 < 5; VAR_18++)
  {
   VAR_25 += VAR_20[VAR_18];
  }

  VAR_25 = VAR_25*100/5;
  FUNC_0(VAR_0, "Avg_TSSI_Meas_from_driver = %d\n", VAR_25);
  VAR_24 = VAR_11->TSSI_13dBm;
  FUNC_0(VAR_0, "TSSI_13dBm = %d\n", VAR_24);



  if(VAR_25 > VAR_24)
   VAR_26 = VAR_25 - VAR_24;
  else
   VAR_26 = VAR_24 - VAR_25;

  if(VAR_26 <= VAR_2)
  {
   VAR_11->ieee80211->bdynamic_txpower_enable = VAR_5;
   FUNC_9(VAR_10, 0x1ba, 0);
   FUNC_0(VAR_0, "tx power track is done\n");
   FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex = %d\n", VAR_11->rfa_txpowertrackingindex);
   FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex_real = %d\n", VAR_11->rfa_txpowertrackingindex_real);




   FUNC_0(VAR_0, "priv->cck_present_attentuation_difference = %d\n", VAR_11->cck_present_attentuation_difference);
   FUNC_0(VAR_0, "priv->cck_present_attentuation = %d\n", VAR_11->cck_present_attentuation);
   return;
  }
  else
  {
   if(VAR_25 < VAR_24 - VAR_2)
   {
    if((VAR_11->rfa_txpowertrackingindex > 0)



    )
    {
     VAR_11->rfa_txpowertrackingindex--;
     if(VAR_11->rfa_txpowertrackingindex_real > 4)
     {
      VAR_11->rfa_txpowertrackingindex_real--;
      FUNC_8(VAR_10, VAR_8, VAR_7, VAR_11->txbbgain_table[VAR_11->rfa_txpowertrackingindex_real].txbbgain_value);
     }
    }
   }
   else
   {
    if((VAR_11->rfa_txpowertrackingindex < 36)



     )
    {
     VAR_11->rfa_txpowertrackingindex++;
     VAR_11->rfa_txpowertrackingindex_real++;
     FUNC_8(VAR_10, VAR_8, VAR_7, VAR_11->txbbgain_table[VAR_11->rfa_txpowertrackingindex_real].txbbgain_value);






    }
   }
   VAR_11->cck_present_attentuation_difference
    = VAR_11->rfa_txpowertrackingindex - VAR_11->rfa_txpowertracking_default;

   if(VAR_11->CurrentChannelBW == VAR_4)
    VAR_11->cck_present_attentuation
    = VAR_11->cck_present_attentuation_20Mdefault + VAR_11->cck_present_attentuation_difference;
   else
    VAR_11->cck_present_attentuation
    = VAR_11->cck_present_attentuation_40Mdefault + VAR_11->cck_present_attentuation_difference;

   if(VAR_11->cck_present_attentuation > -1&&VAR_11->cck_present_attentuation <23)
   {
    if(VAR_11->ieee80211->current_network.channel == 14 && !VAR_11->bcck_in_ch14)
    {
     VAR_11->bcck_in_ch14 = VAR_5;
     FUNC_3(VAR_10,VAR_11->bcck_in_ch14);
    }
    else if(VAR_11->ieee80211->current_network.channel != 14 && VAR_11->bcck_in_ch14)
    {
     VAR_11->bcck_in_ch14 = VAR_3;
     FUNC_3(VAR_10,VAR_11->bcck_in_ch14);
    }
    else
     FUNC_3(VAR_10,VAR_11->bcck_in_ch14);
   }
  FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex = %d\n", VAR_11->rfa_txpowertrackingindex);
  FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex_real = %d\n", VAR_11->rfa_txpowertrackingindex_real);




  FUNC_0(VAR_0, "priv->cck_present_attentuation_difference = %d\n", VAR_11->cck_present_attentuation_difference);
  FUNC_0(VAR_0, "priv->cck_present_attentuation = %d\n", VAR_11->cck_present_attentuation);

  if (VAR_11->cck_present_attentuation_difference <= -12||VAR_11->cck_present_attentuation_difference >= 24)
  {
   VAR_11->ieee80211->bdynamic_txpower_enable = VAR_5;
   FUNC_9(VAR_10, 0x1ba, 0);
   FUNC_0(VAR_0, "tx power track--->limited\n");
   return;
  }


 }
  FUNC_9(VAR_10, 0x1ba, 0);
  VAR_25 = 0;
  for(VAR_18 = 0;VAR_18 < 5; VAR_18++)
   VAR_20[VAR_18] = 0;
  break;
 }
}
  VAR_11->ieee80211->bdynamic_txpower_enable = VAR_5;
  FUNC_9(VAR_10, 0x1ba, 0);
}
