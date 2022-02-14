
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ucontext_t ;
struct TYPE_5__ {scalar_t__ done; int context; TYPE_2__* super; } ;
typedef TYPE_1__ ccv_nnc_stream_task_t ;
struct TYPE_6__ {int mutex; int caller; int callee; } ;
typedef TYPE_2__ ccv_nnc_stream_scheduler_t ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(ccv_nnc_stream_task_t* const VAR_0)
{
 ccv_nnc_stream_scheduler_t* const VAR_1 = VAR_0->super;
 ucontext_t VAR_2 = VAR_1->caller;
 FUNC_3(&VAR_1->caller, &VAR_0->context);
 VAR_0->context = VAR_1->callee;
 VAR_1->caller = VAR_2;
 if (VAR_0->done)
 {
  FUNC_1(&VAR_1->mutex);
  FUNC_0(VAR_0);
  FUNC_2(&VAR_1->mutex);
 }
}
