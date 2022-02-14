
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int tensor; int graph_exec; } ;
typedef TYPE_1__ ccv_cnnp_rewind_symbol_t ;
struct TYPE_12__ {TYPE_3__* graph; TYPE_3__* compiled_data; } ;
typedef TYPE_2__ ccv_cnnp_model_t ;
struct TYPE_13__ {int rnum; struct TYPE_13__* rewindables; } ;
typedef TYPE_3__ ccv_cnnp_compiled_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_6(ccv_cnnp_model_t* const VAR_3)
{
 FUNC_0(VAR_3->graph);
 FUNC_0(VAR_3->compiled_data);
 ccv_cnnp_compiled_data_t* const VAR_4 = VAR_3->compiled_data;
 FUNC_0(VAR_4->rewindables);
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4->rewindables->rnum; VAR_5++)
 {
  const ccv_cnnp_rewind_symbol_t* const VAR_6 = (ccv_cnnp_rewind_symbol_t*)FUNC_2(VAR_4->rewindables, VAR_5);
  if (VAR_6->type == VAR_0)
   FUNC_4(VAR_3->graph, VAR_6->graph_exec);
  else if (VAR_6->type == VAR_1)
   FUNC_5(VAR_3->graph, VAR_6->tensor);
 }
 FUNC_1(VAR_4->rewindables);
 FUNC_3(VAR_3->graph, 0, 0, VAR_2);
}
