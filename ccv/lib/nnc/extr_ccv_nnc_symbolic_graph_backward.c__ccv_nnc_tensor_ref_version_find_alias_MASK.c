
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int* dim; } ;
struct TYPE_12__ {scalar_t__ alias_ref; int* inc; int* ofs; TYPE_1__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_13__ {TYPE_5__ const* const alias_registry; } ;
typedef TYPE_3__ ccv_nnc_tensor_ref_t ;
struct TYPE_14__ {size_t d; } ;
typedef TYPE_4__ ccv_nnc_autograd_tensor_symbol_t ;
struct TYPE_15__ {int rnum; } ;
typedef TYPE_5__ ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__ const* const,int const) ;
 scalar_t__ FUNC_2 (int const*,int*,int) ;

__attribute__((used)) static int FUNC_3(const ccv_nnc_tensor_ref_t* const VAR_1, const ccv_array_t* const VAR_2, const ccv_nnc_tensor_symbol_info_t* const VAR_3, const ccv_nnc_tensor_symbol_info_t* const VAR_4)
{
 FUNC_0(VAR_4->alias_ref > 0);

 if (!VAR_1->alias_registry)
  return -1;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_1->alias_registry->rnum; VAR_5++)
 {
  const int VAR_6 = *(int*)FUNC_1(VAR_1->alias_registry, VAR_5);
  FUNC_0(VAR_6 < VAR_2->rnum);
  ccv_nnc_autograd_tensor_symbol_t* VAR_7 = (ccv_nnc_autograd_tensor_symbol_t*)FUNC_1(VAR_2, VAR_6);

  FUNC_0(VAR_3[VAR_7->d].alias_ref);
  const int* VAR_8 = VAR_3[VAR_7->d].inc;
  const int* VAR_9 = VAR_3[VAR_7->d].ofs;
  const int* VAR_10 = VAR_3[VAR_7->d].info.dim;

  if (FUNC_2(VAR_8, VAR_4->inc, sizeof(int) * VAR_0) == 0 &&
   FUNC_2(VAR_9, VAR_4->ofs, sizeof(int) * VAR_0) == 0 &&
   FUNC_2(VAR_10, VAR_4->info.dim, sizeof(int) * VAR_0) == 0)
   return VAR_6;
 }
 return -1;
}
