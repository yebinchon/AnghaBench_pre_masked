
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ readyweapon; int cheats; int armortype; int armorpoints; scalar_t__ health; int damagecount; TYPE_5__* attacker; scalar_t__* powers; } ;
typedef TYPE_4__ player_t ;
struct TYPE_17__ {int flags; int health; int z; scalar_t__ type; TYPE_3__* info; int * state; scalar_t__ threshold; struct TYPE_17__* target; scalar_t__ reactiontime; TYPE_2__* subsector; scalar_t__ momy; scalar_t__ momx; int y; int x; TYPE_4__* player; scalar_t__ momz; } ;
typedef TYPE_5__ mobj_t ;
typedef int fixed_t ;
struct TYPE_15__ {int mass; int painchance; scalar_t__ painstate; size_t spawnstate; scalar_t__ seestate; } ;
struct TYPE_14__ {TYPE_1__* sector; } ;
struct TYPE_13__ {int special; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 unsigned int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_4__* VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 int * VAR_18 ;
 scalar_t__ VAR_19 ;

void
FUNC_6
( mobj_t* VAR_20,
  mobj_t* VAR_21,
  mobj_t* VAR_22,
  int VAR_23 )
{
    unsigned VAR_24;
    int VAR_25;
    player_t* VAR_26;
    fixed_t VAR_27;
    int VAR_28;

    if ( !(VAR_20->flags & VAR_7) )
 return;

    if (VAR_20->health <= 0)
 return;

    if ( VAR_20->flags & VAR_8 )
    {
 VAR_20->momx = VAR_20->momy = VAR_20->momz = 0;
    }

    VAR_26 = VAR_20->player;
    if (VAR_26 && VAR_14 == VAR_17)
 VAR_23 >>= 1;





    if (VAR_21
 && !(VAR_20->flags & VAR_6)
 && (!VAR_22
     || !VAR_22->player
     || VAR_22->player->readyweapon != VAR_19))
    {
 VAR_24 = FUNC_5 ( VAR_21->x,
    VAR_21->y,
    VAR_20->x,
    VAR_20->y);

 VAR_27 = VAR_23*(VAR_4>>3)*100/VAR_20->info->mass;


 if ( VAR_23 < 40
      && VAR_23 > VAR_20->health
      && VAR_20->z - VAR_21->z > 64*VAR_4
      && (FUNC_3 ()&1) )
 {
     VAR_24 += VAR_0;
     VAR_27 *= 4;
 }

 VAR_24 >>= VAR_1;
 VAR_20->momx += FUNC_0 (VAR_27, VAR_12[VAR_24]);
 VAR_20->momy += FUNC_0 (VAR_27, VAR_13[VAR_24]);
    }


    if (VAR_26)
    {

 if (VAR_20->subsector->sector->special == 11
     && VAR_23 >= VAR_20->health)
 {
     VAR_23 = VAR_20->health - 1;
 }




 if ( VAR_23 < 1000
      && ( (VAR_26->cheats&VAR_3)
    || VAR_26->powers[VAR_16] ) )
 {
     return;
 }

 if (VAR_26->armortype)
 {
     if (VAR_26->armortype == 1)
  VAR_25 = VAR_23/3;
     else
  VAR_25 = VAR_23/2;

     if (VAR_26->armorpoints <= VAR_25)
     {

  VAR_25 = VAR_26->armorpoints;
  VAR_26->armortype = 0;
     }
     VAR_26->armorpoints -= VAR_25;
     VAR_23 -= VAR_25;
 }
 VAR_26->health -= VAR_23;
 if (VAR_26->health < 0)
     VAR_26->health = 0;

 VAR_26->attacker = VAR_22;
 VAR_26->damagecount += VAR_23;

 if (VAR_26->damagecount > 100)
     VAR_26->damagecount = 100;

 VAR_28 = VAR_23 < 100 ? VAR_23 : 100;

 if (VAR_26 == &VAR_15[VAR_11])
     FUNC_1 (40,10,40+VAR_28*2);
    }


    VAR_20->health -= VAR_23;
    if (VAR_20->health <= 0)
    {
 FUNC_2 (VAR_22, VAR_20);
 return;
    }

    if ( (FUNC_3 () < VAR_20->info->painchance)
  && !(VAR_20->flags&VAR_8) )
    {
 VAR_20->flags |= VAR_5;

 FUNC_4 (VAR_20, VAR_20->info->painstate);
    }

    VAR_20->reactiontime = 0;

    if ( (!VAR_20->threshold || VAR_20->type == VAR_9)
  && VAR_22 && VAR_22 != VAR_20
  && VAR_22->type != VAR_9)
    {


 VAR_20->target = VAR_22;
 VAR_20->threshold = VAR_2;
 if (VAR_20->state == &VAR_18[VAR_20->info->spawnstate]
     && VAR_20->info->seestate != VAR_10)
     FUNC_4 (VAR_20, VAR_20->info->seestate);
    }

}
