
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; scalar_t__ height; scalar_t__ z; void* x; void* y; scalar_t__ ceilingz; scalar_t__ floorz; } ;
typedef TYPE_1__ mobj_t ;
struct TYPE_12__ {scalar_t__ special; } ;
typedef TYPE_2__ line_t ;
typedef void* fixed_t ;
typedef int boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,void*,void*) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_2 (void*,void*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 TYPE_2__** VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

boolean
FUNC_5
( mobj_t* VAR_12,
  fixed_t VAR_13,
  fixed_t VAR_14 )
{
    fixed_t VAR_15;
    fixed_t VAR_16;
    int VAR_17;
    int VAR_18;
    line_t* VAR_19;

    VAR_5 = 0;
    if (!FUNC_0 (VAR_12, VAR_13, VAR_14))
 return 0;

    if ( !(VAR_12->flags & VAR_3) )
    {
 if (VAR_9 - VAR_11 < VAR_12->height)
     return 0;

 VAR_5 = 1;

 if ( !(VAR_12->flags&VAR_4)
      &&VAR_9 - VAR_12->z < VAR_12->height)
     return 0;

 if ( !(VAR_12->flags&VAR_4)
      && VAR_11 - VAR_12->z > 24*VAR_0 )
     return 0;

 if ( !(VAR_12->flags&(VAR_1|VAR_2))
      && VAR_11 - VAR_10 > 24*VAR_0 )
     return 0;
    }



    FUNC_4 (VAR_12);

    VAR_15 = VAR_12->x;
    VAR_16 = VAR_12->y;
    VAR_12->floorz = VAR_11;
    VAR_12->ceilingz = VAR_9;
    VAR_12->x = VAR_13;
    VAR_12->y = VAR_14;

    FUNC_3 (VAR_12);


    if (! (VAR_12->flags&(VAR_4|VAR_3)) )
    {
 while (VAR_7--)
 {

     VAR_19 = VAR_8[VAR_7];
     VAR_17 = FUNC_2 (VAR_12->x, VAR_12->y, VAR_19);
     VAR_18 = FUNC_2 (VAR_15, VAR_16, VAR_19);
     if (VAR_17 != VAR_18)
     {
  if (VAR_19->special)
      FUNC_1 (VAR_19-VAR_6, VAR_18, VAR_12);
     }
 }
    }

    return 1;
}
