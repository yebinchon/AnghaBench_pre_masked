
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int trans; int workqueue; int mutex; scalar_t__ is_open; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_0)
{
 struct iwl_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "enter\n");

 if (!VAR_1->is_open)
  return;

 VAR_1->is_open = 0;

 FUNC_6(&VAR_1->mutex);
 FUNC_4(VAR_1);
 FUNC_7(&VAR_1->mutex);

 FUNC_3(VAR_1);

 FUNC_2(VAR_1->workqueue);





 FUNC_5(VAR_1->trans, 0);

 FUNC_0(VAR_1, "leave\n");
}
