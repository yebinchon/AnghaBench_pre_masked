
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_intf {int enable_beacon; int beacon_skb_mutex; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct rt2x00_dev {int intf_beaconing; int flags; int intf_associated; TYPE_1__ link; int bcn; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct ieee80211_bss_conf {int qos; scalar_t__ assoc; scalar_t__ enable_beacon; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,struct rt2x00_intf*,struct ieee80211_bss_conf*,int) ;
 int FUNC_6 (struct rt2x00_dev*,struct rt2x00_intf*,int ,int *,int ) ;
 int FUNC_7 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 struct rt2x00_intf* FUNC_13 (struct ieee80211_vif*) ;

void FUNC_14(struct ieee80211_hw *VAR_13,
    struct ieee80211_vif *VAR_14,
    struct ieee80211_bss_conf *VAR_15,
    u32 VAR_16)
{
 struct rt2x00_dev *VAR_17 = VAR_13->priv;
 struct rt2x00_intf *VAR_18 = FUNC_13(VAR_14);





 if (!FUNC_12(VAR_12, &VAR_17->flags))
  return;




 if (VAR_16 & VAR_5)
  FUNC_6(VAR_17, VAR_18, VAR_14->type, ((void*)0),
          VAR_15->bssid);





 if (VAR_16 & VAR_2 && FUNC_3(VAR_17))
  FUNC_10(VAR_17, VAR_14);




 if (VAR_16 & VAR_3) {
  if (!VAR_15->enable_beacon && VAR_18->enable_beacon) {
   FUNC_7(VAR_17, VAR_14);
   VAR_17->intf_beaconing--;
   VAR_18->enable_beacon = 0;

   if (VAR_17->intf_beaconing == 0) {




    FUNC_1(&VAR_18->beacon_skb_mutex);
    FUNC_9(VAR_17->bcn);
    FUNC_2(&VAR_18->beacon_skb_mutex);
   }


  } else if (VAR_15->enable_beacon && !VAR_18->enable_beacon) {
   VAR_17->intf_beaconing++;
   VAR_18->enable_beacon = 1;

   if (VAR_17->intf_beaconing == 1) {




    FUNC_1(&VAR_18->beacon_skb_mutex);
    FUNC_8(VAR_17->bcn);
    FUNC_2(&VAR_18->beacon_skb_mutex);
   }
  }
 }







 if (VAR_16 & VAR_0) {
  VAR_17->link.count = 0;

  if (VAR_15->assoc)
   VAR_17->intf_associated++;
  else
   VAR_17->intf_associated--;

  FUNC_4(VAR_17, !!VAR_17->intf_associated);

  FUNC_0(VAR_11, &VAR_17->flags);
 }






 if (VAR_16 & VAR_10 && !VAR_15->qos)
  FUNC_11(VAR_11, &VAR_17->flags);





 if (VAR_16 & (VAR_6 | VAR_7 |
         VAR_8 | VAR_1 |
         VAR_4 | VAR_9))
  FUNC_5(VAR_17, VAR_18, VAR_15, VAR_16);
}
