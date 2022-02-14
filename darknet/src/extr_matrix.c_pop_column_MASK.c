
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; float** vals; int cols; } ;
typedef TYPE_1__ matrix ;


 float* FUNC_0 (int,int) ;

float *FUNC_1(matrix *VAR_0, int VAR_1)
{
    float *VAR_2 = FUNC_0(VAR_0->rows, sizeof(float));
    int VAR_3, VAR_4;
    for(VAR_3 = 0; VAR_3 < VAR_0->rows; ++VAR_3){
        VAR_2[VAR_3] = VAR_0->vals[VAR_3][VAR_1];
        for(VAR_4 = VAR_1; VAR_4 < VAR_0->cols-1; ++VAR_4){
            VAR_0->vals[VAR_3][VAR_4] = VAR_0->vals[VAR_3][VAR_4+1];
        }
    }
    --VAR_0->cols;
    return VAR_2;
}
