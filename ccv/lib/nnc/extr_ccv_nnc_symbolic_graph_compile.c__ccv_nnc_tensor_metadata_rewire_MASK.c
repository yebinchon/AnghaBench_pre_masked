
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int kind; int repeat; TYPE_3__* sp; struct TYPE_10__* p; struct TYPE_10__* alias_ref; } ;
typedef TYPE_1__ ccv_nnc_tensor_t ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;
typedef int ccv_array_t ;
struct TYPE_11__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_1__* const) ;
 scalar_t__ FUNC_1 (TYPE_1__* const) ;
 TYPE_1__** FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int const* const,int const) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static ccv_nnc_tensor_t* FUNC_6(const ccv_array_t* const VAR_0, ccv_nnc_tensor_t* const VAR_1)
{

 if (!FUNC_1(VAR_1))
  return VAR_1;
 ccv_nnc_tensor_t* const VAR_2 = FUNC_3(VAR_0, (int)(intptr_t)VAR_1);
 if (VAR_2->alias_ref && FUNC_1(VAR_2->alias_ref))
 {
  const int VAR_3 = VAR_2->alias_ref;
  VAR_2->alias_ref = (uintptr_t)FUNC_3(VAR_0, (int)VAR_2->alias_ref);
  FUNC_6(VAR_0, (ccv_nnc_tensor_t*)(intptr_t)VAR_3);
 }
 if (FUNC_0(VAR_2))
 {
  ccv_nnc_tensor_multiview_t* VAR_4 = (ccv_nnc_tensor_multiview_t*)VAR_2;
  int VAR_5;
  const int VAR_6 = VAR_4->kind + VAR_4->repeat;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  {
   if (FUNC_1(FUNC_2(VAR_4)[VAR_5]))
   {
    const int VAR_7 = (int)(intptr_t)FUNC_2(VAR_4)[VAR_5];
    FUNC_2(VAR_4)[VAR_5] = FUNC_3(VAR_0, (int)(intptr_t)FUNC_2(VAR_4)[VAR_5]);
    FUNC_6(VAR_0, (ccv_nnc_tensor_t*)(intptr_t)VAR_7);
   }
  }

  if (VAR_4->p && FUNC_1(VAR_4->p))
   VAR_4->p = (ccv_nnc_tensor_multiview_t*)FUNC_3(VAR_0, (int)(intptr_t)VAR_4->p);
  if (VAR_4->sp)
   for (VAR_5 = 0; VAR_5 < VAR_4->sp->rnum; VAR_5++)
   {
    ccv_nnc_tensor_t** const VAR_8 = (ccv_nnc_tensor_t**)FUNC_5(VAR_4->sp, VAR_5);
    if (FUNC_1(*VAR_8))
    {
     const int VAR_9 = (int)(intptr_t)*VAR_8;
     *VAR_8 = FUNC_3(VAR_0, VAR_9);
     FUNC_4(!FUNC_0(*VAR_8));
     FUNC_6(VAR_0, (ccv_nnc_tensor_t*)(intptr_t)VAR_9);
    }
   }
 }
 return VAR_2;
}
