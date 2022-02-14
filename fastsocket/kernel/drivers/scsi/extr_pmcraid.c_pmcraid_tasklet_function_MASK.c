
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_isr_param {int hrrq_id; struct pmcraid_instance* drv_inst; } ;
struct pmcraid_instance {int* host_toggle_bit; int ** hrrq_curr; TYPE_1__* host; int outstanding_cmds; int pending_pool_lock; struct pmcraid_cmd** cmd_list; int ** hrrq_start; int ** hrrq_end; int * hrrq_lock; } ;
struct pmcraid_cmd {int (* cmd_done ) (struct pmcraid_cmd*) ;int timer; int free_list; } ;
typedef int spinlock_t ;
typedef int __le32 ;
struct TYPE_2__ {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct pmcraid_cmd*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct pmcraid_cmd*) ;
 int FUNC_9 (struct pmcraid_cmd*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_2)
{
 struct pmcraid_isr_param *VAR_3;
 struct pmcraid_instance *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 spinlock_t *VAR_8;
 int VAR_9;
 __le32 VAR_10;

 VAR_3 = (struct pmcraid_isr_param *)VAR_2;
 VAR_4 = VAR_3->drv_inst;
 VAR_9 = VAR_3->hrrq_id;
 VAR_8 = &(VAR_4->hrrq_lock[VAR_9]);







 FUNC_6(VAR_8, VAR_5);

 VAR_10 = FUNC_2(*(VAR_4->hrrq_curr[VAR_9]));

 while ((VAR_10 & VAR_0) ==
  VAR_4->host_toggle_bit[VAR_9]) {

  int VAR_11 = VAR_10 >> 2;
  struct pmcraid_cmd *VAR_12 = ((void*)0);

  if (VAR_4->hrrq_curr[VAR_9] < VAR_4->hrrq_end[VAR_9]) {
   VAR_4->hrrq_curr[VAR_9]++;
  } else {
   VAR_4->hrrq_curr[VAR_9] = VAR_4->hrrq_start[VAR_9];
   VAR_4->host_toggle_bit[VAR_9] ^= 1u;
  }

  if (VAR_11 >= VAR_1) {

   FUNC_4("Invalid response handle %d\n", VAR_11);
   VAR_10 = FUNC_2(*(VAR_4->hrrq_curr[VAR_9]));
   continue;
  }

  VAR_12 = VAR_4->cmd_list[VAR_11];
  FUNC_7(VAR_8, VAR_5);

  FUNC_6(&VAR_4->pending_pool_lock,
       VAR_6);
  FUNC_3(&VAR_12->free_list);
  FUNC_7(&VAR_4->pending_pool_lock,
     VAR_6);
  FUNC_1(&VAR_12->timer);
  FUNC_0(&VAR_4->outstanding_cmds);

  if (VAR_12->cmd_done == FUNC_5) {
   FUNC_6(VAR_4->host->host_lock,
       VAR_7);
   VAR_12->cmd_done(VAR_12);
   FUNC_7(VAR_4->host->host_lock,
            VAR_7);
  } else if (VAR_12->cmd_done != ((void*)0)) {
   VAR_12->cmd_done(VAR_12);
  }

  FUNC_6(VAR_8, VAR_5);
  VAR_10 = FUNC_2(*(VAR_4->hrrq_curr[VAR_9]));
 }

 FUNC_7(VAR_8, VAR_5);
}
