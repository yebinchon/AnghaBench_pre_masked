
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; int cols; void** vals; } ;
typedef TYPE_1__ matrix ;


 void* FUNC_0 (int,int) ;

matrix FUNC_1(int VAR_0, int VAR_1)
{
    int VAR_2;
    matrix VAR_3;
    VAR_3.rows = VAR_0;
    VAR_3.cols = VAR_1;
    VAR_3.vals = FUNC_0(VAR_3.rows, sizeof(float *));
    for(VAR_2 = 0; VAR_2 < VAR_3.rows; ++VAR_2){
        VAR_3.vals[VAR_2] = FUNC_0(VAR_3.cols, sizeof(float));
    }
    return VAR_3;
}
