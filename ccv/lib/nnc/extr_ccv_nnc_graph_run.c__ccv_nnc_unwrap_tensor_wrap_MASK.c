
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int ccv_nnc_tensor_t ;
struct TYPE_7__ {intptr_t anchor; int kind; int repeat; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;
struct TYPE_8__ {size_t index; int update_required; size_t count; int ** tensors; } ;
typedef TYPE_2__ ccv_nnc_graph_tensor_wrap_t ;
struct TYPE_9__ {scalar_t__ pair; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;


 scalar_t__ FUNC_0 (int *) ;
 int ** FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_graph_t* const VAR_0, const int64_t VAR_1, const int64_t VAR_2, ccv_nnc_graph_tensor_wrap_t* const VAR_3)
{
 ccv_nnc_tensor_t* VAR_4 = VAR_3->tensors[VAR_3->index];
 while (FUNC_0(VAR_4) &&
     (((ccv_nnc_tensor_multiview_t*)VAR_4)->anchor == (intptr_t)VAR_0 ||
   ((ccv_nnc_tensor_multiview_t*)VAR_4)->anchor == (intptr_t)VAR_0->pair))
 {

  const int VAR_5 = (int)((((ccv_nnc_tensor_multiview_t*)VAR_4)->anchor == (intptr_t)VAR_0) ? VAR_1 : VAR_2);
  ccv_nnc_tensor_multiview_t* VAR_6 = (ccv_nnc_tensor_multiview_t*)VAR_4;
  const int VAR_7 = VAR_6->kind;
  const int VAR_8 = VAR_6->repeat;
  VAR_4 = FUNC_1(VAR_6)[VAR_5 >= VAR_7 ? ((VAR_5 - VAR_7) % VAR_8) + VAR_7 : VAR_5];

  if (!FUNC_0(VAR_4))
   VAR_3->update_required = 1;
  ++VAR_3->index;
  VAR_3->tensors[VAR_3->index] = VAR_4;
  FUNC_2(VAR_3->index < VAR_3->count);
 }
}
