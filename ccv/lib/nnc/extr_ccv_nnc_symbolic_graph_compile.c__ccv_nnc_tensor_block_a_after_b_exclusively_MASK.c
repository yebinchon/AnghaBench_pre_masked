
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ccv_sparse_matrix_t ;
struct TYPE_8__ {scalar_t__* i32; } ;
typedef TYPE_1__ ccv_numeric_data_t ;
struct TYPE_9__ {int rnum; } ;
typedef TYPE_2__ ccv_array_t ;


 int FUNC_0 (TYPE_2__ const* const) ;
 scalar_t__ FUNC_1 (TYPE_2__ const* const,int) ;
 TYPE_1__ FUNC_2 (int const* const,int,int) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(const ccv_sparse_matrix_t* const VAR_0, const ccv_array_t* const VAR_1, const ccv_array_t* const VAR_2)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 int VAR_3, VAR_4, VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->rnum; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_2->rnum; VAR_4++)
  {
   ccv_numeric_data_t VAR_6 = FUNC_2(VAR_0, *(int*)FUNC_1(VAR_1, VAR_3), *(int*)FUNC_1(VAR_2, VAR_4));
   if (!VAR_6.i32 || VAR_6.i32[0] == 0)
    return 0;
   VAR_5 = FUNC_3(VAR_6.i32[0], VAR_5);
  }


 return VAR_5;
}
