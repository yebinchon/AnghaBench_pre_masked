
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
struct TYPE_6__ {int thread_count; int threads; } ;
struct TYPE_5__ {int task_threads; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(task_t VAR_0)
{
 thread_t VAR_1 = FUNC_0();
 thread_t VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = (thread_t) FUNC_2(&VAR_0->threads); VAR_3 < VAR_0->thread_count;
   ++VAR_3, VAR_2 = (thread_t) FUNC_3(&VAR_2->task_threads)) {

  if (VAR_1 == VAR_2) {
   FUNC_1("\nThread %d crashed\n", VAR_3);
   break;
  }
 }
}
