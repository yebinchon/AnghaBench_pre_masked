
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int basic_rate; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int beacon_interval; scalar_t__ bssid; } ;
struct TYPE_2__ {scalar_t__ iw_mode; struct ieee80211_network current_network; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ) ;
 int FUNC_5 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_10)
{

 struct r8192_priv *VAR_11 = FUNC_0(VAR_10);
 struct ieee80211_network *VAR_12;
 u16 VAR_13 = 0, VAR_14 = 6, VAR_15 = 0xf;
 u16 VAR_16 = 0;
 VAR_12 = &VAR_11->ieee80211->current_network;

 FUNC_1(VAR_10, &VAR_16);




  VAR_11->basic_rate = VAR_16 &= 0x15f;

 FUNC_4(VAR_10,VAR_8,((u32*)VAR_12->bssid)[0]);
 FUNC_5(VAR_10,VAR_8+4,((u16*)VAR_12->bssid)[2]);







 if (VAR_11->ieee80211->iw_mode == VAR_9)
 {
  FUNC_5(VAR_10, VAR_0, 2);
  FUNC_5(VAR_10, VAR_1, 256);
  FUNC_5(VAR_10, VAR_4, VAR_12->beacon_interval);


  FUNC_5(VAR_10, VAR_2, 10);
  FUNC_3(VAR_10, VAR_3, 100);

  VAR_13 |= (VAR_14<<VAR_6);

   VAR_13 |= VAR_15<<VAR_7;

  FUNC_5(VAR_10, VAR_5, VAR_13);
 }


}
