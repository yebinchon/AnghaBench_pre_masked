
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_cmd_pkt {int macid; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int macid; } ;


 TYPE_1__* FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_hw*,struct mwl8k_cmd_pkt*) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
     struct ieee80211_vif *VAR_1,
     struct mwl8k_cmd_pkt *VAR_2)
{
 if (VAR_1 != ((void*)0))
  VAR_2->macid = FUNC_0(VAR_1)->macid;
 return FUNC_1(VAR_0, VAR_2);
}
