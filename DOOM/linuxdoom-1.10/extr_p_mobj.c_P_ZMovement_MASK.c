
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ z; scalar_t__ floorz; int momz; int flags; int height; scalar_t__ ceilingz; TYPE_2__* player; TYPE_1__* target; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ mobj_t ;
typedef int fixed_t ;
struct TYPE_8__ {scalar_t__ viewheight; int deltaviewheight; } ;
struct TYPE_7__ {int z; scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_3 (mobj_t* VAR_10)
{
    fixed_t VAR_11;
    fixed_t VAR_12;


    if (VAR_10->player && VAR_10->z < VAR_10->floorz)
    {
 VAR_10->player->viewheight -= VAR_10->floorz-VAR_10->z;

 VAR_10->player->deltaviewheight
     = (VAR_8 - VAR_10->player->viewheight)>>3;
    }


    VAR_10->z += VAR_10->momz;

    if ( VAR_10->flags & VAR_2
  && VAR_10->target)
    {

 if ( !(VAR_10->flags & VAR_7)
      && !(VAR_10->flags & VAR_3) )
 {
     VAR_11 = FUNC_0 (VAR_10->x - VAR_10->target->x,
        VAR_10->y - VAR_10->target->y);

     VAR_12 =(VAR_10->target->z + (VAR_10->height>>1)) - VAR_10->z;

     if (VAR_12<0 && VAR_11 < -(VAR_12*3) )
  VAR_10->z -= VAR_0;
     else if (VAR_12>0 && VAR_11 < (VAR_12*3) )
  VAR_10->z += VAR_0;
 }

    }


    if (VAR_10->z <= VAR_10->floorz)
    {





 if (VAR_10->flags & VAR_7)
 {

     VAR_10->momz = -VAR_10->momz;
 }

 if (VAR_10->momz < 0)
 {
     if (VAR_10->player
  && VAR_10->momz < -VAR_1*8)
     {




  VAR_10->player->deltaviewheight = VAR_10->momz>>3;
  FUNC_2 (VAR_10, VAR_9);
     }
     VAR_10->momz = 0;
 }
 VAR_10->z = VAR_10->floorz;

 if ( (VAR_10->flags & VAR_4)
      && !(VAR_10->flags & VAR_5) )
 {
     FUNC_1 (VAR_10);
     return;
 }
    }
    else if (! (VAR_10->flags & VAR_6) )
    {
 if (VAR_10->momz == 0)
     VAR_10->momz = -VAR_1*2;
 else
     VAR_10->momz -= VAR_1;
    }

    if (VAR_10->z + VAR_10->height > VAR_10->ceilingz)
    {

 if (VAR_10->momz > 0)
     VAR_10->momz = 0;
 {
     VAR_10->z = VAR_10->ceilingz - VAR_10->height;
 }

 if (VAR_10->flags & VAR_7)
 {
     VAR_10->momz = -VAR_10->momz;
 }

 if ( (VAR_10->flags & VAR_4)
      && !(VAR_10->flags & VAR_5) )
 {
     FUNC_1 (VAR_10);
     return;
 }
    }
}
