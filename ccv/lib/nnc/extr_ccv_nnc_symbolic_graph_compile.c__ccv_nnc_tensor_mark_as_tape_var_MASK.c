
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ ccv_nnc_tensor_t ;
struct TYPE_8__ {int repeat; int kind; int type; } ;
typedef TYPE_2__ ccv_nnc_tensor_multiview_t ;


 int FUNC_0 (TYPE_1__* const) ;
 TYPE_1__** FUNC_1 (TYPE_2__* const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(ccv_nnc_tensor_t* const VAR_1)
{
 if (!FUNC_0(VAR_1))
  VAR_1->type |= VAR_0;
 else {
  ccv_nnc_tensor_multiview_t* const VAR_2 = (ccv_nnc_tensor_multiview_t*)VAR_1;
  VAR_2->type |= VAR_0;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2->repeat + VAR_2->kind; VAR_3++)
   FUNC_2(FUNC_1(VAR_2)[VAR_3]);
 }
}
