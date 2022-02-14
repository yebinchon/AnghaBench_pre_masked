
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_mvm {int status; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ hw_queue; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3,
      struct ieee80211_tx_control *VAR_4,
      struct sk_buff *VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_2(VAR_3);

 if (FUNC_6(VAR_1, &VAR_6->status)) {
  FUNC_1(VAR_6, "Dropping - RF KILL\n");
  goto drop;
 }

 if (FUNC_0(VAR_5)->hw_queue == VAR_0 &&
     !FUNC_6(VAR_2, &VAR_6->status))
  goto drop;

 if (VAR_4->sta) {
  if (FUNC_4(VAR_6, VAR_5, VAR_4->sta))
   goto drop;
  return;
 }

 if (FUNC_5(VAR_6, VAR_5))
  goto drop;
 return;
 drop:
 FUNC_3(VAR_3, VAR_5);
}
