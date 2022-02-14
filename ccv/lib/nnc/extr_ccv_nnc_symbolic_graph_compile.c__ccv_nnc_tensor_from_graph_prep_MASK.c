
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_5__ {TYPE_1__* tensor_arena; int while_count_tensor; struct TYPE_5__* p; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_prep_t ;
struct TYPE_4__ {int tensor_metadata; int ** vt_tensors; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int const VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ccv_nnc_tensor_t* FUNC_4(const ccv_nnc_symbolic_graph_prep_t* const VAR_1, const int VAR_2)
{
 if (VAR_2 >= 0)
  return VAR_1->tensor_arena->vt_tensors[VAR_2];
 if (VAR_2 == VAR_0)
  return 0;
 FUNC_3(FUNC_1(VAR_2));
 const ccv_nnc_symbolic_graph_prep_t* VAR_3 = VAR_1;
 int VAR_4;
 const int VAR_5 = FUNC_0(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_3 = VAR_3->p;
 FUNC_3(VAR_3->while_count_tensor);
 return (ccv_nnc_tensor_t*)FUNC_2(VAR_3->tensor_arena->tensor_metadata, (0 << 1) + 1);
}
