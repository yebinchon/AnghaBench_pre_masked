
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; int * data; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (int,int,int) ;

image FUNC_1(image VAR_0, int VAR_1)
{
    image VAR_2 = FUNC_0(VAR_0.w, VAR_0.h, 1);
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0.h*VAR_0.w; ++VAR_3){
        VAR_2.data[VAR_3] = VAR_0.data[VAR_3+VAR_1*VAR_0.h*VAR_0.w];
    }
    return VAR_2;
}
