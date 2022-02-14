
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int short_preamble; int basic_rate; int nCur40MhzPrimeSC; int irq_mask; int ShortRetryLimit; int LongRetryLimit; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int capability; int beacon_interval; scalar_t__ bssid; } ;
struct ieee80211_device {scalar_t__ iw_mode; struct ieee80211_network current_network; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;
 int FUNC_5 (struct net_device*,scalar_t__,int) ;
 int FUNC_6 (struct net_device*,scalar_t__,int) ;

void FUNC_7(struct net_device *VAR_12)
{

 struct r8192_priv *VAR_13 = FUNC_1(VAR_12);
 struct ieee80211_device* VAR_14 = VAR_13->ieee80211;
 struct ieee80211_network *VAR_15 = &VAR_13->ieee80211->current_network;

 u16 VAR_16 = 0;
 u32 VAR_17 = 0;
 u8 VAR_18 = 0;
 u8 VAR_19 = 0x30;
 u16 VAR_20 = VAR_15->capability;

 VAR_13->short_preamble = VAR_20 & VAR_11;



 FUNC_2(VAR_12, &VAR_16);

 VAR_13->basic_rate = VAR_16 = VAR_16 & 0x15f;


 FUNC_4(VAR_12, VAR_10, VAR_16&0xff);
 FUNC_4(VAR_12, VAR_10+1, (VAR_16>>8)&0xff);


 while(VAR_16 > 0x1)
 {
  VAR_16 = (VAR_16>> 1);
  VAR_18++;
 }
 FUNC_4(VAR_12, VAR_5, VAR_18);



 VAR_17 = (VAR_13->nCur40MhzPrimeSC) << 5;
 if (VAR_13->short_preamble)
  VAR_17 |= 0x80;
 FUNC_4(VAR_12, VAR_10+2, VAR_17);

 FUNC_5(VAR_12,VAR_1,((u32*)VAR_15->bssid)[0]);
 FUNC_6(VAR_12,VAR_1+4,((u16*)VAR_15->bssid)[2]);

 FUNC_6(VAR_12, VAR_0, VAR_15->beacon_interval);

 FUNC_0( VAR_12, VAR_15->beacon_interval);

 FUNC_3(VAR_12, VAR_20);

 if (VAR_14->iw_mode == VAR_6){
  VAR_19 = 7;

  if (0){
   VAR_13->irq_mask |= (VAR_2 | VAR_2 | VAR_4 | VAR_3);


  }
 }
 else{
  if (0){
   VAR_13->irq_mask &= ~(VAR_2 | VAR_2 | VAR_4 | VAR_3);


  }
 }

 VAR_13->ShortRetryLimit = VAR_13->LongRetryLimit = VAR_19;

 FUNC_6(VAR_12, VAR_7,
    VAR_19 << VAR_9 | VAR_19 << VAR_8);

}
