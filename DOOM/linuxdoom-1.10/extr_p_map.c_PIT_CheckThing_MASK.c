
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int flags; scalar_t__ radius; scalar_t__ z; scalar_t__ height; scalar_t__ type; struct TYPE_12__* target; TYPE_1__* info; scalar_t__ momz; scalar_t__ momy; scalar_t__ momx; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;
struct TYPE_11__ {int damage; int spawnstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

boolean FUNC_5 (mobj_t* VAR_13)
{
    fixed_t VAR_14;
    boolean VAR_15;
    int VAR_16;

    if (!(VAR_13->flags & (VAR_4|VAR_5|VAR_2) ))
 return 1;

    VAR_14 = VAR_13->radius + VAR_10->radius;

    if ( FUNC_4(VAR_13->x - VAR_11) >= VAR_14
  || FUNC_4(VAR_13->y - VAR_12) >= VAR_14 )
    {

 return 1;
    }


    if (VAR_13 == VAR_10)
 return 1;


    if (VAR_10->flags & VAR_3)
    {
 VAR_16 = ((FUNC_1()%8)+1)*VAR_10->info->damage;

 FUNC_0 (VAR_13, VAR_10, VAR_10, VAR_16);

 VAR_10->flags &= ~VAR_3;
 VAR_10->momx = VAR_10->momy = VAR_10->momz = 0;

 FUNC_2 (VAR_10, VAR_10->info->spawnstate);

 return 0;
    }



    if (VAR_10->flags & VAR_0)
    {

 if (VAR_10->z > VAR_13->z + VAR_13->height)
     return 1;
 if (VAR_10->z+VAR_10->height < VAR_13->z)
     return 1;

 if (VAR_10->target && (
     VAR_10->target->type == VAR_13->type ||
     (VAR_10->target->type == VAR_7 && VAR_13->type == VAR_6)||
     (VAR_10->target->type == VAR_6 && VAR_13->type == VAR_7) ) )
 {

     if (VAR_13 == VAR_10->target)
  return 1;

     if (VAR_13->type != VAR_8)
     {


  return 0;
     }
 }

 if (! (VAR_13->flags & VAR_2) )
 {

     return !(VAR_13->flags & VAR_4);
 }


 VAR_16 = ((FUNC_1()%8)+1)*VAR_10->info->damage;
 FUNC_0 (VAR_13, VAR_10, VAR_10->target, VAR_16);


 return 0;
    }


    if (VAR_13->flags & VAR_5)
    {
 VAR_15 = VAR_13->flags&VAR_4;
 if (VAR_9&VAR_1)
 {

     FUNC_3 (VAR_13, VAR_10);
 }
 return !VAR_15;
    }

    return !(VAR_13->flags & VAR_4);
}
