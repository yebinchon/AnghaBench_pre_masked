
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; int h; int w; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;
 float FUNC_1 (TYPE_1__,int,int,int) ;

void FUNC_2(image VAR_0)
{
    FUNC_0(VAR_0.c == 3);
    int VAR_1, VAR_2, VAR_3;
    float VAR_4[] = {0.299, 0.587, 0.114};
    for(VAR_2 = 0; VAR_2 < VAR_0.h; ++VAR_2){
        for(VAR_1 = 0; VAR_1 < VAR_0.w; ++VAR_1){
            float VAR_5 = 0;
            for(VAR_3 = 0; VAR_3 < 3; ++VAR_3){
                VAR_5 += VAR_4[VAR_3]*FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
            }
            VAR_0.data[0*VAR_0.h*VAR_0.w + VAR_0.w*VAR_2 + VAR_1] = VAR_5;
            VAR_0.data[1*VAR_0.h*VAR_0.w + VAR_0.w*VAR_2 + VAR_1] = VAR_5;
            VAR_0.data[2*VAR_0.h*VAR_0.w + VAR_0.w*VAR_2 + VAR_1] = VAR_5;
        }
    }
}
