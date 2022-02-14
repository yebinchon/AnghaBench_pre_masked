
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workers {scalar_t__ num_workers_starting; int lock; scalar_t__ num_workers; int idle_list; int name; } ;
struct btrfs_worker_thread {int idle; int worker_list; int task; struct btrfs_workers* workers; int refs; int num_pending; int lock; int prio_pending; int pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct btrfs_worker_thread*) ;
 int FUNC_6 (int ,struct btrfs_worker_thread*,char*,int ,scalar_t__) ;
 struct btrfs_worker_thread* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(struct btrfs_workers *VAR_3)
{
 struct btrfs_worker_thread *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_7(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto fail;
 }

 FUNC_0(&VAR_4->pending);
 FUNC_0(&VAR_4->prio_pending);
 FUNC_0(&VAR_4->worker_list);
 FUNC_9(&VAR_4->lock);

 FUNC_4(&VAR_4->num_pending, 0);
 FUNC_4(&VAR_4->refs, 1);
 VAR_4->workers = VAR_3;
 VAR_4->task = FUNC_6(VAR_2, VAR_4,
       "btrfs-%s-%d", VAR_3->name,
       VAR_3->num_workers + 1);
 if (FUNC_1(VAR_4->task)) {
  VAR_5 = FUNC_2(VAR_4->task);
  FUNC_5(VAR_4);
  goto fail;
 }
 FUNC_10(&VAR_3->lock);
 FUNC_8(&VAR_4->worker_list, &VAR_3->idle_list);
 VAR_4->idle = 1;
 VAR_3->num_workers++;
 VAR_3->num_workers_starting--;
 FUNC_3(VAR_3->num_workers_starting < 0);
 FUNC_11(&VAR_3->lock);

 return 0;
fail:
 FUNC_10(&VAR_3->lock);
 VAR_3->num_workers_starting--;
 FUNC_11(&VAR_3->lock);
 return VAR_5;
}
