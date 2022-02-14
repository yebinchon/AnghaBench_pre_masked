
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mobjtype_t ;
struct TYPE_10__ {int flags; int type; int height; int tics; int y; int x; TYPE_1__* info; int health; TYPE_3__* player; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_11__ {int playerstate; int * frags; int killcount; } ;
struct TYPE_9__ {scalar_t__ deathstate; scalar_t__ xdeathstate; int spawnhealth; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int VAR_11 ;

 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 TYPE_3__* VAR_18 ;

void
FUNC_5
( mobj_t* VAR_19,
  mobj_t* VAR_20 )
{
    mobjtype_t VAR_21;
    mobj_t* VAR_22;

    VAR_20->flags &= ~(VAR_6|VAR_4|VAR_7);

    if (VAR_20->type != VAR_12)
 VAR_20->flags &= ~VAR_5;

    VAR_20->flags |= VAR_0|VAR_2;
    VAR_20->height >>= 2;

    if (VAR_19 && VAR_19->player)
    {

 if (VAR_20->flags & VAR_1)
     VAR_19->player->killcount++;

 if (VAR_20->player)
     VAR_19->player->frags[VAR_20->player-VAR_18]++;
    }
    else if (!VAR_17 && (VAR_20->flags & VAR_1) )
    {


 VAR_18[0].killcount++;
    }

    if (VAR_20->player)
    {

 if (!VAR_19)
     VAR_20->player->frags[VAR_20->player-VAR_18]++;

 VAR_20->flags &= ~VAR_8;
 VAR_20->player->playerstate = VAR_14;
 FUNC_1 (VAR_20->player);

 if (VAR_20->player == &VAR_18[VAR_16]
     && VAR_15)
 {


     FUNC_0 ();
 }

    }

    if (VAR_20->health < -VAR_20->info->spawnhealth
 && VAR_20->info->xdeathstate)
    {
 FUNC_3 (VAR_20, VAR_20->info->xdeathstate);
    }
    else
 FUNC_3 (VAR_20, VAR_20->info->deathstate);
    VAR_20->tics -= FUNC_2()&3;

    if (VAR_20->tics < 1)
 VAR_20->tics = 1;







    switch (VAR_20->type)
    {
      case 128:
      case 130:
 VAR_21 = VAR_10;
 break;

      case 129:
 VAR_21 = VAR_11;
 break;

      case 131:
 VAR_21 = VAR_9;
 break;

      default:
 return;
    }

    VAR_22 = FUNC_4 (VAR_20->x,VAR_20->y,VAR_13, VAR_21);
    VAR_22->flags |= VAR_3;
}
