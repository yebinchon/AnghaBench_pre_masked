
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_7__* const alias_registry; TYPE_7__* const exec_registry; } ;
typedef TYPE_1__ ccv_nnc_tensor_ref_t ;
struct TYPE_13__ {int exec_symbol_info_size; int tensor_symbol_info_size; int sub_prep_size; struct TYPE_13__* const sub_preps; struct TYPE_13__* const tensor_symbol_info; struct TYPE_13__* const exec_symbol_info; int forward_visit; int backward_visit; struct TYPE_13__* const input_bitmasks; TYPE_7__* const outgoings; struct TYPE_13__* backward_info; TYPE_7__* sum_or_set_execs; TYPE_7__* const autograd_tensor_symbols; TYPE_7__* const ref_version; struct TYPE_13__* autograd_tensor_versions; struct TYPE_13__* const inputs; struct TYPE_13__* autograd_execs; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_backward_prep_t ;
struct TYPE_14__ {TYPE_7__* const outgoings; TYPE_2__* const inputs; } ;
typedef TYPE_3__ ccv_nnc_sum_or_set_graph_exec_symbol_t ;
typedef TYPE_2__ ccv_nnc_graph_backward_info_t ;
typedef TYPE_2__ ccv_nnc_autograd_tensor_version_t ;
typedef TYPE_2__ ccv_nnc_autograd_graph_exec_symbol_t ;
struct TYPE_15__ {int rnum; } ;
typedef TYPE_7__ ccv_array_t ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_7__* const) ;
 scalar_t__ FUNC_2 (TYPE_7__* const,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const ccv_nnc_symbolic_graph_backward_prep_t VAR_0)
{
 int VAR_1, VAR_2;
 const int VAR_3 = VAR_0.exec_symbol_info_size;
 const int VAR_4 = VAR_0.tensor_symbol_info_size;
 ccv_nnc_autograd_graph_exec_symbol_t* const VAR_5 = VAR_0.autograd_execs;
 if (VAR_5)
 {
  for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
  {
   if (VAR_5[VAR_1].inputs)
    FUNC_0(VAR_5[VAR_1].inputs);
   if (VAR_5[VAR_1].outgoings)
    FUNC_1(VAR_5[VAR_1].outgoings);
  }
  FUNC_0(VAR_5);
 }
 ccv_nnc_autograd_tensor_version_t* const VAR_6 = VAR_0.autograd_tensor_versions;
 if (VAR_6)
 {
  for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++)
  {
   if (VAR_6[VAR_1].ref_version)
   {
    for (VAR_2 = 0; VAR_2 < VAR_6[VAR_1].ref_version->rnum; VAR_2++)
    {
     ccv_nnc_tensor_ref_t* VAR_7 = (ccv_nnc_tensor_ref_t*)FUNC_2(VAR_6[VAR_1].ref_version, VAR_2);
     if (VAR_7->exec_registry)
      FUNC_1(VAR_7->exec_registry);
     if (VAR_7->alias_registry)
      FUNC_1(VAR_7->alias_registry);
    }
    FUNC_1(VAR_6[VAR_1].ref_version);
   }
  }
  FUNC_0(VAR_6);
 }
 if (VAR_0.autograd_tensor_symbols)
  FUNC_1(VAR_0.autograd_tensor_symbols);
 ccv_array_t* const VAR_8 = VAR_0.sum_or_set_execs;
 if (VAR_8)
 {
  for (VAR_1 = 0; VAR_1 < VAR_8->rnum; VAR_1++)
  {
   ccv_nnc_sum_or_set_graph_exec_symbol_t* VAR_9 = (ccv_nnc_sum_or_set_graph_exec_symbol_t*)FUNC_2(VAR_8, VAR_1);
   if (VAR_9->inputs)
    FUNC_0(VAR_9->inputs);
   if (VAR_9->outgoings)
    FUNC_1(VAR_9->outgoings);
  }
  FUNC_1(VAR_8);
 }

 ccv_nnc_graph_backward_info_t* const VAR_10 = VAR_0.backward_info;
 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
 {
  if (VAR_10[VAR_1].outgoings)
   FUNC_1(VAR_10[VAR_1].outgoings);
  if (VAR_10[VAR_1].input_bitmasks)
   FUNC_0(VAR_10[VAR_1].input_bitmasks);
 }
 FUNC_0(VAR_10);
 FUNC_3(VAR_0.backward_visit);
 FUNC_3(VAR_0.forward_visit);
 FUNC_0(VAR_0.exec_symbol_info);
 FUNC_0(VAR_0.tensor_symbol_info);
 for (VAR_1 = 0; VAR_1 < VAR_0.sub_prep_size; VAR_1++)
  FUNC_4(VAR_0.sub_preps[VAR_1]);
 if (VAR_0.sub_preps)
  FUNC_0(VAR_0.sub_preps);
}
