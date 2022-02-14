
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c; int w; int h; float* data; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (int,int,int) ;
 TYPE_1__ FUNC_1 (int,int,int) ;

image FUNC_2(image VAR_0)
{
    int VAR_1 = VAR_0.c;
    image VAR_2 = FUNC_1(VAR_0.w, VAR_0.h, 3);
    int VAR_3, VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        int VAR_5 = VAR_4*123457 % VAR_1;
        float VAR_6 = FUNC_0(2,VAR_5,VAR_1);
        float VAR_7 = FUNC_0(1,VAR_5,VAR_1);
        float VAR_8 = FUNC_0(0,VAR_5,VAR_1);
        for(VAR_3 = 0; VAR_3 < VAR_2.w*VAR_2.h; ++VAR_3){
            VAR_2.data[VAR_3 + 0*VAR_2.w*VAR_2.h] += VAR_0.data[VAR_4*VAR_2.h*VAR_2.w + VAR_3]*VAR_6;
            VAR_2.data[VAR_3 + 1*VAR_2.w*VAR_2.h] += VAR_0.data[VAR_4*VAR_2.h*VAR_2.w + VAR_3]*VAR_7;
            VAR_2.data[VAR_3 + 2*VAR_2.w*VAR_2.h] += VAR_0.data[VAR_4*VAR_2.h*VAR_2.w + VAR_3]*VAR_8;
        }
    }
    return VAR_2;
}
