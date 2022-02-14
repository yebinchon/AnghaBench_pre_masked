
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_worker_thread {int lock; TYPE_1__* workers; int worker_list; int num_pending; int pending; int prio_pending; int working; scalar_t__ idle; } ;
struct TYPE_2__ {int num_workers; int lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_worker_thread*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct btrfs_worker_thread *VAR_0)
{
 int VAR_1 = 0;

 FUNC_5(&VAR_0->lock);
 FUNC_4(&VAR_0->workers->lock);
 if (VAR_0->workers->num_workers > 1 &&
     VAR_0->idle &&
     !VAR_0->working &&
     !FUNC_2(&VAR_0->worker_list) &&
     FUNC_2(&VAR_0->prio_pending) &&
     FUNC_2(&VAR_0->pending) &&
     FUNC_0(&VAR_0->num_pending) == 0) {
  VAR_1 = 1;
  FUNC_1(&VAR_0->worker_list);
  VAR_0->workers->num_workers--;
 }
 FUNC_6(&VAR_0->workers->lock);
 FUNC_7(&VAR_0->lock);

 if (VAR_1)
  FUNC_3(VAR_0);
 return VAR_1;
}
