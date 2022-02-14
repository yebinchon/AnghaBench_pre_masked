
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; int c; scalar_t__* data; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

image FUNC_3(image VAR_0, image VAR_1)
{
    int VAR_2,VAR_3;
    image VAR_4 = FUNC_0(VAR_0.w, VAR_0.h, 1);
    for(VAR_2 = 0; VAR_2 < VAR_0.c; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < VAR_0.h*VAR_0.w; ++VAR_3){
            VAR_4.data[VAR_3] += FUNC_1(VAR_0.data[VAR_2*VAR_0.h*VAR_0.w+VAR_3]-VAR_1.data[VAR_2*VAR_0.h*VAR_0.w+VAR_3],2);
        }
    }
    for(VAR_3 = 0; VAR_3 < VAR_0.h*VAR_0.w; ++VAR_3){
        VAR_4.data[VAR_3] = FUNC_2(VAR_4.data[VAR_3]);
    }
    return VAR_4;
}
