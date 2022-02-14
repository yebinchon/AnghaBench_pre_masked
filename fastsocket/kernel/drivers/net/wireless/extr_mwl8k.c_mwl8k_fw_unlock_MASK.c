
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int fw_mutex; int * fw_mutex_owner; int hw_restart_in_progress; int fw_mutex_depth; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct mwl8k_priv *VAR_1 = VAR_0->priv;

 if (!--VAR_1->fw_mutex_depth) {
  if (!VAR_1->hw_restart_in_progress)
   FUNC_0(VAR_0);

  VAR_1->fw_mutex_owner = ((void*)0);
  FUNC_1(&VAR_1->fw_mutex);
 }
}
