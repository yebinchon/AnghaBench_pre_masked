
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int dim_count; int* dim; scalar_t__* data; } ;
typedef TYPE_1__ ccv_nnc_tape_exec_data_array_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (scalar_t__* const,scalar_t__* const,int ,scalar_t__ const* const,int const,int*,int const) ;
 int FUNC_2 (int) ;
 int* FUNC_3 (int*,int) ;
 int FUNC_4 (int const,int) ;

__attribute__((used)) static void FUNC_5(ccv_nnc_tape_exec_data_array_t* const VAR_0, const uint64_t* const VAR_1, const int VAR_2)
{
 const int VAR_3 = FUNC_4(VAR_2, VAR_0->dim_count);
 int VAR_4;
 int VAR_5 = 1;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  int VAR_6 = (VAR_4 < VAR_0->dim_count) ? VAR_0->dim[VAR_4] : 1;
  int VAR_7 = (VAR_4 < VAR_2) ? (int)(VAR_1[VAR_4] + 1) : 1;
  VAR_5 *= FUNC_4(VAR_6, VAR_7);
 }
 VAR_0->dim = FUNC_3(VAR_0->dim, sizeof(int) * FUNC_0(VAR_3) + sizeof(uint64_t) * VAR_5);
 uint64_t* const VAR_8 = (uint64_t*)(VAR_0->dim + FUNC_0(VAR_0->dim_count));
 uint64_t* const VAR_9 = (uint64_t*)(VAR_0->dim + FUNC_0(VAR_3));



 FUNC_2(VAR_2 > 0);
 FUNC_2(VAR_0->dim_count > 0);
 FUNC_1(VAR_8, VAR_9, 0, VAR_1, VAR_2, VAR_0->dim, VAR_0->dim_count);
 VAR_0->data = VAR_9;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  int VAR_10 = (VAR_4 < VAR_0->dim_count) ? VAR_0->dim[VAR_4] : 1;
  int VAR_11 = (VAR_4 < VAR_2) ? (int)(VAR_1[VAR_4] + 1) : 1;
  VAR_0->dim[VAR_4] = FUNC_4(VAR_10, VAR_11);
 }
 VAR_0->dim_count = VAR_3;
}
