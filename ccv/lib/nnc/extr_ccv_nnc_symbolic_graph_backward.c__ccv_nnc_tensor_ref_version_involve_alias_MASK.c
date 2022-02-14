
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ alias_ref; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_13__ {TYPE_4__ const* const alias_registry; } ;
typedef TYPE_2__ ccv_nnc_tensor_ref_t ;
struct TYPE_14__ {int d; } ;
typedef TYPE_3__ ccv_nnc_autograd_tensor_symbol_t ;
struct TYPE_15__ {int rnum; } ;
typedef TYPE_4__ ccv_array_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__ const* const,int const) ;
 scalar_t__ FUNC_2 (TYPE_1__ const* const,TYPE_1__ const* const) ;

__attribute__((used)) static int FUNC_3(const ccv_nnc_tensor_ref_t* const VAR_0, const ccv_array_t* const VAR_1, const ccv_nnc_tensor_symbol_info_t* const VAR_2, const ccv_nnc_tensor_symbol_info_t* const VAR_3)
{
 FUNC_0(VAR_3->alias_ref > 0);

 if (!VAR_0->alias_registry)
  return 1;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0->alias_registry->rnum; VAR_4++)
 {
  const int VAR_5 = *(int*)FUNC_1(VAR_0->alias_registry, VAR_4);
  FUNC_0(VAR_5 < VAR_1->rnum);
  ccv_nnc_autograd_tensor_symbol_t* VAR_6 = (ccv_nnc_autograd_tensor_symbol_t*)FUNC_1(VAR_1, VAR_5);
  if (FUNC_2(VAR_2 + VAR_6->d, VAR_3))
   return 1;
 }

 return 0;
}
