
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,int,int,int) ;
 int FUNC_1 (TYPE_1__,int,int,int,float const) ;

void FUNC_2(image VAR_0, int VAR_1, int VAR_2, image VAR_3, const float *VAR_4)
{
    int VAR_5 = VAR_3.w;
    int VAR_6 = VAR_3.h;
    if (VAR_1 - VAR_6 >= 0) VAR_1 = VAR_1 - VAR_6;

    int VAR_7, VAR_8, VAR_9;
    for(VAR_8 = 0; VAR_8 < VAR_6 && VAR_8 + VAR_1 < VAR_0.h; ++VAR_8){
        for(VAR_7 = 0; VAR_7 < VAR_5 && VAR_7 + VAR_2 < VAR_0.w; ++VAR_7){
            for(VAR_9 = 0; VAR_9 < VAR_3.c; ++VAR_9){
                float VAR_10 = FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9);
                FUNC_1(VAR_0, VAR_7+VAR_2, VAR_8+VAR_1, VAR_9, VAR_4[VAR_9] * VAR_10);
            }
        }
    }
}
