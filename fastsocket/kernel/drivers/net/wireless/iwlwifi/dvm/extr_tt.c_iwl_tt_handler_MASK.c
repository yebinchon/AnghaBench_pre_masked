
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int tt_work; int workqueue; int status; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct iwl_priv *VAR_1)
{
 if (FUNC_2(VAR_0, &VAR_1->status))
  return;

 FUNC_0(VAR_1, "Queueing thermal throttling work.\n");
 FUNC_1(VAR_1->workqueue, &VAR_1->tt_work);
}
