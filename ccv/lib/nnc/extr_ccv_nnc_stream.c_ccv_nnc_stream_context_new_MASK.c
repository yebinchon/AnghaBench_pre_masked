
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int signal_container; } ;
struct TYPE_4__ {scalar_t__ workspace; scalar_t__ workspace_size; TYPE_1__ super; } ;
typedef TYPE_2__ ccv_nnc_stream_cpu_t ;
typedef int ccv_nnc_stream_context_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

ccv_nnc_stream_context_t* FUNC_4(const int VAR_2)
{
 ccv_nnc_stream_cpu_t* const VAR_3 = (ccv_nnc_stream_cpu_t*)FUNC_1(1, sizeof(ccv_nnc_stream_cpu_t));
 VAR_3->super.type = VAR_2;
 VAR_3->super.signal_container = FUNC_3(VAR_1);
 VAR_3->workspace_size = 0;
 VAR_3->workspace = 0;




 return (ccv_nnc_stream_context_t*)VAR_3;
}
