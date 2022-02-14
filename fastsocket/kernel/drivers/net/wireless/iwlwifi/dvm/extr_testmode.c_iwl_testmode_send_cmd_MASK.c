
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int dummy; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_host_cmd {int dummy; } ;


 struct iwl_priv* FUNC_0 (struct iwl_op_mode*) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_2(struct iwl_op_mode *VAR_0,
     struct iwl_host_cmd *VAR_1)
{
 struct iwl_priv *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, VAR_1);
}
