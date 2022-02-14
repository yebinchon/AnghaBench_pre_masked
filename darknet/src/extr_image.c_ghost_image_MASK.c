
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int c; int h; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,int,int,int) ;
 int FUNC_1 (TYPE_1__,int,int,int,float) ;
 float FUNC_2 (int) ;

void FUNC_3(image VAR_0, image VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4,VAR_5,VAR_6;
    float VAR_7 = FUNC_2((-VAR_0.w/2. + .5)*(-VAR_0.w/2. + .5));
    for(VAR_6 = 0; VAR_6 < VAR_0.c; ++VAR_6){
        for(VAR_5 = 0; VAR_5 < VAR_0.h; ++VAR_5){
            for(VAR_4 = 0; VAR_4 < VAR_0.w; ++VAR_4){
                float VAR_8 = FUNC_2((VAR_4 - VAR_0.w/2. + .5)*(VAR_4 - VAR_0.w/2. + .5) + (VAR_5 - VAR_0.h/2. + .5)*(VAR_5 - VAR_0.h/2. + .5));
                float VAR_9 = (1 - VAR_8/VAR_7);
                if(VAR_9 < 0) VAR_9 = 0;
                float VAR_10 = FUNC_0(VAR_0, VAR_4,VAR_5,VAR_6);
                float VAR_11 = FUNC_0(VAR_1, VAR_2+VAR_4,VAR_3+VAR_5,VAR_6);
                float VAR_12 = VAR_9*VAR_10 + (1-VAR_9)*VAR_11;
                FUNC_1(VAR_1, VAR_2+VAR_4, VAR_3+VAR_5, VAR_6, VAR_12);
            }
        }
    }
}
