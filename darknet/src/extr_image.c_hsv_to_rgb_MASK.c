
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c; int h; int w; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;
 int FUNC_1 (float) ;
 int FUNC_2 (TYPE_1__,int,int,int) ;
 int FUNC_3 (TYPE_1__,int,int,int,float) ;

void FUNC_4(image VAR_0)
{
    FUNC_0(VAR_0.c == 3);
    int VAR_1, VAR_2;
    float VAR_3, VAR_4, VAR_5;
    float VAR_6, VAR_7, VAR_8;
    float VAR_9, VAR_10, VAR_11, VAR_12;
    for(VAR_2 = 0; VAR_2 < VAR_0.h; ++VAR_2){
        for(VAR_1 = 0; VAR_1 < VAR_0.w; ++VAR_1){
            VAR_6 = 6 * FUNC_2(VAR_0, VAR_1 , VAR_2, 0);
            VAR_7 = FUNC_2(VAR_0, VAR_1 , VAR_2, 1);
            VAR_8 = FUNC_2(VAR_0, VAR_1 , VAR_2, 2);
            if (VAR_7 == 0) {
                VAR_3 = VAR_4 = VAR_5 = VAR_8;
            } else {
                int VAR_13 = FUNC_1(VAR_6);
                VAR_9 = VAR_6 - VAR_13;
                VAR_10 = VAR_8*(1-VAR_7);
                VAR_11 = VAR_8*(1-VAR_7*VAR_9);
                VAR_12 = VAR_8*(1-VAR_7*(1-VAR_9));
                if(VAR_13 == 0){
                    VAR_3 = VAR_8; VAR_4 = VAR_12; VAR_5 = VAR_10;
                } else if(VAR_13 == 1){
                    VAR_3 = VAR_11; VAR_4 = VAR_8; VAR_5 = VAR_10;
                } else if(VAR_13 == 2){
                    VAR_3 = VAR_10; VAR_4 = VAR_8; VAR_5 = VAR_12;
                } else if(VAR_13 == 3){
                    VAR_3 = VAR_10; VAR_4 = VAR_11; VAR_5 = VAR_8;
                } else if(VAR_13 == 4){
                    VAR_3 = VAR_12; VAR_4 = VAR_10; VAR_5 = VAR_8;
                } else {
                    VAR_3 = VAR_8; VAR_4 = VAR_10; VAR_5 = VAR_11;
                }
            }
            FUNC_3(VAR_0, VAR_1, VAR_2, 0, VAR_3);
            FUNC_3(VAR_0, VAR_1, VAR_2, 1, VAR_4);
            FUNC_3(VAR_0, VAR_1, VAR_2, 2, VAR_5);
        }
    }
}
