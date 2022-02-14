
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_tape_exec_data_array_t ;
struct TYPE_4__ {int const rnum; } ;
typedef TYPE_1__ ccv_array_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const* const,int const) ;

__attribute__((used)) static ccv_nnc_tape_exec_data_array_t* FUNC_2(const ccv_array_t* const VAR_0, const int VAR_1)
{
 FUNC_0((VAR_1 >> 1) <= VAR_0->rnum);
 return (ccv_nnc_tape_exec_data_array_t*)FUNC_1(VAR_0, VAR_1 >> 1);
}
