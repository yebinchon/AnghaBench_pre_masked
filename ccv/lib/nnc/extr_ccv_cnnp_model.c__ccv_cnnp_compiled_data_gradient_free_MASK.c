
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ from_ops; } ;
struct TYPE_5__ {scalar_t__ tos; } ;
struct TYPE_7__ {TYPE_2__ backward; TYPE_1__ evaluate; scalar_t__ saved_aux; scalar_t__ update_nodes; scalar_t__ updated_trainables; scalar_t__ gradients; } ;
typedef TYPE_3__ ccv_cnnp_compiled_data_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_compiled_data_t* const VAR_0)
{
 if (VAR_0->gradients)
  FUNC_0(VAR_0->gradients);
 VAR_0->gradients = 0;
 if (VAR_0->updated_trainables)
  FUNC_0(VAR_0->updated_trainables);
 VAR_0->updated_trainables = 0;
 VAR_0->update_nodes = 0;
 VAR_0->saved_aux = 0;
 if (VAR_0->evaluate.tos)
  FUNC_0(VAR_0->evaluate.tos);
 VAR_0->evaluate.tos = 0;
 if (VAR_0->backward.from_ops)
  FUNC_0(VAR_0->backward.from_ops);
 VAR_0->backward.from_ops = 0;
}
