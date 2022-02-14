
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int queue_entry_t ;
typedef int kern_return_t ;
struct TYPE_12__ {int threads; int active; } ;
struct TYPE_11__ {int sched_flags; int task_threads; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

kern_return_t
FUNC_8(
 task_t VAR_5,
 thread_t *VAR_6,
 int VAR_7)
{
 kern_return_t VAR_8 = VAR_1;
 thread_t VAR_9, VAR_10 = VAR_2;

 FUNC_4(VAR_5);

 if (!VAR_5->active) {
  FUNC_5(VAR_5);

  return (VAR_0);
 }

 for (VAR_9 = (thread_t)(void *)FUNC_2(&VAR_5->threads);
   !FUNC_1(&VAR_5->threads, (queue_entry_t)VAR_9); ) {
  FUNC_6(VAR_9);
  if (VAR_9->active &&
    (VAR_9->sched_flags & VAR_4) != VAR_3) {
   VAR_10 = VAR_9;
   break;
  }
  FUNC_7(VAR_9);

  VAR_9 = (thread_t)(void *)FUNC_3(&VAR_9->task_threads);
 }

 if (VAR_6)
  *VAR_6 = VAR_10;

 if (VAR_10) {
  if (VAR_7)
   FUNC_0(VAR_10);

  FUNC_7(VAR_10);
 }
 else
  VAR_8 = VAR_0;

 FUNC_5(VAR_5);

 return (VAR_8);
}
