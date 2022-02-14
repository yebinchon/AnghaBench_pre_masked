
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int cols; scalar_t__** vals; } ;
typedef TYPE_1__ matrix ;


 int FUNC_0 (int) ;

void FUNC_1(matrix VAR_0, matrix VAR_1)
{
    FUNC_0(VAR_0.rows == VAR_1.rows && VAR_0.cols == VAR_1.cols);
    int VAR_2,VAR_3;
    for(VAR_2 = 0; VAR_2 < VAR_0.rows; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < VAR_0.cols; ++VAR_3){
            VAR_1.vals[VAR_2][VAR_3] += VAR_0.vals[VAR_2][VAR_3];
        }
    }
}
