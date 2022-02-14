
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* compiled_data; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;
struct TYPE_6__ {size_t workspace_size; scalar_t__ graph; } ;
typedef TYPE_2__ ccv_cnnp_compiled_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (scalar_t__,size_t,int ,int ) ;

void FUNC_2(ccv_cnnp_model_t* const VAR_1, size_t VAR_2)
{
 ccv_cnnp_compiled_data_t* const VAR_3 = VAR_1->compiled_data;
 FUNC_0(VAR_3);
 if (VAR_2 == VAR_3->workspace_size)
  return;
 VAR_3->workspace_size = VAR_2;
 if (VAR_3->graph)
  FUNC_1(VAR_3->graph, VAR_2, 0, VAR_0);
}
