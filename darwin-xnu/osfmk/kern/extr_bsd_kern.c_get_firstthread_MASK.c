
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef TYPE_1__* task_t ;
typedef int queue_entry_t ;
struct TYPE_3__ {int active; int threads; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

thread_t FUNC_2(task_t VAR_1)
{
 thread_t VAR_2 = (thread_t)(void *)FUNC_1(&VAR_1->threads);

 if (FUNC_0(&VAR_1->threads, (queue_entry_t)VAR_2))
  VAR_2 = VAR_0;

 if (!VAR_1->active)
  return (VAR_0);

 return (VAR_2);
}
