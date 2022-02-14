
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* quant_matrix; } ;
typedef TYPE_1__ MadContext ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(MadContext *VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_2->quant_matrix[0] = (VAR_0[0]*VAR_1[0]) >> 11;
    for (VAR_4=1; VAR_4<64; VAR_4++)
        VAR_2->quant_matrix[VAR_4] = (VAR_0[VAR_4]*VAR_1[VAR_4]*VAR_3 + 32) >> 10;
}
