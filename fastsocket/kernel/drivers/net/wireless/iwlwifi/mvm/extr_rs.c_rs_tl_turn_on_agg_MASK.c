
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_lq_sta*,scalar_t__,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_1, u8 VAR_2,
         struct iwl_lq_sta *VAR_3,
         struct ieee80211_sta *VAR_4)
{
 if (VAR_2 < VAR_0)
  FUNC_1(VAR_1, VAR_3, VAR_2, VAR_4);
 else
  FUNC_0(VAR_1, "tid exceeds max TID count: %d/%d\n",
   VAR_2, VAR_0);
}
