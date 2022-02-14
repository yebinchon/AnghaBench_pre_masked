
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_sta {scalar_t__ wcid; } ;
struct rt2x00_dev {TYPE_2__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* sta_remove ) (struct rt2x00_dev*,scalar_t__) ;} ;


 struct rt2x00_sta* FUNC_0 (struct ieee80211_sta*) ;
 int FUNC_1 (struct rt2x00_dev*,scalar_t__) ;

int FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
    struct ieee80211_sta *VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_0->priv;
 struct rt2x00_sta *VAR_4 = FUNC_0(VAR_2);




 if (VAR_4->wcid < 0)
  return 0;

 return VAR_3->ops->lib->sta_remove(VAR_3, VAR_4->wcid);
}
