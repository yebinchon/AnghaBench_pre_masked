
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_intf {int beacon_skb_mutex; int beacon; } ;
struct rt2x00_dev {TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {int (* clear_beacon ) (int ) ;} ;
struct TYPE_3__ {TYPE_2__* lib; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 struct rt2x00_intf* FUNC_5 (struct ieee80211_vif*) ;

int FUNC_6(struct rt2x00_dev *VAR_1,
        struct ieee80211_vif *VAR_2)
{
 struct rt2x00_intf *VAR_3 = FUNC_5(VAR_2);

 if (FUNC_4(!VAR_3->beacon))
  return -VAR_0;

 FUNC_0(&VAR_3->beacon_skb_mutex);




 FUNC_2(VAR_3->beacon);





 if (VAR_1->ops->lib->clear_beacon)
  VAR_1->ops->lib->clear_beacon(VAR_3->beacon);

 FUNC_1(&VAR_3->beacon_skb_mutex);

 return 0;
}
