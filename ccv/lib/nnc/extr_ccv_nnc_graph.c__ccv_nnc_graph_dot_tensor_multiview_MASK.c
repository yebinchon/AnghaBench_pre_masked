
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int* dim; } ;
struct TYPE_15__ {TYPE_1__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
struct TYPE_16__ {int type; } ;
typedef TYPE_3__ ccv_nnc_tensor_multiview_t ;
struct TYPE_17__ {size_t index; } ;
typedef TYPE_4__ ccv_nnc_tensor_dot_t ;
struct TYPE_18__ {int* remap; int* rename_index; TYPE_4__* dots; } ;
typedef TYPE_5__ ccv_nnc_tensor_dot_recovery_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 int const VAR_0 ;
 int VAR_1 ;
 TYPE_2__** FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__ const* const) ;
 int FUNC_4 (TYPE_3__ const* const,TYPE_5__ const,int const,int*,int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char,int *) ;
 int FUNC_7 (char*,int *) ;

__attribute__((used)) static void FUNC_8(const ccv_nnc_tensor_multiview_t* const VAR_2, const ccv_nnc_tensor_dot_recovery_t VAR_3, const int VAR_4, const int VAR_5, int* VAR_6, FILE* VAR_7)
{

 if (VAR_4 == VAR_0)
  FUNC_6('{', VAR_7);
 const ccv_nnc_tensor_dot_t* const VAR_8 = VAR_3.dots + VAR_3.remap[*VAR_6];
 FUNC_5(VAR_7, "multiview%d", VAR_3.rename_index[VAR_8->index]);
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  FUNC_6('\'', VAR_7);
 if (FUNC_0(VAR_2->type))
  FUNC_7(" (t)", VAR_7);
 if (VAR_4 == VAR_0)
 {
  FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7);
  const ccv_nnc_tensor_t* VAR_10 = (ccv_nnc_tensor_t*)VAR_2;
  while (FUNC_1(VAR_10))
   VAR_10 = FUNC_2((ccv_nnc_tensor_multiview_t*)VAR_10)[0];
  FUNC_5(VAR_7, "|%d", VAR_10->info.dim[0]);
  for (VAR_9 = 1; VAR_9 < VAR_1 && VAR_10->info.dim[VAR_9]; VAR_9++)
   FUNC_5(VAR_7, "x%d", VAR_10->info.dim[VAR_9]);
  FUNC_6('}', VAR_7);
 } else
  *VAR_6 += FUNC_3(VAR_2);
}
