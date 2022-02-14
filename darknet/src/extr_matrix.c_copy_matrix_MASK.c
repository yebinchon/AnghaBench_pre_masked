
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int cols; void** vals; int member_0; } ;
typedef TYPE_1__ matrix ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,void*,int,void*,int) ;

matrix FUNC_2(matrix VAR_0)
{
    matrix VAR_1 = {0};
    VAR_1.rows = VAR_0.rows;
    VAR_1.cols = VAR_0.cols;
    VAR_1.vals = FUNC_0(VAR_1.rows, sizeof(float *));
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_1.rows; ++VAR_2){
        VAR_1.vals[VAR_2] = FUNC_0(VAR_1.cols, sizeof(float));
        FUNC_1(VAR_1.cols, VAR_0.vals[VAR_2], 1, VAR_1.vals[VAR_2], 1);
    }
    return VAR_1;
}
