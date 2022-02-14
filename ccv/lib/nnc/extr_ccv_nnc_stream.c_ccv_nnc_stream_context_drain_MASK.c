
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ workspace_size; scalar_t__ workspace; } ;
typedef TYPE_1__ ccv_nnc_stream_cpu_t ;
typedef int ccv_nnc_stream_context_t ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int * const) ;

void FUNC_2(ccv_nnc_stream_context_t* const VAR_1)
{



 ccv_nnc_stream_cpu_t* VAR_2 = (ccv_nnc_stream_cpu_t*)VAR_1;
 if (!VAR_2)
  VAR_2 = &VAR_0;
 if (VAR_2->workspace)
 {
  FUNC_0(VAR_2->workspace);
  VAR_2->workspace = 0;
  VAR_2->workspace_size = 0;
 }

}
