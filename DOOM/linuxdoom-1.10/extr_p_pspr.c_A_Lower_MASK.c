
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sy; } ;
typedef TYPE_1__ pspdef_t ;
struct TYPE_8__ {scalar_t__ playerstate; int pendingweapon; int readyweapon; int health; } ;
typedef TYPE_2__ player_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void
FUNC_2
( player_t* VAR_5,
  pspdef_t* VAR_6 )
{
    VAR_6->sy += VAR_0;


    if (VAR_6->sy < VAR_3 )
 return;


    if (VAR_5->playerstate == VAR_1)
    {
 VAR_6->sy = VAR_3;


 return;
    }



    if (!VAR_5->health)
    {

 FUNC_1 (VAR_5, VAR_4, VAR_2);
 return;
    }

    VAR_5->readyweapon = VAR_5->pendingweapon;

    FUNC_0 (VAR_5);
}
