
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int batch; int c; int* output; int h; int w; } ;
typedef TYPE_2__ avgpool_layer ;



void FUNC_0(const avgpool_layer VAR_0, network VAR_1)
{
    int VAR_2,VAR_3,VAR_4;

    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
            int VAR_5 = VAR_4 + VAR_2*VAR_0.c;
            VAR_0.output[VAR_5] = 0;
            for(VAR_3 = 0; VAR_3 < VAR_0.h*VAR_0.w; ++VAR_3){
                int VAR_6 = VAR_3 + VAR_0.h*VAR_0.w*(VAR_4 + VAR_2*VAR_0.c);
                VAR_0.output[VAR_5] += VAR_1.input[VAR_6];
            }
            VAR_0.output[VAR_5] /= VAR_0.h*VAR_0.w;
        }
    }
}
