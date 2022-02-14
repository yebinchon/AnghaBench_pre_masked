
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workers {int order_lock; int order_list; int prio_order_list; scalar_t__ ordered; } ;
struct btrfs_worker_thread {int working; int lock; int task; int pending; int prio_pending; } ;
struct btrfs_work {int list; int flags; int order_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_worker_thread*) ;
 struct btrfs_worker_thread* FUNC_2 (struct btrfs_workers*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct btrfs_workers *VAR_2, struct btrfs_work *VAR_3)
{
 struct btrfs_worker_thread *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;


 if (FUNC_8(VAR_1, &VAR_3->flags))
  return;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_2->ordered) {




  FUNC_4(&VAR_2->order_lock);
  if (FUNC_9(VAR_0, &VAR_3->flags)) {
   FUNC_3(&VAR_3->order_list,
          &VAR_2->prio_order_list);
  } else {
   FUNC_3(&VAR_3->order_list, &VAR_2->order_list);
  }
  FUNC_6(&VAR_2->order_lock);
 } else {
  FUNC_0(&VAR_3->order_list);
 }

 FUNC_5(&VAR_4->lock, VAR_5);

 if (FUNC_9(VAR_0, &VAR_3->flags))
  FUNC_3(&VAR_3->list, &VAR_4->prio_pending);
 else
  FUNC_3(&VAR_3->list, &VAR_4->pending);
 FUNC_1(VAR_4);





 if (!VAR_4->working)
  VAR_6 = 1;
 VAR_4->working = 1;

 if (VAR_6)
  FUNC_10(VAR_4->task);
 FUNC_7(&VAR_4->lock, VAR_5);
}
