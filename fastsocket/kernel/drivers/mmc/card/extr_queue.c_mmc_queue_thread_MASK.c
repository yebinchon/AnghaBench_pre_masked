
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {int dummy; } ;
struct mmc_queue {int thread_sem; int (* issue_fn ) (struct mmc_queue*,struct request*) ;struct request* req; struct request_queue* queue; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mmc_queue*,struct request*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(void *VAR_4)
{
 struct mmc_queue *VAR_5 = VAR_4;
 struct request_queue *VAR_6 = VAR_5->queue;

 VAR_3->flags |= VAR_0;

 FUNC_2(&VAR_5->thread_sem);
 do {
  struct request *VAR_7 = ((void*)0);

  FUNC_6(VAR_6->queue_lock);
  FUNC_5(VAR_1);
  if (!FUNC_1(VAR_6))
   VAR_7 = FUNC_0(VAR_6);
  VAR_5->req = VAR_7;
  FUNC_7(VAR_6->queue_lock);

  if (!VAR_7) {
   if (FUNC_3()) {
    FUNC_5(VAR_2);
    break;
   }
   FUNC_9(&VAR_5->thread_sem);
   FUNC_4();
   FUNC_2(&VAR_5->thread_sem);
   continue;
  }
  FUNC_5(VAR_2);

  VAR_5->issue_fn(VAR_5, VAR_7);
 } while (1);
 FUNC_9(&VAR_5->thread_sem);

 return 0;
}
