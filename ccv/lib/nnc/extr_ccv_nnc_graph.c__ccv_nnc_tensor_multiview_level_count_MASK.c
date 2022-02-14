
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_5__ {int kind; int repeat; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;


 int FUNC_0 (TYPE_1__ const* const) ;
 int ** FUNC_1 (TYPE_1__ const* const) ;
 int * VAR_0 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(const ccv_nnc_tensor_multiview_t* const VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 1;
 const int VAR_2 = VAR_1->kind + VAR_1->repeat;
 int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  ccv_nnc_tensor_t* VAR_5 = FUNC_1(VAR_1)[VAR_3];
  if (VAR_5 == VAR_0)
   VAR_4 = FUNC_2(VAR_4, 1);
  else
   VAR_4 = FUNC_2(VAR_4, FUNC_3((ccv_nnc_tensor_multiview_t*)VAR_5));
 }
 return VAR_4 + 1;
}
