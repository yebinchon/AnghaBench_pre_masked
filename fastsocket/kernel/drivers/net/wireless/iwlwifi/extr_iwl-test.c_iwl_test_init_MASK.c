
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;
struct iwl_test_ops {int dummy; } ;
struct iwl_test {struct iwl_test_ops* ops; struct iwl_trans* trans; } ;


 int FUNC_0 (struct iwl_test*) ;
 int FUNC_1 (struct iwl_test*) ;

void FUNC_2(struct iwl_test *VAR_0, struct iwl_trans *VAR_1,
     struct iwl_test_ops *VAR_2)
{
 VAR_0->trans = VAR_1;
 VAR_0->ops = VAR_2;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
