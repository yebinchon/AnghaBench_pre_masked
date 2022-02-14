
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; int w; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,int,int,int) ;
 int FUNC_1 (TYPE_1__,int,int,int,float) ;

void FUNC_2(image VAR_0, int VAR_1, float VAR_2)
{
    int VAR_3, VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0.h; ++VAR_4){
        for(VAR_3 = 0; VAR_3 < VAR_0.w; ++VAR_3){
            float VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4, VAR_1);
            VAR_5 = VAR_5*VAR_2;
            FUNC_1(VAR_0, VAR_3, VAR_4, VAR_1, VAR_5);
        }
    }
}
