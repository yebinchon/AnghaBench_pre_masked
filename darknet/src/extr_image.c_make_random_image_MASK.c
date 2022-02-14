
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* data; } ;
typedef TYPE_1__ image ;


 double* FUNC_0 (int,int) ;
 TYPE_1__ FUNC_1 (int,int,int) ;
 double FUNC_2 () ;

image FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
    image VAR_3 = FUNC_1(VAR_0,VAR_1,VAR_2);
    VAR_3.data = FUNC_0(VAR_1*VAR_0*VAR_2, sizeof(float));
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0*VAR_1*VAR_2; ++VAR_4){
        VAR_3.data[VAR_4] = (FUNC_2() * .25) + .5;
    }
    return VAR_3;
}
