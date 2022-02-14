
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cols; int rows; scalar_t__** vals; } ;
typedef TYPE_1__ matrix ;


 int* FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (scalar_t__*,int,int,int*) ;

float FUNC_3(matrix VAR_0, matrix VAR_1, int VAR_2)
{
    int *VAR_3 = FUNC_0(VAR_2, sizeof(int));
    int VAR_4 = VAR_0.cols;
    int VAR_5,VAR_6;
    int VAR_7 = 0;
    for(VAR_5 = 0; VAR_5 < VAR_0.rows; ++VAR_5){
        FUNC_2(VAR_1.vals[VAR_5], VAR_4, VAR_2, VAR_3);
        for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
            int VAR_8 = VAR_3[VAR_6];
            if(VAR_0.vals[VAR_5][VAR_8]){
                ++VAR_7;
                break;
            }
        }
    }
    FUNC_1(VAR_3);
    return (float)VAR_7/VAR_0.rows;
}
