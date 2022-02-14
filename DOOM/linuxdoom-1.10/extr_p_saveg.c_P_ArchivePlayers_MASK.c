
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int state_t ;
struct TYPE_5__ {TYPE_1__* psprites; } ;
typedef TYPE_2__ player_t ;
struct TYPE_4__ {int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_2 (void)
{
    int VAR_6;
    int VAR_7;
    player_t* VAR_8;

    for (VAR_6=0 ; VAR_6<VAR_0 ; VAR_6++)
    {
 if (!VAR_2[VAR_6])
     continue;

 FUNC_0();

 VAR_8 = (player_t *)VAR_4;
 FUNC_1 (VAR_8,&VAR_3[VAR_6],sizeof(player_t));
 VAR_4 += sizeof(player_t);
 for (VAR_7=0 ; VAR_7<VAR_1 ; VAR_7++)
 {
     if (VAR_8->psprites[VAR_7].state)
     {
  VAR_8->psprites[VAR_7].state
      = (state_t *)(VAR_8->psprites[VAR_7].state-VAR_5);
     }
 }
    }
}
