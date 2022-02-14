
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ khiter_t ;
typedef scalar_t__ ccv_nnc_tensor_variable_t ;
typedef int ccv_nnc_tensor_variable_graph_bind_t ;
struct TYPE_8__ {int stateful_execs; TYPE_4__* ws; int tape; TYPE_4__* binds; TYPE_4__* vars; } ;
typedef TYPE_1__ ccv_nnc_dynamic_graph_t ;
struct TYPE_9__ {int rnum; } ;


 int FUNC_0 (TYPE_1__* const,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 TYPE_1__* const FUNC_10 (int ,scalar_t__) ;
 int VAR_0 ;

void FUNC_11(ccv_nnc_dynamic_graph_t* const VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->vars->rnum; VAR_2++)
 {
  ccv_nnc_tensor_variable_t VAR_3 = *(ccv_nnc_tensor_variable_t*)FUNC_4(VAR_1->vars, VAR_2);
  if (VAR_3)
   FUNC_0(VAR_1, VAR_3, 0);
 }
 FUNC_3(VAR_1->vars);
 for (VAR_2 = 0; VAR_2 < VAR_1->binds->rnum; VAR_2++)
  FUNC_1((ccv_nnc_tensor_variable_graph_bind_t*)FUNC_4(VAR_1->binds, VAR_2), 0);
 FUNC_3(VAR_1->binds);
 FUNC_5(VAR_1->tape);
 if (VAR_1->ws)
  FUNC_3(VAR_1->ws);
 khiter_t VAR_4;
 for (VAR_4 = FUNC_6(VAR_1->stateful_execs); VAR_4 != FUNC_8(VAR_1->stateful_execs); ++VAR_4)
 {
  if (!FUNC_9(VAR_1->stateful_execs, VAR_4))
   continue;
  FUNC_2(FUNC_10(VAR_1->stateful_execs, VAR_4));
 }
 FUNC_7(VAR_0, VAR_1->stateful_execs);
 FUNC_2(VAR_1);
}
