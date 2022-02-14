
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,int,int,int) ;
 TYPE_1__ FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_1__,int,int,int,float) ;

image FUNC_3(image VAR_0, int VAR_1)
{
    image VAR_2 = FUNC_1(VAR_0.w + 2*VAR_1, VAR_0.h + 2*VAR_1, VAR_0.c);
    int VAR_3,VAR_4,VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_2.c; ++VAR_5){
        for(VAR_4 = 0; VAR_4 < VAR_2.h; ++VAR_4){
            for(VAR_3 = 0; VAR_3 < VAR_2.w; ++VAR_3){
                float VAR_6 = FUNC_0(VAR_0, VAR_3 - VAR_1, VAR_4 - VAR_1, VAR_5);
                if(VAR_3 - VAR_1 < 0 || VAR_3 - VAR_1 >= VAR_0.w || VAR_4 - VAR_1 < 0 || VAR_4 - VAR_1 >= VAR_0.h) VAR_6 = 1;
                FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            }
        }
    }
    return VAR_2;
}
