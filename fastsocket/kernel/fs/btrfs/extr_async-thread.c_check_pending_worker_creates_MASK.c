
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; } ;
struct worker_start {TYPE_1__ work; struct btrfs_workers* queue; } ;
struct btrfs_workers {scalar_t__ num_workers; scalar_t__ num_workers_starting; scalar_t__ max_workers; int lock; int atomic_worker_start; scalar_t__ atomic_start_pending; } ;
struct btrfs_worker_thread {struct btrfs_workers* workers; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct worker_start*) ;
 struct worker_start* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct btrfs_worker_thread *VAR_2)
{
 struct btrfs_workers *VAR_3 = VAR_2->workers;
 struct worker_start *VAR_4;
 unsigned long VAR_5;

 FUNC_3();
 if (!VAR_3->atomic_start_pending)
  return;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->work.func = VAR_1;
 VAR_4->queue = VAR_3;

 FUNC_4(&VAR_3->lock, VAR_5);
 if (!VAR_3->atomic_start_pending)
  goto out;

 VAR_3->atomic_start_pending = 0;
 if (VAR_3->num_workers + VAR_3->num_workers_starting >=
     VAR_3->max_workers)
  goto out;

 VAR_3->num_workers_starting += 1;
 FUNC_5(&VAR_3->lock, VAR_5);
 FUNC_0(VAR_3->atomic_worker_start, &VAR_4->work);
 return;

out:
 FUNC_1(VAR_4);
 FUNC_5(&VAR_3->lock, VAR_5);
}
