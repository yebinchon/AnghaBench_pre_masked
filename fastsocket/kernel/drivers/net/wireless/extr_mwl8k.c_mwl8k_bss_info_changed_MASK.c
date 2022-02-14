
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_bss_conf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3,
         struct ieee80211_bss_conf *VAR_4, u32 VAR_5)
{
 if (VAR_3->type == VAR_1)
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_3->type == VAR_0)
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
