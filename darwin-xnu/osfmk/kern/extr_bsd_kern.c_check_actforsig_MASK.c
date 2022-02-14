
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int queue_entry_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_11__ {int threads; int active; } ;
struct TYPE_10__ {int sched_flags; int task_threads; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 task_t VAR_4,
 thread_t VAR_5,
 int VAR_6)
{
 kern_return_t VAR_7 = VAR_0;
 thread_t VAR_8;

 FUNC_4(VAR_4);

 if (!VAR_4->active) {
  FUNC_5(VAR_4);

  return (VAR_0);
 }

 for (VAR_8 = (thread_t)(void *)FUNC_2(&VAR_4->threads);
   !FUNC_1(&VAR_4->threads, (queue_entry_t)VAR_8); ) {
  if (VAR_8 == VAR_5) {
   FUNC_6(VAR_8);

   if (VAR_8->active &&
     (VAR_8->sched_flags & VAR_3) != VAR_2) {
    VAR_7 = VAR_1;
    break;
   }

   FUNC_7(VAR_8);
   break;
  }

  VAR_8 = (thread_t)(void *)FUNC_3(&VAR_8->task_threads);
 }

 if (VAR_7 == VAR_1) {
  if (VAR_6)
   FUNC_0(VAR_5);

  FUNC_7(VAR_5);
 }

 FUNC_5(VAR_4);

 return (VAR_7);
}
