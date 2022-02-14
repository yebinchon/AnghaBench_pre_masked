
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_sta {int wcid; } ;
struct rt2x00_dev {TYPE_2__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {scalar_t__ (* sta_add ) (struct rt2x00_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;} ;


 struct rt2x00_sta* FUNC_0 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;

int FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
        struct ieee80211_sta *VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_0->priv;
 struct rt2x00_sta *VAR_4 = FUNC_0(VAR_2);





 if (VAR_3->ops->lib->sta_add(VAR_3, VAR_1, VAR_2))
  VAR_4->wcid = -1;

 return 0;
}
