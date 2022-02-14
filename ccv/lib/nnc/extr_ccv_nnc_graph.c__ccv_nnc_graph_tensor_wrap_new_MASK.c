
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
typedef int ccv_nnc_tensor_multiview_t ;
struct TYPE_3__ {int count; int ** tensors; scalar_t__ index; scalar_t__ update_required; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_wrap_t ;


 int FUNC_0 (int const* const) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static ccv_nnc_graph_tensor_wrap_t* FUNC_2(const ccv_nnc_tensor_multiview_t* const VAR_0)
{
 const int VAR_1 = FUNC_0(VAR_0);
 ccv_nnc_graph_tensor_wrap_t* VAR_2 = (ccv_nnc_graph_tensor_wrap_t*)FUNC_1(sizeof(ccv_nnc_graph_tensor_wrap_t) + sizeof(ccv_nnc_tensor_t*) * (VAR_1 - 1));
 VAR_2->update_required = 0;
 VAR_2->count = VAR_1;
 VAR_2->index = 0;
 VAR_2->tensors[0] = (ccv_nnc_tensor_t*)VAR_0;
 return VAR_2;
}
