
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct btrfs_worker_thread {scalar_t__ working; int lock; int prio_pending; int pending; int workers; int num_pending; } ;
struct btrfs_work {int (* func ) (struct btrfs_work*) ;struct btrfs_worker_thread* worker; int flags; int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_worker_thread*) ;
 int FUNC_4 (struct btrfs_worker_thread*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 struct btrfs_work* FUNC_9 (struct btrfs_worker_thread*,struct list_head*,struct list_head*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,struct btrfs_work*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct btrfs_work*) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (struct btrfs_worker_thread*) ;

__attribute__((used)) static int FUNC_22(void *VAR_5)
{
 struct btrfs_worker_thread *VAR_6 = VAR_5;
 struct list_head VAR_7;
 struct list_head VAR_8;
 struct btrfs_work *VAR_9;

 FUNC_0(&VAR_7);
 FUNC_0(&VAR_8);

 do {
again:
  while (1) {


   VAR_9 = FUNC_9(VAR_6, &VAR_8, &VAR_7);
   if (!VAR_9)
    break;

   FUNC_11(&VAR_9->list);
   FUNC_5(VAR_3, &VAR_9->flags);

   VAR_9->worker = VAR_6;

   VAR_9->func(VAR_9);

   FUNC_2(&VAR_6->num_pending);




   FUNC_13(VAR_6->workers, VAR_9);

   FUNC_4(VAR_6);
   FUNC_6();
  }

  FUNC_17(&VAR_6->lock);
  FUNC_3(VAR_6);

  if (FUNC_8(VAR_4)) {
   VAR_6->working = 0;
   FUNC_18(&VAR_6->lock);
   FUNC_20();
  } else {
   FUNC_18(&VAR_6->lock);
   if (!FUNC_10()) {
    FUNC_7();




    FUNC_16();
    if (!FUNC_12(&VAR_6->pending) ||
        !FUNC_12(&VAR_6->prio_pending))
     continue;
    FUNC_14(1);
    FUNC_16();
    if (!FUNC_12(&VAR_6->pending) ||
        !FUNC_12(&VAR_6->prio_pending))
     continue;

    if (FUNC_10())
     break;


    FUNC_17(&VAR_6->lock);
    FUNC_15(VAR_1);
    if (!FUNC_12(&VAR_6->pending) ||
        !FUNC_12(&VAR_6->prio_pending)) {
     FUNC_18(&VAR_6->lock);
     FUNC_15(VAR_2);
     goto again;
    }





    VAR_6->working = 0;
    FUNC_18(&VAR_6->lock);

    if (!FUNC_10()) {
     FUNC_14(VAR_0 * 120);
     if (!VAR_6->working &&
         FUNC_21(VAR_6)) {
      return 0;
     }
    }
   }
   FUNC_1(VAR_2);
  }
 } while (!FUNC_10());
 return 0;
}
