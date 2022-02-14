
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* compiled_data; scalar_t__ graph; } ;
typedef TYPE_4__ ccv_cnnp_model_t ;
struct TYPE_7__ {scalar_t__ graph; } ;
struct TYPE_6__ {scalar_t__ accum; } ;
struct TYPE_8__ {TYPE_2__ apply_gradients; TYPE_1__ backward; scalar_t__ graph; } ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,int const,int *) ;
 int FUNC_1 (scalar_t__,int const,int *) ;

void FUNC_2(const ccv_cnnp_model_t* const VAR_0, const int VAR_1, FILE** const VAR_2, const int VAR_3)
{
 if (VAR_0->graph && VAR_3 > 0)
  FUNC_1(VAR_0->graph, VAR_1, VAR_2[0]);
 if (VAR_0->compiled_data && VAR_0->compiled_data->graph && VAR_3 > 1)
  FUNC_0(VAR_0->compiled_data->graph, VAR_1, VAR_2[1]);
 if (VAR_0->compiled_data && VAR_0->compiled_data->backward.accum && VAR_3 > 2)
  FUNC_0(VAR_0->compiled_data->backward.accum, VAR_1, VAR_2[2]);
 if (VAR_0->compiled_data && VAR_0->compiled_data->apply_gradients.graph && VAR_3 > 3)
  FUNC_0(VAR_0->compiled_data->apply_gradients.graph, VAR_1, VAR_2[3]);
}
