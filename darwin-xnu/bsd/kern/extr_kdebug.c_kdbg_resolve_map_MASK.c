
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_5__ {size_t count; size_t maxcount; TYPE_1__* atts; TYPE_3__* map; } ;
typedef TYPE_2__ krt_t ;
struct TYPE_6__ {uintptr_t thread; int valid; int command; } ;
typedef TYPE_3__ kd_threadmap ;
struct TYPE_4__ {int pid; int task_comm; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(thread_t VAR_0, void *VAR_1)
{
 kd_threadmap *VAR_2;
 krt_t *VAR_3 = (krt_t *)VAR_1;

 if (VAR_3->count < VAR_3->maxcount) {
  VAR_2 = &VAR_3->map[VAR_3->count];
  VAR_2->thread = (uintptr_t)FUNC_1(VAR_0);

  (void) FUNC_0 (VAR_2->command, VAR_3->atts->task_comm,
    sizeof(VAR_3->atts->task_comm));




  if (VAR_3->atts->pid)
   VAR_2->valid = VAR_3->atts->pid;
  else
   VAR_2->valid = 1;

  VAR_3->count++;
 }
}
