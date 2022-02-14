
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int c; int h; int w; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__,int,int,int,float) ;
 int FUNC_1 (TYPE_1__) ;
 float FUNC_2 (TYPE_1__,int,int,int) ;
 TYPE_1__ FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_1__,int,int,int,float) ;

image FUNC_5(image VAR_0, int VAR_1, int VAR_2)
{
    image VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0.c);
    image VAR_4 = FUNC_3(VAR_1, VAR_0.h, VAR_0.c);
    int VAR_5, VAR_6, VAR_7;
    float VAR_8 = (float)(VAR_0.w - 1) / (VAR_1 - 1);
    float VAR_9 = (float)(VAR_0.h - 1) / (VAR_2 - 1);
    for(VAR_7 = 0; VAR_7 < VAR_0.c; ++VAR_7){
        for(VAR_5 = 0; VAR_5 < VAR_0.h; ++VAR_5){
            for(VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6){
                float VAR_10 = 0;
                if(VAR_6 == VAR_1-1 || VAR_0.w == 1){
                    VAR_10 = FUNC_2(VAR_0, VAR_0.w-1, VAR_5, VAR_7);
                } else {
                    float VAR_11 = VAR_6*VAR_8;
                    int VAR_12 = (int) VAR_11;
                    float VAR_13 = VAR_11 - VAR_12;
                    VAR_10 = (1 - VAR_13) * FUNC_2(VAR_0, VAR_12, VAR_5, VAR_7) + VAR_13 * FUNC_2(VAR_0, VAR_12+1, VAR_5, VAR_7);
                }
                FUNC_4(VAR_4, VAR_6, VAR_5, VAR_7, VAR_10);
            }
        }
    }
    for(VAR_7 = 0; VAR_7 < VAR_0.c; ++VAR_7){
        for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
            float VAR_14 = VAR_5*VAR_9;
            int VAR_15 = (int) VAR_14;
            float VAR_16 = VAR_14 - VAR_15;
            for(VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6){
                float VAR_17 = (1-VAR_16) * FUNC_2(VAR_4, VAR_6, VAR_15, VAR_7);
                FUNC_4(VAR_3, VAR_6, VAR_5, VAR_7, VAR_17);
            }
            if(VAR_5 == VAR_2-1 || VAR_0.h == 1) continue;
            for(VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6){
                float VAR_18 = VAR_16 * FUNC_2(VAR_4, VAR_6, VAR_15+1, VAR_7);
                FUNC_0(VAR_3, VAR_6, VAR_5, VAR_7, VAR_18);
            }
        }
    }

    FUNC_1(VAR_4);
    return VAR_3;
}
