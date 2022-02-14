
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_intf {int beacon_skb_mutex; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 struct rt2x00_intf* FUNC_3 (struct ieee80211_vif*) ;

int FUNC_4(struct rt2x00_dev *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct rt2x00_intf *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_2->beacon_skb_mutex);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_2->beacon_skb_mutex);

 return VAR_3;
}
