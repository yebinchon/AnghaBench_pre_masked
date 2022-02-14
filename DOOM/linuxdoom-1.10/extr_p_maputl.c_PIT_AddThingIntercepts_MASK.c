
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ x; scalar_t__ radius; scalar_t__ y; } ;
typedef TYPE_2__ mobj_t ;
typedef scalar_t__ fixed_t ;
struct TYPE_12__ {scalar_t__ dy; scalar_t__ dx; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ divline_t ;
typedef int boolean ;
struct TYPE_10__ {TYPE_2__* thing; } ;
struct TYPE_14__ {int isaline; TYPE_1__ d; scalar_t__ frac; } ;
struct TYPE_13__ {int dx; int dy; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_4__*) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__ VAR_1 ;

boolean FUNC_2 (mobj_t* VAR_2)
{
    fixed_t VAR_3;
    fixed_t VAR_4;
    fixed_t VAR_5;
    fixed_t VAR_6;

    int VAR_7;
    int VAR_8;

    boolean VAR_9;

    divline_t VAR_10;

    fixed_t VAR_11;

    VAR_9 = (VAR_1.dx ^ VAR_1.dy)>0;


    if (VAR_9)
    {
 VAR_3 = VAR_2->x - VAR_2->radius;
 VAR_4 = VAR_2->y + VAR_2->radius;

 VAR_5 = VAR_2->x + VAR_2->radius;
 VAR_6 = VAR_2->y - VAR_2->radius;
    }
    else
    {
 VAR_3 = VAR_2->x - VAR_2->radius;
 VAR_4 = VAR_2->y - VAR_2->radius;

 VAR_5 = VAR_2->x + VAR_2->radius;
 VAR_6 = VAR_2->y + VAR_2->radius;
    }

    VAR_7 = FUNC_1 (VAR_3, VAR_4, &VAR_1);
    VAR_8 = FUNC_1 (VAR_5, VAR_6, &VAR_1);

    if (VAR_7 == VAR_8)
 return 1;

    VAR_10.x = VAR_3;
    VAR_10.y = VAR_4;
    VAR_10.dx = VAR_5-VAR_3;
    VAR_10.dy = VAR_6-VAR_4;

    VAR_11 = FUNC_0 (&VAR_1, &VAR_10);

    if (VAR_11 < 0)
 return 1;

    VAR_0->frac = VAR_11;
    VAR_0->isaline = 0;
    VAR_0->d.thing = VAR_2;
    VAR_0++;

    return 1;
}
