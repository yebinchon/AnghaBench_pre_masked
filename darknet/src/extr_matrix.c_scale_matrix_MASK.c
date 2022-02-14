
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; int cols; float** vals; } ;
typedef TYPE_1__ matrix ;



void FUNC_0(matrix VAR_0, float VAR_1)
{
    int VAR_2,VAR_3;
    for(VAR_2 = 0; VAR_2 < VAR_0.rows; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < VAR_0.cols; ++VAR_3){
            VAR_0.vals[VAR_2][VAR_3] *= VAR_1;
        }
    }
}
