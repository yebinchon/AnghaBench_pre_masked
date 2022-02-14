
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int FUNC_0 (struct p54_common*,int ) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         struct ieee80211_sta *VAR_2)
{
 struct p54_common *VAR_3 = VAR_0->priv;






 FUNC_0(VAR_3, VAR_2->addr);

 return 0;
}
