
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int low_level_stats; } ;
struct ieee80211_low_level_stats {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int FUNC_0 (struct ieee80211_low_level_stats*,int *,int) ;

int FUNC_1(struct ieee80211_hw *VAR_0,
   struct ieee80211_low_level_stats *VAR_1)
{
 struct rt2x00_dev *VAR_2 = VAR_0->priv;






 FUNC_0(VAR_1, &VAR_2->low_level_stats, sizeof(*VAR_1));

 return 0;
}
