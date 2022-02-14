
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int kind; int repeat; } ;
typedef TYPE_3__ ccv_nnc_tensor_multiview_t ;
struct TYPE_13__ {int name; uintptr_t start_ptr; uintptr_t tensor_ref; size_t end_ptr; } ;
typedef TYPE_4__ ccv_nnc_tensor_dot_t ;
struct TYPE_11__ {int dim; } ;
struct TYPE_10__ {scalar_t__ u8; } ;
struct TYPE_14__ {int type; TYPE_2__ info; TYPE_1__ data; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 TYPE_7__** FUNC_2 (TYPE_3__ const* const) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const ccv_nnc_tensor_multiview_t* const VAR_0, ccv_nnc_tensor_dot_t* const VAR_1, int* VAR_2)
{
 const int VAR_3 = VAR_0->kind + VAR_0->repeat;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (FUNC_1(FUNC_2(VAR_0)[VAR_4]))
   FUNC_4((ccv_nnc_tensor_multiview_t*)FUNC_2(VAR_0)[VAR_4], VAR_1, VAR_2);
  else {
   VAR_1[*VAR_2].name = *VAR_2;
   VAR_1[*VAR_2].start_ptr = (uintptr_t)FUNC_2(VAR_0)[VAR_4]->data.u8;

   VAR_1[*VAR_2].tensor_ref = VAR_1[*VAR_2].start_ptr;
   const size_t VAR_5 = FUNC_3(FUNC_2(VAR_0)[VAR_4]->info.dim) * FUNC_0(FUNC_2(VAR_0)[VAR_4]->type);
   VAR_1[*VAR_2].end_ptr = VAR_1[*VAR_2].start_ptr + VAR_5 - 1;
   ++(*VAR_2);
  }
}
