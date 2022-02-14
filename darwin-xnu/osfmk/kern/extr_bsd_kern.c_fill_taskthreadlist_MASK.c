
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* thread_t ;
typedef TYPE_3__* task_t ;
typedef int queue_entry_t ;
struct TYPE_9__ {int threads; } ;
struct TYPE_7__ {int cthread_self; } ;
struct TYPE_8__ {int task_threads; TYPE_1__ machine; int thread_id; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

int
FUNC_5(task_t VAR_0, void * VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4=0;
 thread_t VAR_5;
 uint64_t * VAR_6;
 uint64_t VAR_7;

 VAR_6 = (uint64_t *)VAR_1;

 FUNC_3(VAR_0);

 for (VAR_5 = (thread_t)(void *)FUNC_1(&VAR_0->threads);
   !FUNC_0(&VAR_0->threads, (queue_entry_t)VAR_5); ) {
  VAR_7 = (VAR_3) ? VAR_5->thread_id : VAR_5->machine.cthread_self;
  *VAR_6++ = VAR_7;
  VAR_4++;
  if (VAR_4 >= VAR_2)
   goto out;
  VAR_5 = (thread_t)(void *)FUNC_2(&VAR_5->task_threads);
 }

out:
 FUNC_4(VAR_0);
 return (int)(VAR_4 * sizeof(uint64_t));

}
