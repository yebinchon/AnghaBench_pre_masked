
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; int c; int * data; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (int *,int) ;
 TYPE_1__ FUNC_1 (int,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int) ;

image FUNC_4(int VAR_0, int VAR_1, int VAR_2)
{
    image VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_3.w*VAR_3.h*VAR_3.c; ++VAR_4){
        VAR_3.data[VAR_4] = FUNC_2();
    }
    float VAR_5 = FUNC_0(VAR_3.data, VAR_3.w*VAR_3.h*VAR_3.c);
    FUNC_3(VAR_3.data, VAR_3.w*VAR_3.h*VAR_3.c, 1./VAR_5);
    return VAR_3;
}
