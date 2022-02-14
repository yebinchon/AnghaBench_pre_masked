
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {size_t sta_id; } ;
struct iwl_mvm {int * pending_frames; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 size_t VAR_0 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_sta*,int) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2,
       enum sta_notify_cmd VAR_3,
       struct ieee80211_sta *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_1);
 struct iwl_mvm_sta *VAR_6 = (void *)VAR_4->drv_priv;

 switch (VAR_3) {
 case 128:
  if (FUNC_2(&VAR_5->pending_frames[VAR_6->sta_id]) > 0)
   FUNC_3(VAR_1, VAR_4, 1);





  break;
 case 129:
  if (FUNC_1(VAR_6->sta_id == VAR_0))
   break;
  FUNC_4(VAR_5, VAR_4);
  break;
 default:
  break;
 }
}
