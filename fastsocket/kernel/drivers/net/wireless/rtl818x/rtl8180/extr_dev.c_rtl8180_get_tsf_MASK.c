
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int * TSFT; } ;


 int FUNC_0 (struct rtl8180_priv*,int *) ;

__attribute__((used)) static u64 FUNC_1(struct ieee80211_hw *VAR_0,
      struct ieee80211_vif *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_0->priv;

 return FUNC_0(VAR_2, &VAR_2->map->TSFT[0]) |
        (u64)(FUNC_0(VAR_2, &VAR_2->map->TSFT[1])) << 32;
}
