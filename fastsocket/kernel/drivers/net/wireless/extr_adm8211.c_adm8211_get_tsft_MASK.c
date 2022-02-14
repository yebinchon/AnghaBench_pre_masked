
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u64 FUNC_1(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 struct adm8211_priv *VAR_4 = VAR_2->priv;
 u32 VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = FUNC_0(VAR_0);
 VAR_6 <<= 32;
 VAR_6 |= VAR_5;

 return VAR_6;
}
