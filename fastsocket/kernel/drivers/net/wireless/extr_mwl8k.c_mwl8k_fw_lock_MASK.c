
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {scalar_t__ fw_mutex_owner; int fw_mutex_depth; int fw_mutex; int hw_restart_in_progress; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct mwl8k_priv *VAR_2 = VAR_1->priv;

 if (VAR_2->fw_mutex_owner != VAR_0) {
  int VAR_3;

  FUNC_2(&VAR_2->fw_mutex);
  FUNC_0(VAR_1);

  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3) {
   if (!VAR_2->hw_restart_in_progress)
    FUNC_1(VAR_1);

   FUNC_3(&VAR_2->fw_mutex);

   return VAR_3;
  }

  VAR_2->fw_mutex_owner = VAR_0;
 }

 VAR_2->fw_mutex_depth++;

 return 0;
}
