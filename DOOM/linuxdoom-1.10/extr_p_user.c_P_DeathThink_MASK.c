
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int buttons; } ;
struct TYPE_9__ {int viewheight; int playerstate; TYPE_2__ cmd; scalar_t__ damagecount; TYPE_1__* mo; TYPE_1__* attacker; scalar_t__ deltaviewheight; } ;
typedef TYPE_3__ player_t ;
typedef unsigned int angle_t ;
struct TYPE_7__ {scalar_t__ z; scalar_t__ floorz; unsigned int angle; int y; int x; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;

void FUNC_3 (player_t* VAR_6)
{
    angle_t VAR_7;
    angle_t VAR_8;

    FUNC_1 (VAR_6);


    if (VAR_6->viewheight > 6*VAR_3)
 VAR_6->viewheight -= VAR_3;

    if (VAR_6->viewheight < 6*VAR_3)
 VAR_6->viewheight = 6*VAR_3;

    VAR_6->deltaviewheight = 0;
    VAR_5 = (VAR_6->mo->z <= VAR_6->mo->floorz);
    FUNC_0 (VAR_6);

    if (VAR_6->attacker && VAR_6->attacker != VAR_6->mo)
    {
 VAR_7 = FUNC_2 (VAR_6->mo->x,
     VAR_6->mo->y,
     VAR_6->attacker->x,
     VAR_6->attacker->y);

 VAR_8 = VAR_7 - VAR_6->mo->angle;

 if (VAR_8 < VAR_1 || VAR_8 > (unsigned)-VAR_1)
 {


     VAR_6->mo->angle = VAR_7;

     if (VAR_6->damagecount)
  VAR_6->damagecount--;
 }
 else if (VAR_8 < VAR_0)
     VAR_6->mo->angle += VAR_1;
 else
     VAR_6->mo->angle -= VAR_1;
    }
    else if (VAR_6->damagecount)
 VAR_6->damagecount--;


    if (VAR_6->cmd.buttons & VAR_2)
 VAR_6->playerstate = VAR_4;
}
