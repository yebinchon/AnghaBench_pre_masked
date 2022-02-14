
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tape_exec_data_array_t ;
struct TYPE_5__ {int rnum; } ;
typedef TYPE_1__ ccv_array_t ;


 scalar_t__ FUNC_0 (TYPE_1__* const,int) ;
 int FUNC_1 (TYPE_1__* const,int) ;
 int FUNC_2 (int * const,int ,int) ;

__attribute__((used)) static void FUNC_3(ccv_array_t* const VAR_0, int* const VAR_1, ccv_nnc_tape_exec_data_array_t** const VAR_2)
{
 int VAR_3 = VAR_0->rnum;
 FUNC_1(VAR_0, VAR_3 + 1);
 *VAR_1 = (VAR_3 << 1) | 1;
 ccv_nnc_tape_exec_data_array_t* const VAR_4 = (ccv_nnc_tape_exec_data_array_t*)FUNC_0(VAR_0, VAR_3);
 FUNC_2(VAR_4, 0, sizeof(ccv_nnc_tape_exec_data_array_t));
 *VAR_2 = VAR_4;
}
