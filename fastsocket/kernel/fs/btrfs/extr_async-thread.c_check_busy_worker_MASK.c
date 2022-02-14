
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_worker_thread {TYPE_1__* workers; int worker_list; scalar_t__ idle; int num_pending; } ;
struct TYPE_2__ {scalar_t__ idle_thresh; int lock; int worker_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct btrfs_worker_thread *VAR_0)
{
 if (VAR_0->idle && FUNC_0(&VAR_0->num_pending) >=
     VAR_0->workers->idle_thresh) {
  unsigned long VAR_1;
  FUNC_3(&VAR_0->workers->lock, VAR_1);
  VAR_0->idle = 0;

  if (!FUNC_1(&VAR_0->worker_list)) {
   FUNC_2(&VAR_0->worker_list,
          &VAR_0->workers->worker_list);
  }
  FUNC_4(&VAR_0->workers->lock, VAR_1);
 }
}
