
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

matrix FUNC_5(network *VAR_0, data VAR_1, int VAR_2)
{
    int VAR_3,VAR_4,VAR_5,VAR_6;
    int VAR_7 = VAR_0->outputs;
    matrix VAR_8 = FUNC_2(VAR_1.X.rows, VAR_7);
    float *VAR_9 = FUNC_0(VAR_0->batch*VAR_1.X.rows, sizeof(float));
    for(VAR_3 = 0; VAR_3 < VAR_1.X.rows; VAR_3 += VAR_0->batch){
        for(VAR_5 = 0; VAR_5 < VAR_0->batch; ++VAR_5){
            if(VAR_3+VAR_5 == VAR_1.X.rows) break;
            FUNC_3(VAR_9+VAR_5*VAR_1.X.cols, VAR_1.X.vals[VAR_3+VAR_5], VAR_1.X.cols*sizeof(float));
        }
        for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
            float *VAR_10 = FUNC_4(VAR_0, VAR_9);
            for(VAR_5 = 0; VAR_5 < VAR_0->batch; ++VAR_5){
                if(VAR_3+VAR_5 == VAR_1.X.rows) break;
                for(VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4){
                    VAR_8.vals[VAR_3+VAR_5][VAR_4] += VAR_10[VAR_4+VAR_5*VAR_7]/VAR_2;
                }
            }
        }
    }
    FUNC_1(VAR_9);
    return VAR_8;
}
