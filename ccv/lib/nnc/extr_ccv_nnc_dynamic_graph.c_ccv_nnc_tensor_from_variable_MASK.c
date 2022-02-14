
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ u8; } ;
struct TYPE_16__ {scalar_t__ off; TYPE_1__ data; } ;
typedef TYPE_3__ ccv_nnc_tensor_view_t ;
typedef TYPE_4__* ccv_nnc_tensor_variable_t ;
typedef int ccv_nnc_tensor_t ;
struct TYPE_18__ {int vars; } ;
typedef TYPE_5__ ccv_nnc_dynamic_graph_t ;
struct TYPE_19__ {scalar_t__* dim; } ;
struct TYPE_17__ {int alias_ref; scalar_t__* ofs; scalar_t__* inc; TYPE_3__* tensor_view; TYPE_7__ info; } ;
struct TYPE_15__ {scalar_t__ u8; } ;
struct TYPE_13__ {TYPE_2__ data; } ;


 int FUNC_0 (TYPE_3__* const) ;
 int VAR_0 ;
 TYPE_10__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int const) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_7__,int ) ;
 TYPE_3__* FUNC_5 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__*,int) ;

ccv_nnc_tensor_t* FUNC_7(ccv_nnc_dynamic_graph_t* const VAR_1, const ccv_nnc_tensor_variable_t VAR_2)
{
 if (VAR_2->tensor_view)
 {
  if (VAR_2->alias_ref)
  {
   const int VAR_3 = VAR_2->alias_ref - 1;
   FUNC_2(VAR_3 >= 0);
   ccv_nnc_tensor_variable_t VAR_4 = *(ccv_nnc_tensor_variable_t*)FUNC_3(VAR_1->vars, VAR_3);
   ccv_nnc_tensor_view_t* const VAR_5 = VAR_2->tensor_view;
   FUNC_2(!FUNC_0(VAR_5));

   VAR_5->data.u8 = FUNC_1(VAR_4->tensor_view)->data.u8 + VAR_5->off;
  }
  return (ccv_nnc_tensor_t*)FUNC_1(VAR_2->tensor_view);
 }
 if (!VAR_2->alias_ref)
 {
  VAR_2->tensor_view = (ccv_nnc_tensor_view_t*)FUNC_4(0, VAR_2->info, 0);
  return (ccv_nnc_tensor_t*)VAR_2->tensor_view;
 }
 const int VAR_6 = VAR_2->alias_ref - 1;
 FUNC_2(VAR_6 >= 0);
 ccv_nnc_tensor_variable_t VAR_7 = *(ccv_nnc_tensor_variable_t*)FUNC_3(VAR_1->vars, VAR_6);
 FUNC_2(!VAR_7->alias_ref);
 if (!VAR_7->tensor_view)
  VAR_7->tensor_view = (ccv_nnc_tensor_view_t*)FUNC_4(0, VAR_7->info, 0);
 int VAR_8 = 1;
 int VAR_9;
 for (VAR_9 = 0; VAR_8 && VAR_9 < VAR_0; VAR_9++)
  VAR_8 = (VAR_2->ofs[VAR_9] == 0);
 int VAR_10 = 1;
 for (VAR_9 = 0; VAR_10 && VAR_9 < VAR_0; VAR_9++)
  VAR_10 = (VAR_2->inc[VAR_9] == 0);
 if (!VAR_10)
  VAR_10 = (FUNC_6(VAR_2->inc, VAR_2->info.dim, sizeof(int) * VAR_0) == 0);
 if (VAR_8 && VAR_10)
  VAR_2->tensor_view = (ccv_nnc_tensor_view_t*)FUNC_4(FUNC_1(VAR_7->tensor_view)->data.u8, VAR_2->info, 0);
 else
  VAR_2->tensor_view = FUNC_5((ccv_nnc_tensor_t*)FUNC_1(VAR_7->tensor_view), VAR_2->info.dim, VAR_2->ofs, VAR_10 ? VAR_2->info.dim : VAR_2->inc);
 return (ccv_nnc_tensor_t*)VAR_2->tensor_view;
}
