
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* mask; struct TYPE_4__* prob; } ;
typedef TYPE_1__ detection ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(detection *VAR_0, int VAR_1)
{
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        FUNC_0(VAR_0[VAR_2].prob);
        if(VAR_0[VAR_2].mask) FUNC_0(VAR_0[VAR_2].mask);
    }
    FUNC_0(VAR_0);
}
