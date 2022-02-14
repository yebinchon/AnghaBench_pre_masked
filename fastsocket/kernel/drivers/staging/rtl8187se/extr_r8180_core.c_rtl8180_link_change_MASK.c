
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct r8180_priv {int chan; scalar_t__ card_8185; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int beacon_interval; scalar_t__ bssid; } ;
struct TYPE_2__ {struct ieee80211_network current_network; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,scalar_t__,int ) ;
 int FUNC_6 (struct net_device*,scalar_t__,int ) ;

void FUNC_7(struct net_device *VAR_5)
{
 struct r8180_priv *VAR_6 = FUNC_0(VAR_5);
 u16 VAR_7;
 struct ieee80211_network *VAR_8 = &VAR_6->ieee80211->current_network;

 FUNC_4(VAR_5);

 FUNC_3(VAR_5,VAR_3);

 FUNC_5(VAR_5,VAR_2,((u32*)VAR_8->bssid)[0]);
 FUNC_6(VAR_5,VAR_2+4,((u16*)VAR_8->bssid)[2]);

 VAR_7 = FUNC_1(VAR_5,VAR_0);
 VAR_7 &= ~ VAR_1;
 VAR_7 |= VAR_8->beacon_interval;
 FUNC_5(VAR_5, VAR_0, VAR_7);

 FUNC_3(VAR_5, VAR_4);

 if(VAR_6->card_8185)
  FUNC_2(VAR_5, VAR_6->chan);
}
