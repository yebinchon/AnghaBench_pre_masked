
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* filters; int* prevfilt; int* cvector; int flag; } ;
typedef TYPE_1__ TSContext ;



__attribute__((used)) static void FUNC_0(TSContext *VAR_0)
{
    int VAR_1;

    if(!VAR_0->flag){
        for(VAR_1 = 0; VAR_1 < 8; VAR_1++){
            VAR_0->filters[VAR_1 + 0] = VAR_0->prevfilt[VAR_1];
            VAR_0->filters[VAR_1 + 8] = VAR_0->prevfilt[VAR_1];
        }
    }else{
        for(VAR_1 = 0; VAR_1 < 8; VAR_1++){
            VAR_0->filters[VAR_1 + 0]=(VAR_0->cvector[VAR_1] * 21846 + VAR_0->prevfilt[VAR_1] * 10923 + 16384) >> 15;
            VAR_0->filters[VAR_1 + 8]=(VAR_0->cvector[VAR_1] * 10923 + VAR_0->prevfilt[VAR_1] * 21846 + 16384) >> 15;
        }
    }
    for(VAR_1 = 0; VAR_1 < 8; VAR_1++){
        VAR_0->filters[VAR_1 + 16] = VAR_0->cvector[VAR_1];
        VAR_0->filters[VAR_1 + 24] = VAR_0->cvector[VAR_1];
    }
}
