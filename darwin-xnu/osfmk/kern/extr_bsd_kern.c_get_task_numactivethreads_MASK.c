
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int queue_entry_t ;
struct TYPE_7__ {int threads; } ;
struct TYPE_6__ {scalar_t__ active; int task_threads; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(task_t VAR_0)
{
 thread_t VAR_1;
 int VAR_2=0;
 FUNC_3(VAR_0);

 for (VAR_1 = (thread_t)(void *)FUNC_1(&VAR_0->threads);
   !FUNC_0(&VAR_0->threads, (queue_entry_t)VAR_1); VAR_1 = (thread_t)(void *)FUNC_2(&VAR_1->task_threads))
 {
  if(VAR_1->active)
   VAR_2++;
 }
 FUNC_4(VAR_0);
 return VAR_2;
}
