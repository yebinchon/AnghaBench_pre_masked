
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ playerstate; int* cards; int viewheight; scalar_t__ fixedcolormap; scalar_t__ extralight; scalar_t__ bonuscount; scalar_t__ damagecount; int * message; scalar_t__ refire; TYPE_2__* mo; int health; } ;
typedef TYPE_1__ player_t ;
struct TYPE_9__ {int flags; int angle; int health; TYPE_1__* player; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_10__ {int type; int x; int y; int angle; } ;
typedef TYPE_3__ mapthing_t ;
typedef int fixed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int,int,int,int ) ;
 int FUNC_4 () ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 TYPE_1__* VAR_12 ;

void FUNC_5 (mapthing_t* VAR_13)
{
    player_t* VAR_14;
    fixed_t VAR_15;
    fixed_t VAR_16;
    fixed_t VAR_17;

    mobj_t* VAR_18;

    int VAR_19;


    if (!VAR_11[VAR_13->type-1])
 return;

    VAR_14 = &VAR_12[VAR_13->type-1];

    if (VAR_14->playerstate == VAR_7)
 FUNC_0 (VAR_13->type-1);

    VAR_15 = VAR_13->x << VAR_1;
    VAR_16 = VAR_13->y << VAR_1;
    VAR_17 = VAR_5;
    VAR_18 = FUNC_3 (VAR_15,VAR_16,VAR_17, VAR_3);


    if (VAR_13->type > 1)
 VAR_18->flags |= (VAR_13->type-1)<<VAR_2;

    VAR_18->angle = VAR_0 * (VAR_13->angle/45);
    VAR_18->player = VAR_14;
    VAR_18->health = VAR_14->health;

    VAR_14->mo = VAR_18;
    VAR_14->playerstate = VAR_6;
    VAR_14->refire = 0;
    VAR_14->message = ((void*)0);
    VAR_14->damagecount = 0;
    VAR_14->bonuscount = 0;
    VAR_14->extralight = 0;
    VAR_14->fixedcolormap = 0;
    VAR_14->viewheight = VAR_8;


    FUNC_2 (VAR_14);


    if (VAR_10)
 for (VAR_19=0 ; VAR_19<VAR_4 ; VAR_19++)
     VAR_14->cards[VAR_19] = 1;

    if (VAR_13->type-1 == VAR_9)
    {

 FUNC_4 ();

 FUNC_1 ();
    }
}
