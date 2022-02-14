
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; float w; float h; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,float,float,int) ;
 int FUNC_1 (TYPE_1__,int,int,int,float) ;

void FUNC_2(image VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, image VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    for(VAR_8 = 0; VAR_8 < VAR_0.c; ++VAR_8){
        for(VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7){
            for(VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6){
                float VAR_9 = ((float)VAR_6 / VAR_1) * VAR_0.w;
                float VAR_10 = ((float)VAR_7 / VAR_2) * VAR_0.h;
                float VAR_11 = FUNC_0(VAR_0, VAR_9, VAR_10, VAR_8);
                FUNC_1(VAR_5, VAR_6 + VAR_3, VAR_7 + VAR_4, VAR_8, VAR_11);
            }
        }
    }
}
