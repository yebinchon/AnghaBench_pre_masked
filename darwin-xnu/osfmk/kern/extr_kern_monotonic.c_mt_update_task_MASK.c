
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* thread_t ;
typedef TYPE_4__* task_t ;
struct TYPE_8__ {int * mtk_counts; } ;
struct TYPE_11__ {TYPE_1__ task_monotonic; } ;
struct TYPE_9__ {scalar_t__* mth_counts; } ;
struct TYPE_10__ {TYPE_2__ t_monotonic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;

void
FUNC_1(task_t VAR_2, thread_t VAR_3)
{
 FUNC_0(VAR_2);

 if (!VAR_1) {
  return;
 }

 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->task_monotonic.mtk_counts[VAR_4] += VAR_3->t_monotonic.mth_counts[VAR_4];
 }
}
