
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_4__ {int kind; int repeat; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;


 scalar_t__ FUNC_0 (int *) ;
 int ** FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static ccv_nnc_tensor_t* FUNC_2(ccv_nnc_tensor_multiview_t* const VAR_0)
{
 ccv_nnc_tensor_t* VAR_1 = (ccv_nnc_tensor_t*)VAR_0;
 while (FUNC_0(VAR_1))
 {
  ccv_nnc_tensor_multiview_t* VAR_2 = (ccv_nnc_tensor_multiview_t*)VAR_1;
  const int VAR_3 = 0;
  const int VAR_4 = VAR_2->kind;
  const int VAR_5 = VAR_2->repeat;

  VAR_1 = FUNC_1(VAR_2)[VAR_3 >= VAR_4 ? ((VAR_3 - VAR_4) % VAR_5) + VAR_4 : VAR_3];
 }
 return VAR_1;
}
