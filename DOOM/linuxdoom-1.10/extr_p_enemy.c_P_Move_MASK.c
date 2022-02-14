
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t movedir; int flags; scalar_t__ z; scalar_t__ floorz; TYPE_1__* info; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ mobj_t ;
typedef int line_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;
struct TYPE_6__ {int speed; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int ** VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

boolean FUNC_3 (mobj_t* VAR_10)
{
    fixed_t VAR_11;
    fixed_t VAR_12;

    line_t* VAR_13;



    boolean VAR_14;
    boolean VAR_15;

    if (VAR_10->movedir == VAR_0)
 return 0;

    if ((unsigned)VAR_10->movedir >= 8)
 FUNC_0 ("Weird actor->movedir!");

    VAR_11 = VAR_10->x + VAR_10->info->speed*VAR_8[VAR_10->movedir];
    VAR_12 = VAR_10->y + VAR_10->info->speed*VAR_9[VAR_10->movedir];

    VAR_14 = FUNC_1 (VAR_10, VAR_11, VAR_12);

    if (!VAR_14)
    {

 if (VAR_10->flags & VAR_2 && VAR_4)
 {

     if (VAR_10->z < VAR_7)
  VAR_10->z += VAR_1;
     else
  VAR_10->z -= VAR_1;

     VAR_10->flags |= VAR_3;
     return 1;
 }

 if (!VAR_5)
     return 0;

 VAR_10->movedir = VAR_0;
 VAR_15 = 0;
 while (VAR_5--)
 {
     VAR_13 = VAR_6[VAR_5];



     if (FUNC_2 (VAR_10, VAR_13,0))
  VAR_15 = 1;
 }
 return VAR_15;
    }
    else
    {
 VAR_10->flags &= ~VAR_3;
    }


    if (! (VAR_10->flags & VAR_2) )
 VAR_10->z = VAR_10->floorz;
    return 1;
}
