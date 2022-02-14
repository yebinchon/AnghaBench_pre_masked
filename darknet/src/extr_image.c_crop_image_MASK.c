
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int c; scalar_t__ w; scalar_t__ h; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int,int ,scalar_t__) ;
 float FUNC_1 (TYPE_1__,int,int,int) ;
 TYPE_1__ FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_1__,int,int,int,float) ;

image FUNC_4(image VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    image VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_0.c);
    int VAR_6, VAR_7, VAR_8;
    for(VAR_8 = 0; VAR_8 < VAR_0.c; ++VAR_8){
        for(VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7){
            for(VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6){
                int VAR_9 = VAR_7 + VAR_2;
                int VAR_10 = VAR_6 + VAR_1;
                float VAR_11 = 0;
                VAR_9 = FUNC_0(VAR_9, 0, VAR_0.h-1);
                VAR_10 = FUNC_0(VAR_10, 0, VAR_0.w-1);
                VAR_11 = FUNC_1(VAR_0, VAR_10, VAR_9, VAR_8);
                FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
            }
        }
    }
    return VAR_5;
}
