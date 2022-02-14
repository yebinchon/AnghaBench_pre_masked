
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nextstate; } ;
typedef TYPE_1__ state_t ;
struct TYPE_7__ {int tics; int sy; int sx; TYPE_1__* state; } ;
typedef TYPE_2__ pspdef_t ;
struct TYPE_8__ {TYPE_2__* psprites; } ;
typedef TYPE_3__ player_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;

void FUNC_1 (player_t* VAR_3)
{
    int VAR_4;
    pspdef_t* VAR_5;
    state_t* VAR_6;

    VAR_5 = &VAR_3->psprites[0];
    for (VAR_4=0 ; VAR_4<VAR_0 ; VAR_4++, VAR_5++)
    {

 if ( (VAR_6 = VAR_5->state) )
 {



     if (VAR_5->tics != -1)
     {
  VAR_5->tics--;
  if (!VAR_5->tics)
      FUNC_0 (VAR_3, VAR_4, VAR_5->state->nextstate);
     }
 }
    }

    VAR_3->psprites[VAR_1].sx = VAR_3->psprites[VAR_2].sx;
    VAR_3->psprites[VAR_1].sy = VAR_3->psprites[VAR_2].sy;
}
