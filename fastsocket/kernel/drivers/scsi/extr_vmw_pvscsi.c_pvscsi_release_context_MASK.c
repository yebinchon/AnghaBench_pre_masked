
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_ctx {int list; int * abort_cmp; int * cmd; } ;
struct pvscsi_adapter {int cmd_pool; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct pvscsi_adapter *VAR_0,
       struct pvscsi_ctx *VAR_1)
{
 VAR_1->cmd = ((void*)0);
 VAR_1->abort_cmp = ((void*)0);
 FUNC_0(&VAR_1->list, &VAR_0->cmd_pool);
}
