
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int free_pool_lock; int free_cmd_pool; } ;
struct pmcraid_cmd {int free_list; struct pmcraid_instance* drv_inst; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct pmcraid_cmd *VAR_0)
{
 struct pmcraid_instance *VAR_1 = VAR_0->drv_inst;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->free_pool_lock, VAR_2);
 FUNC_0(&VAR_0->free_list, &VAR_1->free_cmd_pool);
 FUNC_2(&VAR_1->free_pool_lock, VAR_2);
}
