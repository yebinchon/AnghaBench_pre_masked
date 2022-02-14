
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_stream_task_t ;
struct TYPE_5__ {int mutex; int active; } ;
typedef TYPE_1__ ccv_nnc_stream_scheduler_t ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const,int * const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(ccv_nnc_stream_scheduler_t* const VAR_0, ccv_nnc_stream_task_t* const VAR_1)
{
 int VAR_2 = 0;
 FUNC_2(&VAR_0->mutex);

 FUNC_1(VAR_0, VAR_1);
 if (!VAR_0->active)
  VAR_2 = 1;
 FUNC_3(&VAR_0->mutex);
 if (VAR_2)
  FUNC_0(VAR_0);
}
