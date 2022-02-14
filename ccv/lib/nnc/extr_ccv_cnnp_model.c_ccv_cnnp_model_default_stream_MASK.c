
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_stream_context_t ;
struct TYPE_4__ {TYPE_2__* compiled_data; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;
struct TYPE_5__ {int graph; } ;
typedef TYPE_2__ ccv_cnnp_compiled_data_t ;


 int * FUNC_0 (int ) ;

ccv_nnc_stream_context_t* FUNC_1(const ccv_cnnp_model_t* const VAR_0)
{
 const ccv_cnnp_compiled_data_t* const VAR_1 = VAR_0->compiled_data;
 if (!VAR_1 || !VAR_1->graph)
  return 0;
 return FUNC_0(VAR_1->graph);
}
