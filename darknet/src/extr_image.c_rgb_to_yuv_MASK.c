
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c; int h; int w; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;
 float FUNC_1 (TYPE_1__,int,int,int) ;
 int FUNC_2 (TYPE_1__,int,int,int,float) ;

void FUNC_3(image VAR_0)
{
    FUNC_0(VAR_0.c == 3);
    int VAR_1, VAR_2;
    float VAR_3, VAR_4, VAR_5;
    float VAR_6, VAR_7, VAR_8;
    for(VAR_2 = 0; VAR_2 < VAR_0.h; ++VAR_2){
        for(VAR_1 = 0; VAR_1 < VAR_0.w; ++VAR_1){
            VAR_3 = FUNC_1(VAR_0, VAR_1 , VAR_2, 0);
            VAR_4 = FUNC_1(VAR_0, VAR_1 , VAR_2, 1);
            VAR_5 = FUNC_1(VAR_0, VAR_1 , VAR_2, 2);

            VAR_6 = .299*VAR_3 + .587*VAR_4 + .114*VAR_5;
            VAR_7 = -.14713*VAR_3 + -.28886*VAR_4 + .436*VAR_5;
            VAR_8 = .615*VAR_3 + -.51499*VAR_4 + -.10001*VAR_5;

            FUNC_2(VAR_0, VAR_1, VAR_2, 0, VAR_6);
            FUNC_2(VAR_0, VAR_1, VAR_2, 1, VAR_7);
            FUNC_2(VAR_0, VAR_1, VAR_2, 2, VAR_8);
        }
    }
}
