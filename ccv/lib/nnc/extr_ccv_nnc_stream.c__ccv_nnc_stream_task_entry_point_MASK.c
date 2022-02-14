
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int done; TYPE_2__* super; int userdata; int (* func ) (TYPE_1__* const,int ) ;} ;
typedef TYPE_1__ ccv_nnc_stream_task_t ;
struct TYPE_6__ {int caller; int callee; } ;
typedef TYPE_2__ ccv_nnc_stream_scheduler_t ;
struct TYPE_7__ {scalar_t__ ptr; int part; } ;
typedef TYPE_3__ ccv_nnc_ptr_splitter_u ;


 int FUNC_0 (TYPE_1__* const,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_0, uint32_t VAR_1)
{
 const ccv_nnc_ptr_splitter_u VAR_2 = {
  .part = {
   VAR_0, VAR_1
  }
 };
 ccv_nnc_stream_task_t* const VAR_3 = (ccv_nnc_stream_task_t*)VAR_2.ptr;
 VAR_3->func(VAR_3, VAR_3->userdata);
 ccv_nnc_stream_scheduler_t* const VAR_4 = VAR_3->super;
 VAR_3->done = 1;
 FUNC_1(&VAR_4->callee, &VAR_4->caller);
}
