
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int mode; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2)
{
 struct adm8211_priv *VAR_3 = VAR_1->priv;
 VAR_3->mode = VAR_0;
}
