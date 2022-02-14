
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* dim; } ;
struct TYPE_6__ {int* inc; int* ofs; TYPE_1__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const,int) ;
 scalar_t__ FUNC_1 (int const,int) ;
 scalar_t__ FUNC_2 (int const*,int*,int) ;

int FUNC_3(const ccv_nnc_tensor_symbol_info_t* const VAR_1, const ccv_nnc_tensor_symbol_info_t* const VAR_2)
{
 int VAR_3;
 const int* VAR_4 = VAR_1->inc;

 if (FUNC_2(VAR_4, VAR_2->inc, sizeof(int) * VAR_0) != 0)
  return 1;
 const int* VAR_5 = VAR_1->ofs;
 const int* VAR_6 = VAR_1->info.dim;
 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_6[VAR_3] && VAR_2->info.dim[VAR_3]; VAR_3++)
  if (FUNC_1(VAR_5[VAR_3] + VAR_6[VAR_3], VAR_2->ofs[VAR_3] + VAR_2->info.dim[VAR_3]) <= FUNC_0(VAR_5[VAR_3], VAR_2->ofs[VAR_3]))
   return 0;
 return 1;
}
