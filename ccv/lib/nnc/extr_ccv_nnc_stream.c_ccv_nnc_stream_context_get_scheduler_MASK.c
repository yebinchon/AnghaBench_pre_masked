
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wait; int notify; int mutex; } ;
typedef TYPE_1__ ccv_nnc_stream_scheduler_t ;
struct TYPE_6__ {TYPE_1__* scheduler; } ;
typedef TYPE_2__ ccv_nnc_stream_context_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

ccv_nnc_stream_scheduler_t* FUNC_3(ccv_nnc_stream_context_t* const VAR_0)
{
 ccv_nnc_stream_scheduler_t* VAR_1 = VAR_0->scheduler;
 if (!VAR_1)
 {
  VAR_0->scheduler = VAR_1 = (ccv_nnc_stream_scheduler_t*)FUNC_0(1, sizeof(ccv_nnc_stream_scheduler_t));
  FUNC_2(&VAR_1->mutex, 0);
  FUNC_1(&VAR_1->notify, 0);
  FUNC_1(&VAR_1->wait, 0);
 }
 return VAR_1;
}
