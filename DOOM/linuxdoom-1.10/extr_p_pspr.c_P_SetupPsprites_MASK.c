
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int readyweapon; int pendingweapon; TYPE_1__* psprites; } ;
typedef TYPE_2__ player_t ;
struct TYPE_5__ {int * state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1 (player_t* VAR_1)
{
    int VAR_2;


    for (VAR_2=0 ; VAR_2<VAR_0 ; VAR_2++)
 VAR_1->psprites[VAR_2].state = ((void*)0);


    VAR_1->pendingweapon = VAR_1->readyweapon;
    FUNC_0 (VAR_1);
}
