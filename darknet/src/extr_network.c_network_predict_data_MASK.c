
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int outputs; int batch; } ;
typedef TYPE_2__ network ;
struct TYPE_12__ {float** vals; } ;
typedef TYPE_3__ matrix ;
struct TYPE_10__ {int rows; int cols; int * vals; } ;
struct TYPE_13__ {TYPE_1__ X; } ;
typedef TYPE_4__ data ;


 float* FUNC_0 (int,int) ;
 int FUNC_1 (float*) ;
 TYPE_3__ FUNC_2 (int,int) ;
 int FUNC_3 (float*,int ,int) ;
 float* FUNC_4 (TYPE_2__*,float*) ;

matrix FUNC_5(network *VAR_0, data VAR_1)
{
    int VAR_2,VAR_3,VAR_4;
    int VAR_5 = VAR_0->outputs;
    matrix VAR_6 = FUNC_2(VAR_1.X.rows, VAR_5);
    float *VAR_7 = FUNC_0(VAR_0->batch*VAR_1.X.cols, sizeof(float));
    for(VAR_2 = 0; VAR_2 < VAR_1.X.rows; VAR_2 += VAR_0->batch){
        for(VAR_4 = 0; VAR_4 < VAR_0->batch; ++VAR_4){
            if(VAR_2+VAR_4 == VAR_1.X.rows) break;
            FUNC_3(VAR_7+VAR_4*VAR_1.X.cols, VAR_1.X.vals[VAR_2+VAR_4], VAR_1.X.cols*sizeof(float));
        }
        float *VAR_8 = FUNC_4(VAR_0, VAR_7);
        for(VAR_4 = 0; VAR_4 < VAR_0->batch; ++VAR_4){
            if(VAR_2+VAR_4 == VAR_1.X.rows) break;
            for(VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3){
                VAR_6.vals[VAR_2+VAR_4][VAR_3] = VAR_8[VAR_3+VAR_4*VAR_5];
            }
        }
    }
    FUNC_1(VAR_7);
    return VAR_6;
}
