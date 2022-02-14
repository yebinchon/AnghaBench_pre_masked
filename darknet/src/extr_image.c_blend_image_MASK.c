
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__,int,int,int) ;
 TYPE_1__ FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_1__,int,int,int,float) ;

image FUNC_4(image VAR_0, image VAR_1, float VAR_2)
{
    FUNC_0(VAR_0.w == VAR_1.w && VAR_0.h == VAR_1.h && VAR_0.c == VAR_1.c);
    image VAR_3 = FUNC_2(VAR_0.w, VAR_0.h, VAR_0.c);
    int VAR_4, VAR_5, VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_0.c; ++VAR_6){
        for(VAR_5 = 0; VAR_5 < VAR_0.h; ++VAR_5){
            for(VAR_4 = 0; VAR_4 < VAR_0.w; ++VAR_4){
                float VAR_7 = VAR_2 * FUNC_1(VAR_0, VAR_4, VAR_5, VAR_6) +
                    (1 - VAR_2)* FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6);
                FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
            }
        }
    }
    return VAR_3;
}
