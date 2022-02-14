
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int c; int h; int w; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,int,int,int) ;
 float FUNC_1 (TYPE_1__,int,int,int) ;
 int FUNC_2 (TYPE_1__,int,int,int,float) ;

void FUNC_3(image VAR_0, image VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4,VAR_5,VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_0.c; ++VAR_6){
        for(VAR_5 = 0; VAR_5 < VAR_0.h; ++VAR_5){
            for(VAR_4 = 0; VAR_4 < VAR_0.w; ++VAR_4){
                float VAR_7 = FUNC_0(VAR_0, VAR_4, VAR_5, VAR_6);
                float VAR_8 = FUNC_1(VAR_1, VAR_2+VAR_4, VAR_3+VAR_5, VAR_6);
                FUNC_2(VAR_1, VAR_2+VAR_4, VAR_3+VAR_5, VAR_6, VAR_7 * VAR_8);
            }
        }
    }
}
