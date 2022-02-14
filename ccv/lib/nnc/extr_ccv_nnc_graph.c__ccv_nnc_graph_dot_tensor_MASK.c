
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int* inc; } ;
typedef TYPE_3__ ccv_nnc_tensor_view_t ;
struct TYPE_8__ {int* dim; int type; } ;
struct TYPE_7__ {int u8; } ;
struct TYPE_10__ {TYPE_2__ info; int type; TYPE_1__ data; } ;
typedef TYPE_4__ ccv_nnc_tensor_t ;
typedef int FILE ;


 int const FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__ const* const) ;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int const*) ;
 int FUNC_5 (int *,char*,int const,...) ;
 int FUNC_6 (char,int *) ;
 int FUNC_7 (char*,int *) ;

__attribute__((used)) static void FUNC_8(const int VAR_2, const ccv_nnc_tensor_t* const VAR_3, const int VAR_4, const int VAR_5, const int VAR_6, FILE* VAR_7)
{

 if (VAR_5 == VAR_0)
  FUNC_6('{', VAR_7);
 const int VAR_8 = FUNC_2(VAR_3);
 if (VAR_8)
  FUNC_5(VAR_7, "tensorview%d", VAR_2);
 else
  FUNC_5(VAR_7, "tensor%d", VAR_2);
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_6('\'', VAR_7);
 if (FUNC_1(VAR_3->type))
  FUNC_7(" (t)", VAR_7);
 if (VAR_5 == VAR_0)
 {
  const int VAR_10 = FUNC_3(VAR_3->info.type);
  FUNC_5(VAR_7, "|d%d|zone%d", VAR_10, VAR_4);
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   FUNC_6('\'', VAR_7);
  uintptr_t VAR_11 = (uintptr_t)VAR_3->data.u8;
  const int* VAR_12 = VAR_8 ? ((ccv_nnc_tensor_view_t*)(VAR_3))->inc : VAR_3->info.dim;

  size_t VAR_13 = (FUNC_4(VAR_12) - VAR_12[0] + VAR_3->info.dim[0]) * FUNC_0(VAR_3->type);

  FUNC_5(VAR_7, "|{%#010x|%#010x}|%d", (uint32_t)VAR_11, (uint32_t)(VAR_11 + VAR_13 - 1), VAR_3->info.dim[0]);
  for (VAR_9 = 1; VAR_9 < VAR_1 && VAR_3->info.dim[VAR_9]; VAR_9++)
   FUNC_5(VAR_7, "x%d", VAR_3->info.dim[VAR_9]);
  FUNC_6('}', VAR_7);
 }
}
