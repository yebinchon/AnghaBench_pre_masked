
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {scalar_t__ scan_status; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_scan_request {scalar_t__ n_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct cfg80211_scan_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4,
          struct ieee80211_vif *VAR_5,
          struct cfg80211_scan_request *VAR_6)
{
 struct iwl_mvm *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (VAR_6->n_channels == 0 || VAR_6->n_channels > VAR_3)
  return -VAR_1;

 FUNC_2(&VAR_7->mutex);

 if (VAR_7->scan_status == VAR_2)
  VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);
 else
  VAR_8 = -VAR_0;

 FUNC_3(&VAR_7->mutex);

 return VAR_8;
}
