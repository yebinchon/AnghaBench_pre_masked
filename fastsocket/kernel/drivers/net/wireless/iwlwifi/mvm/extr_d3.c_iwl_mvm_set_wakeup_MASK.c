
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* trans; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct ieee80211_hw *VAR_0, bool VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->trans->dev, VAR_1);
}
