
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int * vals; int cols; } ;
typedef TYPE_1__ matrix ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 () ;

matrix FUNC_2(matrix *VAR_0, int VAR_1)
{
    int VAR_2;
    matrix VAR_3;
    VAR_3.rows = VAR_1;
    VAR_3.cols = VAR_0->cols;
    VAR_3.vals = FUNC_0(VAR_3.rows, sizeof(float *));
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        int VAR_4 = FUNC_1()%VAR_0->rows;
        VAR_3.vals[VAR_2] = VAR_0->vals[VAR_4];
        VAR_0->vals[VAR_4] = VAR_0->vals[--(VAR_0->rows)];
    }
    return VAR_3;
}
