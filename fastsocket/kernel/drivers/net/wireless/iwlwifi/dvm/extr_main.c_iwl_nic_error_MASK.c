
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {TYPE_1__* fw; } ;
struct iwl_op_mode {int dummy; } ;
struct TYPE_2__ {int fw_version; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 struct iwl_priv* FUNC_1 (struct iwl_op_mode*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*,int,int *) ;
 int FUNC_4 (struct iwl_priv*,int) ;

__attribute__((used)) static void FUNC_5(struct iwl_op_mode *VAR_0)
{
 struct iwl_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "Loaded firmware version: %s\n",
  VAR_1->fw->fw_version);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1, 0, ((void*)0));

 FUNC_4(VAR_1, 0);
}
