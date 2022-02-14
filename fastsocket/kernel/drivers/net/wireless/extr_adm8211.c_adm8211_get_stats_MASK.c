
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_low_level_stats {int dummy; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int stats; } ;


 int FUNC_0 (struct ieee80211_low_level_stats*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0,
        struct ieee80211_low_level_stats *VAR_1)
{
 struct adm8211_priv *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_1, &VAR_2->stats, sizeof(*VAR_1));

 return 0;
}
