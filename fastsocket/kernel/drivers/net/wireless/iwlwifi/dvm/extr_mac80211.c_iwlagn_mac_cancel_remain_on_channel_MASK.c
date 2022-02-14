
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int valid_contexts; int mutex; int hw_roc_duration; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int FUNC_3 (struct iwl_priv*,int ) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_2)
{
 struct iwl_priv *VAR_3 = FUNC_2(VAR_2);

 if (!(VAR_3->valid_contexts & FUNC_0(VAR_1)))
  return -VAR_0;

 FUNC_1(VAR_3, "enter\n");
 FUNC_5(&VAR_3->mutex);
 FUNC_3(VAR_3, VAR_3->hw_roc_duration);
 FUNC_4(VAR_3);
 FUNC_6(&VAR_3->mutex);
 FUNC_1(VAR_3, "leave\n");

 return 0;
}
