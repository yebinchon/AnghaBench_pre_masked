
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ radius; int player; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

boolean FUNC_2 (mobj_t* VAR_5)
{
    fixed_t VAR_6;

    if (!(VAR_5->flags & VAR_0) )
 return 1;

    VAR_6 = VAR_5->radius + VAR_2->radius;

    if ( FUNC_1(VAR_5->x - VAR_3) >= VAR_6
  || FUNC_1(VAR_5->y - VAR_4) >= VAR_6 )
    {

 return 1;
    }


    if (VAR_5 == VAR_2)
 return 1;


    if ( !VAR_2->player && VAR_1 != 30)
 return 0;

    FUNC_0 (VAR_5, VAR_2, VAR_2, 10000);

    return 1;
}
