
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; float* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5, float VAR_6, float VAR_7)
{

    int VAR_8;
    if(VAR_1 < 0) VAR_1 = 0;
    if(VAR_1 >= VAR_0.w) VAR_1 = VAR_0.w-1;
    if(VAR_3 < 0) VAR_3 = 0;
    if(VAR_3 >= VAR_0.w) VAR_3 = VAR_0.w-1;

    if(VAR_2 < 0) VAR_2 = 0;
    if(VAR_2 >= VAR_0.h) VAR_2 = VAR_0.h-1;
    if(VAR_4 < 0) VAR_4 = 0;
    if(VAR_4 >= VAR_0.h) VAR_4 = VAR_0.h-1;

    for(VAR_8 = VAR_1; VAR_8 <= VAR_3; ++VAR_8){
        VAR_0.data[VAR_8 + VAR_2*VAR_0.w + 0*VAR_0.w*VAR_0.h] = VAR_5;
        VAR_0.data[VAR_8 + VAR_4*VAR_0.w + 0*VAR_0.w*VAR_0.h] = VAR_5;

        VAR_0.data[VAR_8 + VAR_2*VAR_0.w + 1*VAR_0.w*VAR_0.h] = VAR_6;
        VAR_0.data[VAR_8 + VAR_4*VAR_0.w + 1*VAR_0.w*VAR_0.h] = VAR_6;

        VAR_0.data[VAR_8 + VAR_2*VAR_0.w + 2*VAR_0.w*VAR_0.h] = VAR_7;
        VAR_0.data[VAR_8 + VAR_4*VAR_0.w + 2*VAR_0.w*VAR_0.h] = VAR_7;
    }
    for(VAR_8 = VAR_2; VAR_8 <= VAR_4; ++VAR_8){
        VAR_0.data[VAR_1 + VAR_8*VAR_0.w + 0*VAR_0.w*VAR_0.h] = VAR_5;
        VAR_0.data[VAR_3 + VAR_8*VAR_0.w + 0*VAR_0.w*VAR_0.h] = VAR_5;

        VAR_0.data[VAR_1 + VAR_8*VAR_0.w + 1*VAR_0.w*VAR_0.h] = VAR_6;
        VAR_0.data[VAR_3 + VAR_8*VAR_0.w + 1*VAR_0.w*VAR_0.h] = VAR_6;

        VAR_0.data[VAR_1 + VAR_8*VAR_0.w + 2*VAR_0.w*VAR_0.h] = VAR_7;
        VAR_0.data[VAR_3 + VAR_8*VAR_0.w + 2*VAR_0.w*VAR_0.h] = VAR_7;
    }
}
