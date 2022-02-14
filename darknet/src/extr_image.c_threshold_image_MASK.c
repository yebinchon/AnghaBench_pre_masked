
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; int c; int* data; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (int,int,int) ;

image FUNC_1(image VAR_0, float VAR_1)
{
    int VAR_2;
    image VAR_3 = FUNC_0(VAR_0.w, VAR_0.h, VAR_0.c);
    for(VAR_2 = 0; VAR_2 < VAR_0.w*VAR_0.h*VAR_0.c; ++VAR_2){
        VAR_3.data[VAR_2] = VAR_0.data[VAR_2]>VAR_1 ? 1 : 0;
    }
    return VAR_3;
}
