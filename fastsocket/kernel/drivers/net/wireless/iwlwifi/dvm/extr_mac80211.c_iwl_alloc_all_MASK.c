
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {struct ieee80211_hw* hw; } ;
struct iwl_op_mode {int dummy; } ;
struct ieee80211_hw {struct iwl_op_mode* priv; } ;


 struct iwl_priv* FUNC_0 (struct iwl_op_mode*) ;
 struct ieee80211_hw* FUNC_1 (int,int *) ;
 int VAR_0 ;

struct ieee80211_hw *FUNC_2(void)
{
 struct iwl_priv *VAR_1;
 struct iwl_op_mode *VAR_2;


 struct ieee80211_hw *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct iwl_priv) +
    sizeof(struct iwl_op_mode), &VAR_0);
 if (!VAR_3)
  goto out;

 VAR_2 = VAR_3->priv;
 VAR_1 = FUNC_0(VAR_2);
 VAR_1->hw = VAR_3;

out:
 return VAR_3;
}
