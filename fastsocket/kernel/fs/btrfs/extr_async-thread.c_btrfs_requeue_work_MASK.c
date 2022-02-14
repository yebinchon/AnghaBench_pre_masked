
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_worker_thread {int working; int lock; int task; TYPE_1__* workers; int worker_list; scalar_t__ idle; int num_pending; int pending; int prio_pending; } ;
struct btrfs_work {int list; int flags; struct btrfs_worker_thread* worker; } ;
struct TYPE_2__ {int lock; int worker_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct btrfs_work *VAR_2)
{
 struct btrfs_worker_thread *VAR_3 = VAR_2->worker;
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (FUNC_7(VAR_1, &VAR_2->flags))
  return;

 FUNC_4(&VAR_3->lock, VAR_4);
 if (FUNC_8(VAR_0, &VAR_2->flags))
  FUNC_1(&VAR_2->list, &VAR_3->prio_pending);
 else
  FUNC_1(&VAR_2->list, &VAR_3->pending);
 FUNC_0(&VAR_3->num_pending);




 if (VAR_3->idle) {
  FUNC_3(&VAR_3->workers->lock);
  VAR_3->idle = 0;
  FUNC_2(&VAR_3->worker_list,
         &VAR_3->workers->worker_list);
  FUNC_5(&VAR_3->workers->lock);
 }
 if (!VAR_3->working) {
  VAR_5 = 1;
  VAR_3->working = 1;
 }

 if (VAR_5)
  FUNC_9(VAR_3->task);
 FUNC_6(&VAR_3->lock, VAR_4);
}
