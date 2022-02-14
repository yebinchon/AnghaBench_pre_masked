
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int kind; int repeat; } ;
typedef TYPE_3__ ccv_nnc_tensor_multiview_t ;
struct TYPE_14__ {size_t zone; } ;
typedef TYPE_4__ ccv_nnc_tensor_dot_t ;
struct TYPE_15__ {int* remap; int* rename_zone; TYPE_4__* dots; } ;
typedef TYPE_5__ ccv_nnc_tensor_dot_recovery_t ;
struct TYPE_12__ {int dim; } ;
struct TYPE_11__ {int u8; } ;
struct TYPE_16__ {int type; TYPE_2__ info; TYPE_1__ data; } ;
typedef int FILE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 TYPE_8__** FUNC_2 (TYPE_3__ const* const) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static void FUNC_7(const ccv_nnc_tensor_multiview_t* const VAR_2, const ccv_nnc_tensor_dot_recovery_t VAR_3, const int VAR_4, int* VAR_5, FILE* VAR_6)
{
 const int VAR_7 = VAR_2->kind + VAR_2->repeat;
 int VAR_8, VAR_9;
 FUNC_6("|{", VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  if (FUNC_1(FUNC_2(VAR_2)[VAR_8]))
  {
   FUNC_4(VAR_6, "{%d", VAR_8);
   if (VAR_2->kind == VAR_0 || (VAR_2->kind == VAR_1 && VAR_8 > 0))
    FUNC_5('*', VAR_6);
   FUNC_7((ccv_nnc_tensor_multiview_t*)FUNC_2(VAR_2)[VAR_8], VAR_3, VAR_4, VAR_5, VAR_6);
   if (VAR_8 == VAR_7 - 1)
    FUNC_5('}', VAR_6);
   else
    FUNC_6("}|", VAR_6);
  } else {
   FUNC_4(VAR_6, "{%d", VAR_8);
   if (VAR_2->kind == VAR_0 || (VAR_2->kind == VAR_1 && VAR_8 > 0))
    FUNC_5('*', VAR_6);
   const ccv_nnc_tensor_dot_t* const VAR_10 = VAR_3.dots + VAR_3.remap[*VAR_5];
   FUNC_4(VAR_6, "|zone%d", VAR_3.rename_zone[VAR_10->zone]);
   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
    FUNC_5('\'', VAR_6);
   uintptr_t VAR_11 = (uintptr_t)FUNC_2(VAR_2)[VAR_8]->data.u8;

   size_t VAR_12 = FUNC_3(FUNC_2(VAR_2)[VAR_8]->info.dim) * FUNC_0(FUNC_2(VAR_2)[VAR_8]->type);

   FUNC_4(VAR_6, "|{%#010x|%#010x}", (uint32_t)VAR_11, (uint32_t)(VAR_11 + VAR_12 - 1));
   ++(*VAR_5);
   if (VAR_8 == VAR_7 - 1)
    FUNC_5('}', VAR_6);
   else
    FUNC_6("}|", VAR_6);
  }
 FUNC_5('}', VAR_6);
}
