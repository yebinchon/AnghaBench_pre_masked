
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; float** vals; int cols; } ;
struct TYPE_5__ {TYPE_1__ y; } ;
typedef TYPE_2__ data ;


 float* FUNC_0 (float*,int) ;

void FUNC_1(data *VAR_0, int VAR_1, float VAR_2)
{
    int VAR_3, VAR_4;
    for(VAR_3 = 0; VAR_3 < VAR_0->y.rows; ++VAR_3){
        VAR_0->y.vals[VAR_3] = FUNC_0(VAR_0->y.vals[VAR_3], (VAR_0->y.cols+VAR_1)*sizeof(float));
        for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
            VAR_0->y.vals[VAR_3][VAR_0->y.cols + VAR_4] = VAR_2;
        }
    }
    VAR_0->y.cols += VAR_1;
}
