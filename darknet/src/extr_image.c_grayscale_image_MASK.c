
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int w; int h; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;
 float FUNC_1 (TYPE_1__,int,int,int) ;
 TYPE_1__ FUNC_2 (int,int,int) ;

image FUNC_3(image VAR_0)
{
    FUNC_0(VAR_0.c == 3);
    int VAR_1, VAR_2, VAR_3;
    image VAR_4 = FUNC_2(VAR_0.w, VAR_0.h, 1);
    float VAR_5[] = {0.299, 0.587, 0.114};
    for(VAR_3 = 0; VAR_3 < VAR_0.c; ++VAR_3){
        for(VAR_2 = 0; VAR_2 < VAR_0.h; ++VAR_2){
            for(VAR_1 = 0; VAR_1 < VAR_0.w; ++VAR_1){
                VAR_4.data[VAR_1+VAR_0.w*VAR_2] += VAR_5[VAR_3]*FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
            }
        }
    }
    return VAR_4;
}
