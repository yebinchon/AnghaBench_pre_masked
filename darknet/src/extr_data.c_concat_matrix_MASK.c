
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rows; int * vals; int cols; } ;
typedef TYPE_1__ matrix ;


 int * FUNC_0 (int,int) ;

matrix FUNC_1(matrix VAR_0, matrix VAR_1)
{
    int VAR_2, VAR_3 = 0;
    matrix VAR_4;
    VAR_4.cols = VAR_0;
    VAR_4.rows = VAR_0+VAR_1;
    VAR_4.vals = FUNC_0(VAR_0 + VAR_1, sizeof(float*));
    for(VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2){
        VAR_4.vals[VAR_3++] = VAR_0[VAR_2];
    }
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        VAR_4.vals[VAR_3++] = VAR_1[VAR_2];
    }
    return VAR_4;
}
