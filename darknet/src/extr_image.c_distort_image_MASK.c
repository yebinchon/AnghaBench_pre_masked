
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__,int,float) ;

void FUNC_4(image VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
    FUNC_2(VAR_0);
    FUNC_3(VAR_0, 1, VAR_2);
    FUNC_3(VAR_0, 2, VAR_3);
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0.w*VAR_0.h; ++VAR_4){
        VAR_0.data[VAR_4] = VAR_0.data[VAR_4] + VAR_1;
        if (VAR_0.data[VAR_4] > 1) VAR_0.data[VAR_4] -= 1;
        if (VAR_0.data[VAR_4] < 0) VAR_0.data[VAR_4] += 1;
    }
    FUNC_1(VAR_0);
    FUNC_0(VAR_0);
}
