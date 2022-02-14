
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workers {int max_workers; int idle_thresh; char* name; struct btrfs_workers* atomic_worker_start; scalar_t__ atomic_start_pending; scalar_t__ ordered; int order_lock; int lock; int prio_order_list; int order_list; int idle_list; int worker_list; scalar_t__ num_workers_starting; scalar_t__ num_workers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_workers *VAR_0, char *VAR_1, int VAR_2,
   struct btrfs_workers *VAR_3)
{
 VAR_0->num_workers = 0;
 VAR_0->num_workers_starting = 0;
 FUNC_0(&VAR_0->worker_list);
 FUNC_0(&VAR_0->idle_list);
 FUNC_0(&VAR_0->order_list);
 FUNC_0(&VAR_0->prio_order_list);
 FUNC_1(&VAR_0->lock);
 FUNC_1(&VAR_0->order_lock);
 VAR_0->max_workers = VAR_2;
 VAR_0->idle_thresh = 32;
 VAR_0->name = VAR_1;
 VAR_0->ordered = 0;
 VAR_0->atomic_start_pending = 0;
 VAR_0->atomic_worker_start = VAR_3;
}
