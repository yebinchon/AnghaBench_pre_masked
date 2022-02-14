
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float* output; int batch; int w; int h; int n; int classes; int * mask; int biases; } ;
typedef TYPE_1__ layer ;
struct TYPE_9__ {float objectness; int classes; float* prob; int bbox; } ;
typedef TYPE_2__ detection ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_2__*,int,int,int,int,int,int) ;
 int FUNC_2 (TYPE_1__,int ,int,int) ;
 int FUNC_3 (float*,int ,int ,int,int,int,int,int,int,int,int) ;

int FUNC_4(layer VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5, int *VAR_6, int VAR_7, detection *VAR_8)
{
    int VAR_9,VAR_10,VAR_11;
    float *VAR_12 = VAR_0.output;
    if (VAR_0.batch == 2) FUNC_0(VAR_0);
    int VAR_13 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_0.w*VAR_0.h; ++VAR_9){
        int VAR_14 = VAR_9 / VAR_0.w;
        int VAR_15 = VAR_9 % VAR_0.w;
        for(VAR_11 = 0; VAR_11 < VAR_0.n; ++VAR_11){
            int VAR_16 = FUNC_2(VAR_0, 0, VAR_11*VAR_0.w*VAR_0.h + VAR_9, 4);
            float VAR_17 = VAR_12[VAR_16];
            if(VAR_17 <= VAR_5) continue;
            int VAR_18 = FUNC_2(VAR_0, 0, VAR_11*VAR_0.w*VAR_0.h + VAR_9, 0);
            VAR_8[VAR_13].bbox = FUNC_3(VAR_12, VAR_0.biases, VAR_0.mask[VAR_11], VAR_18, VAR_15, VAR_14, VAR_0.w, VAR_0.h, VAR_3, VAR_4, VAR_0.w*VAR_0.h);
            VAR_8[VAR_13].objectness = VAR_17;
            VAR_8[VAR_13].classes = VAR_0.classes;
            for(VAR_10 = 0; VAR_10 < VAR_0.classes; ++VAR_10){
                int VAR_19 = FUNC_2(VAR_0, 0, VAR_11*VAR_0.w*VAR_0.h + VAR_9, 4 + 1 + VAR_10);
                float VAR_20 = VAR_17*VAR_12[VAR_19];
                VAR_8[VAR_13].prob[VAR_10] = (VAR_20 > VAR_5) ? VAR_20 : 0;
            }
            ++VAR_13;
        }
    }
    FUNC_1(VAR_8, VAR_13, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
    return VAR_13;
}
