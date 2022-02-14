
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;


struct TYPE_25__ {int d; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
struct TYPE_26__ {int p_ref; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_27__ {int d; } ;
typedef TYPE_4__ ccv_nnc_tensor_ref_t ;
struct TYPE_28__ {int tensor_symbol_info; } ;
typedef TYPE_5__ ccv_nnc_symbolic_graph_t ;
struct TYPE_29__ {TYPE_1__* tensor_symbol_info; int autograd_tensor_symbols; TYPE_7__* autograd_tensor_versions; } ;
typedef TYPE_6__ ccv_nnc_symbolic_graph_backward_prep_t ;
struct TYPE_30__ {int ref_version; } ;
typedef TYPE_7__ ccv_nnc_autograd_tensor_version_t ;
struct TYPE_23__ {int const d; } ;
struct TYPE_31__ {TYPE_16__ symbol; } ;
typedef TYPE_8__ ccv_nnc_autograd_tensor_symbol_t ;
typedef int ccv_array_t ;
struct TYPE_24__ {int alias_ref; int info; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__ const* const) ;
 scalar_t__ FUNC_1 (int ,int const) ;
 int FUNC_2 (int * const,TYPE_2__*) ;
 int FUNC_3 (TYPE_5__* const,TYPE_5__* const,TYPE_2__,TYPE_16__) ;
 TYPE_2__ FUNC_4 (TYPE_5__* const,int ,int ) ;
 int FUNC_5 (TYPE_5__* const,TYPE_2__,int ) ;

__attribute__((used)) static void FUNC_6(const ccv_nnc_symbolic_graph_backward_prep_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_symbolic_graph_t* const VAR_4, ccv_nnc_symbolic_graph_t* const VAR_5, ccv_array_t* const VAR_6)
{
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  const int VAR_8 = VAR_2[VAR_7].d;
  if (VAR_8 < 0)
   continue;
  const int VAR_9 = (!VAR_1->tensor_symbol_info[VAR_8].alias_ref) ? VAR_8 : VAR_1->tensor_symbol_info[VAR_8].alias_ref - 1;
  const ccv_nnc_autograd_tensor_version_t* const VAR_10 = VAR_1->autograd_tensor_versions + VAR_9;
  const int VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 >= 0)
  {

   const int VAR_12 = ((ccv_nnc_tensor_ref_t*)FUNC_1(VAR_10->ref_version, VAR_11))->d;
   ccv_nnc_autograd_tensor_symbol_t* const VAR_13 = (ccv_nnc_autograd_tensor_symbol_t*)FUNC_1(VAR_1->autograd_tensor_symbols, VAR_12);
   const ccv_nnc_tensor_symbol_info_t* const VAR_14 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_5->tensor_symbol_info, VAR_13->symbol.d);

   if (!VAR_14->p_ref)
   {
    ccv_nnc_tensor_symbol_t VAR_15 = FUNC_4(VAR_4, VAR_1->tensor_symbol_info[VAR_9].info, 0);
    FUNC_5(VAR_4, VAR_15, VAR_0);
    FUNC_2(VAR_6, &VAR_15);
    FUNC_3(VAR_4, VAR_5, VAR_15, VAR_13->symbol);
   }
  }
 }
}
