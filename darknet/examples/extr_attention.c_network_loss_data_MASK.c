
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int batch; float* input; float* truth; int n; int outputs; TYPE_1__* layers; int delta; scalar_t__ train; } ;
typedef TYPE_4__ network ;
struct TYPE_16__ {float** vals; } ;
typedef TYPE_5__ matrix ;
struct TYPE_14__ {int cols; int * vals; } ;
struct TYPE_13__ {int rows; int cols; int * vals; } ;
struct TYPE_17__ {TYPE_3__ y; TYPE_2__ X; } ;
typedef TYPE_6__ data ;
struct TYPE_12__ {float* output; } ;


 float* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (float*) ;
 TYPE_5__ FUNC_3 (int,int) ;
 int FUNC_4 (float*,int) ;
 int FUNC_5 (float*,int ,int) ;
 float FUNC_6 (float*,int) ;

matrix FUNC_7(network *VAR_0, data VAR_1)
{
    int VAR_2,VAR_3;
    int VAR_4 = 1;
    matrix VAR_5 = FUNC_3(VAR_1.X.rows, VAR_4);
    float *VAR_6 = FUNC_0(VAR_0->batch*VAR_1.X.cols, sizeof(float));
    float *VAR_7 = FUNC_0(VAR_0->batch*VAR_1.y.cols, sizeof(float));
    for(VAR_2 = 0; VAR_2 < VAR_1.X.rows; VAR_2 += VAR_0->batch){
        for(VAR_3 = 0; VAR_3 < VAR_0->batch; ++VAR_3){
            if(VAR_2+VAR_3 == VAR_1.X.rows) break;
            FUNC_5(VAR_6+VAR_3*VAR_1.X.cols, VAR_1.X.vals[VAR_2+VAR_3], VAR_1.X.cols*sizeof(float));
            FUNC_5(VAR_7+VAR_3*VAR_1.y.cols, VAR_1.y.vals[VAR_2+VAR_3], VAR_1.y.cols*sizeof(float));
        }

        network VAR_8 = *VAR_0;
        VAR_0->input = VAR_6;
        VAR_0->truth = VAR_7;
        VAR_0->train = 0;
        VAR_0->delta = 0;
        FUNC_1(VAR_0);
        *VAR_0 = VAR_8;

        float *VAR_9 = VAR_0->layers[VAR_0->n-1].output;
        for(VAR_3 = 0; VAR_3 < VAR_0->batch; ++VAR_3){
            if(VAR_2+VAR_3 == VAR_1.X.rows) break;
            int VAR_10 = FUNC_4(VAR_7 + VAR_3*VAR_1.y.cols, 1000);
            float VAR_11 = FUNC_6(VAR_9 + VAR_3*VAR_0->outputs, VAR_0->outputs);
            VAR_5.vals[VAR_2+VAR_3][0] = -VAR_11;

        }
    }
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    return VAR_5;
}
