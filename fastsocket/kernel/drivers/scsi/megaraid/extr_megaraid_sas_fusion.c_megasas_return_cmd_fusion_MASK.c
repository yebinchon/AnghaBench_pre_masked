
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct megasas_instance {scalar_t__ ctrl_context; } ;
struct megasas_cmd_fusion {int list; scalar_t__ sync_cmd_idx; int * scmd; } ;
struct fusion_context {int cmd_pool_lock; int cmd_pool; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct megasas_instance *VAR_1,
     struct megasas_cmd_fusion *VAR_2)
{
 unsigned long VAR_3;
 struct fusion_context *VAR_4 =
  (struct fusion_context *)VAR_1->ctrl_context;

 FUNC_1(&VAR_4->cmd_pool_lock, VAR_3);

 VAR_2->scmd = ((void*)0);
 VAR_2->sync_cmd_idx = (u32)VAR_0;
 FUNC_0(&VAR_2->list, &VAR_4->cmd_pool);

 FUNC_2(&VAR_4->cmd_pool_lock, VAR_3);
}
