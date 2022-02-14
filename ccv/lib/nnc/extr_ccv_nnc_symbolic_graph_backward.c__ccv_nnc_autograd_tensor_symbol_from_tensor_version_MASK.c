
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d; } ;
typedef TYPE_1__ ccv_nnc_tensor_ref_t ;
struct TYPE_5__ {int c; int * const ref_version; } ;
typedef TYPE_2__ ccv_nnc_autograd_tensor_version_t ;
typedef int ccv_nnc_autograd_tensor_symbol_t ;
typedef int ccv_array_t ;


 int FUNC_0 (int * const) ;
 scalar_t__ FUNC_1 (int * const,int ) ;

__attribute__((used)) static ccv_nnc_autograd_tensor_symbol_t* FUNC_2(ccv_array_t* const VAR_0, const ccv_nnc_autograd_tensor_version_t* const VAR_1)
{
 FUNC_0(VAR_1->ref_version);
 const ccv_nnc_tensor_ref_t* const VAR_2 = (ccv_nnc_tensor_ref_t*)FUNC_1(VAR_1->ref_version, VAR_1->c);
 return (ccv_nnc_autograd_tensor_symbol_t*)FUNC_1(VAR_0, VAR_2->d);
}
