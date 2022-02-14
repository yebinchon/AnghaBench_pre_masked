
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;

void FUNC_3(image VAR_0, float VAR_1)
{
    FUNC_2(VAR_0);
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0.w*VAR_0.h; ++VAR_2){
        VAR_0.data[VAR_2] = VAR_0.data[VAR_2] + VAR_1;
        if (VAR_0.data[VAR_2] > 1) VAR_0.data[VAR_2] -= 1;
        if (VAR_0.data[VAR_2] < 0) VAR_0.data[VAR_2] += 1;
    }
    FUNC_1(VAR_0);
    FUNC_0(VAR_0);
}
