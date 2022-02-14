
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; scalar_t__ type; scalar_t__ radius; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

boolean FUNC_3 (mobj_t* VAR_7)
{
    fixed_t VAR_8;
    fixed_t VAR_9;
    fixed_t VAR_10;

    if (!(VAR_7->flags & VAR_1) )
 return 1;



    if (VAR_7->type == VAR_2
 || VAR_7->type == VAR_3)
 return 1;

    VAR_8 = FUNC_2(VAR_7->x - VAR_6->x);
    VAR_9 = FUNC_2(VAR_7->y - VAR_6->y);

    VAR_10 = VAR_8>VAR_9 ? VAR_8 : VAR_9;
    VAR_10 = (VAR_10 - VAR_7->radius) >> VAR_0;

    if (VAR_10 < 0)
 VAR_10 = 0;

    if (VAR_10 >= VAR_4)
 return 1;

    if ( FUNC_0 (VAR_7, VAR_6) )
    {

 FUNC_1 (VAR_7, VAR_6, VAR_5, VAR_4 - VAR_10);
    }

    return 1;
}
