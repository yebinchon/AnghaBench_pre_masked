
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {int mutex; } ;
struct TYPE_2__ {int assoc; scalar_t__ beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2,
          struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_3(VAR_0,
      200 + VAR_3->bss_conf.beacon_int);
 u32 VAR_6 = FUNC_3(VAR_1,
          100 + VAR_3->bss_conf.beacon_int);

 if (FUNC_1(VAR_3->bss_conf.assoc))
  return;

 FUNC_4(&VAR_4->mutex);

 FUNC_2(VAR_4, VAR_3, VAR_5, VAR_6);
 FUNC_5(&VAR_4->mutex);
}
