
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t weapontype_t ;
struct TYPE_16__ {int forwardmove; int buttons; scalar_t__ sidemove; scalar_t__ angleturn; } ;
typedef TYPE_4__ ticcmd_t ;
struct TYPE_17__ {int cheats; scalar_t__ playerstate; size_t readyweapon; int* powers; size_t pendingweapon; int usedown; int fixedcolormap; scalar_t__ bonuscount; scalar_t__ damagecount; TYPE_3__* mo; scalar_t__* weaponowned; TYPE_4__ cmd; } ;
typedef TYPE_5__ player_t ;
struct TYPE_15__ {int flags; TYPE_2__* subsector; scalar_t__ reactiontime; } ;
struct TYPE_14__ {TYPE_1__* sector; } ;
struct TYPE_13__ {scalar_t__ special; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;

void FUNC_6 (player_t* VAR_25)
{
    ticcmd_t* VAR_26;
    weapontype_t VAR_27;


    if (VAR_25->cheats & VAR_5)
 VAR_25->mo->flags |= VAR_8;
    else
 VAR_25->mo->flags &= ~VAR_8;


    VAR_26 = &VAR_25->cmd;
    if (VAR_25->mo->flags & VAR_7)
    {
 VAR_26->angleturn = 0;
 VAR_26->forwardmove = 0xc800/512;
 VAR_26->sidemove = 0;
 VAR_25->mo->flags &= ~VAR_7;
    }


    if (VAR_25->playerstate == VAR_10)
    {
 FUNC_1 (VAR_25);
 return;
    }




    if (VAR_25->mo->reactiontime)
 VAR_25->mo->reactiontime--;
    else
 FUNC_2 (VAR_25);

    FUNC_0 (VAR_25);

    if (VAR_25->mo->subsector->sector->special)
 FUNC_4 (VAR_25);




    if (VAR_26->buttons & VAR_1)
 VAR_26->buttons = 0;

    if (VAR_26->buttons & VAR_0)
    {



 VAR_27 = (VAR_26->buttons&VAR_3)>>VAR_4;

 if (VAR_27 == VAR_21
     && VAR_25->weaponowned[VAR_20]
     && !(VAR_25->readyweapon == VAR_20
   && VAR_25->powers[VAR_17]))
 {
     VAR_27 = VAR_20;
 }

 if ( (VAR_12 == VAR_11)
     && VAR_27 == VAR_23
     && VAR_25->weaponowned[VAR_24]
     && VAR_25->readyweapon != VAR_24)
 {
     VAR_27 = VAR_24;
 }


 if (VAR_25->weaponowned[VAR_27]
     && VAR_27 != VAR_25->readyweapon)
 {


     if ((VAR_27 != VAR_22
   && VAR_27 != VAR_19)
  || (VAR_12 != VAR_18) )
     {
  VAR_25->pendingweapon = VAR_27;
     }
 }
    }


    if (VAR_26->buttons & VAR_2)
    {
 if (!VAR_25->usedown)
 {
     FUNC_5 (VAR_25);
     VAR_25->usedown = 1;
 }
    }
    else
 VAR_25->usedown = 0;


    FUNC_3 (VAR_25);




    if (VAR_25->powers[VAR_17])
 VAR_25->powers[VAR_17]++;

    if (VAR_25->powers[VAR_15])
 VAR_25->powers[VAR_15]--;

    if (VAR_25->powers[VAR_14])
 if (! --VAR_25->powers[VAR_14] )
     VAR_25->mo->flags &= ~VAR_9;

    if (VAR_25->powers[VAR_13])
 VAR_25->powers[VAR_13]--;

    if (VAR_25->powers[VAR_16])
 VAR_25->powers[VAR_16]--;

    if (VAR_25->damagecount)
 VAR_25->damagecount--;

    if (VAR_25->bonuscount)
 VAR_25->bonuscount--;



    if (VAR_25->powers[VAR_15])
    {
 if (VAR_25->powers[VAR_15] > 4*32
     || (VAR_25->powers[VAR_15]&8) )
     VAR_25->fixedcolormap = VAR_6;
 else
     VAR_25->fixedcolormap = 0;
    }
    else if (VAR_25->powers[VAR_13])
    {
 if (VAR_25->powers[VAR_13] > 4*32
     || (VAR_25->powers[VAR_13]&8) )
 {

     VAR_25->fixedcolormap = 1;
 }
 else
     VAR_25->fixedcolormap = 0;
    }
    else
 VAR_25->fixedcolormap = 0;
}
