
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ z; scalar_t__ floorz; scalar_t__ ceilingz; scalar_t__ height; int y; int x; } ;
typedef TYPE_1__ mobj_t ;
typedef int boolean ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

boolean FUNC_1 (mobj_t* VAR_2)
{
    boolean VAR_3;

    VAR_3 = (VAR_2->z == VAR_2->floorz);

    FUNC_0 (VAR_2, VAR_2->x, VAR_2->y);


    VAR_2->floorz = VAR_1;
    VAR_2->ceilingz = VAR_0;

    if (VAR_3)
    {

 VAR_2->z = VAR_2->floorz;
    }
    else
    {

 if (VAR_2->z+VAR_2->height > VAR_2->ceilingz)
     VAR_2->z = VAR_2->ceilingz - VAR_2->height;
    }

    if (VAR_2->ceilingz - VAR_2->floorz < VAR_2->height)
 return 0;

    return 1;
}
