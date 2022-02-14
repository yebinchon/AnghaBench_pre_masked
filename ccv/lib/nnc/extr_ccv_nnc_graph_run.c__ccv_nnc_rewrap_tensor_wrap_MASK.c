
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {intptr_t anchor; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;
struct TYPE_7__ {int index; scalar_t__* tensors; } ;
typedef TYPE_2__ ccv_nnc_graph_tensor_wrap_t ;
struct TYPE_8__ {scalar_t__ pair; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_graph_t* const VAR_0, ccv_nnc_graph_tensor_wrap_t* const VAR_1)
{
 while (VAR_1->index > 0 && FUNC_0(VAR_1->tensors[VAR_1->index - 1]) &&
   (((ccv_nnc_tensor_multiview_t*)VAR_1->tensors[VAR_1->index - 1])->anchor == (intptr_t)VAR_0 ||
    ((ccv_nnc_tensor_multiview_t*)VAR_1->tensors[VAR_1->index - 1])->anchor == (intptr_t)VAR_0->pair))
  --VAR_1->index;
}
