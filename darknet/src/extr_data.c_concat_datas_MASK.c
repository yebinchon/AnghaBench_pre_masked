
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ data ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;

data FUNC_2(data *VAR_0, int VAR_1)
{
    int VAR_2;
    data VAR_3 = {0};
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        data VAR_4 = FUNC_0(VAR_0[VAR_2], VAR_3);
        FUNC_1(VAR_3);
        VAR_3 = VAR_4;
    }
    return VAR_3;
}
