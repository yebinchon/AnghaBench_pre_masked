
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int hw; int trans; int beacon_skb; int * workqueue; int nvm_data; int eeprom_blob; } ;
struct iwl_op_mode {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct iwl_op_mode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_priv*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct iwl_priv*) ;
 int FUNC_10 (struct iwl_priv*) ;
 int FUNC_11 (struct iwl_priv*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct iwl_op_mode *VAR_0)
{
 struct iwl_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "*** UNLOAD DRIVER ***\n");

 FUNC_7(VAR_1);
 FUNC_11(VAR_1);

 FUNC_9(VAR_1);

 FUNC_12(VAR_1->eeprom_blob);
 FUNC_6(VAR_1->nvm_data);


 FUNC_4(VAR_1->workqueue);




 FUNC_2(VAR_1->workqueue);
 VAR_1->workqueue = ((void*)0);

 FUNC_10(VAR_1);

 FUNC_3(VAR_1->beacon_skb);

 FUNC_8(VAR_1->trans, 1);
 FUNC_5(VAR_1->hw);
}
