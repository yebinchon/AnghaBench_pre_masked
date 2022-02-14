
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

image FUNC_5(image VAR_0, float VAR_1, float VAR_2, int VAR_3, int VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    float VAR_11 = VAR_0.w/2.;
    float VAR_12 = VAR_0.h/2.;
    image VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_0.c);
    for(VAR_10 = 0; VAR_10 < VAR_0.c; ++VAR_10){
        for(VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9){
            for(VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8){
                float VAR_14 = FUNC_1(VAR_1)*((VAR_8 - VAR_3/2.)/VAR_2*VAR_7 + VAR_5/VAR_2*VAR_7) - FUNC_4(VAR_1)*((VAR_9 - VAR_4/2.)/VAR_2 + VAR_6/VAR_2) + VAR_11;
                float VAR_15 = FUNC_4(VAR_1)*((VAR_8 - VAR_3/2.)/VAR_2*VAR_7 + VAR_5/VAR_2*VAR_7) + FUNC_1(VAR_1)*((VAR_9 - VAR_4/2.)/VAR_2 + VAR_6/VAR_2) + VAR_12;
                float VAR_16 = FUNC_0(VAR_0, VAR_14, VAR_15, VAR_10);
                FUNC_3(VAR_13, VAR_8, VAR_9, VAR_10, VAR_16);
            }
        }
    }
    return VAR_13;
}
