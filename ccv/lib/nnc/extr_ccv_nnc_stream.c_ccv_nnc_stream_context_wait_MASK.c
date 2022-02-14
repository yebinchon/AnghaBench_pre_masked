
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; int notify; scalar_t__ active; } ;
typedef TYPE_1__ ccv_nnc_stream_scheduler_t ;
struct TYPE_6__ {int type; TYPE_1__* scheduler; } ;
typedef TYPE_2__ ccv_nnc_stream_context_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const* const) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(const ccv_nnc_stream_context_t* const VAR_1)
{
 if (!VAR_1)
  return;
 ccv_nnc_stream_scheduler_t* const VAR_2 = VAR_1->scheduler;
 if (VAR_2)
 {
  FUNC_3(&VAR_2->mutex);
  while (VAR_2->active)
   FUNC_2(&VAR_2->notify, &VAR_2->mutex);
  FUNC_4(&VAR_2->mutex);
 }




}
