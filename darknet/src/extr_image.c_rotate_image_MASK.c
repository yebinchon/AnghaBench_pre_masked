
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,float,float,int) ;
 int FUNC_1 (float) ;
 TYPE_1__ FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_1__,int,int,int,float) ;
 int FUNC_4 (float) ;

image FUNC_5(image VAR_0, float VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    float VAR_5 = VAR_0.w/2.;
    float VAR_6 = VAR_0.h/2.;
    image VAR_7 = FUNC_2(VAR_0.w, VAR_0.h, VAR_0.c);
    for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
        for(VAR_3 = 0; VAR_3 < VAR_0.h; ++VAR_3){
            for(VAR_2 = 0; VAR_2 < VAR_0.w; ++VAR_2){
                float VAR_8 = FUNC_1(VAR_1)*(VAR_2-VAR_5) - FUNC_4(VAR_1)*(VAR_3-VAR_6) + VAR_5;
                float VAR_9 = FUNC_4(VAR_1)*(VAR_2-VAR_5) + FUNC_1(VAR_1)*(VAR_3-VAR_6) + VAR_6;
                float VAR_10 = FUNC_0(VAR_0, VAR_8, VAR_9, VAR_4);
                FUNC_3(VAR_7, VAR_2, VAR_3, VAR_4, VAR_10);
            }
        }
    }
    return VAR_7;
}
