
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ done; int context; } ;
typedef TYPE_1__ ccv_nnc_stream_task_t ;
struct TYPE_9__ {int active; scalar_t__ stream_wait_task_count; int mutex; int callee; int caller; TYPE_1__* head; int thread; } ;
typedef TYPE_2__ ccv_nnc_stream_scheduler_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__* const,TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__* const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(ccv_nnc_stream_scheduler_t* const VAR_1)
{
 FUNC_3(&VAR_1->mutex);
 if (VAR_1->active)
 {
  FUNC_4(&VAR_1->mutex);
  return;
 }
 VAR_1->active = 1;
 for (;;)
 {
  if (VAR_1->head == 0 && VAR_1->stream_wait_task_count == 0)
  {
   VAR_1->active = 0;
   FUNC_4(&VAR_1->mutex);
   break;
  }
  if (VAR_1->head == 0)
  {

   FUNC_2(&VAR_1->thread, 0, VAR_0, VAR_1);
   FUNC_4(&VAR_1->mutex);
   break;
  }
  ccv_nnc_stream_task_t* const VAR_2 = VAR_1->head;
  FUNC_0(VAR_1, VAR_2);
  FUNC_4(&VAR_1->mutex);
  FUNC_5(&VAR_1->caller, &VAR_2->context);
  VAR_2->context = VAR_1->callee;
  FUNC_3(&VAR_1->mutex);
  if (VAR_2->done)
   FUNC_1(VAR_2);
 }
}
