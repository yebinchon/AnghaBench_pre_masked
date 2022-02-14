
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int armorpoints; int armortype; } ;
typedef TYPE_1__ player_t ;
typedef int boolean ;



boolean
FUNC_0
( player_t* VAR_0,
  int VAR_1 )
{
    int VAR_2;

    VAR_2 = VAR_1*100;
    if (VAR_0->armorpoints >= VAR_2)
 return 0;

    VAR_0->armortype = VAR_1;
    VAR_0->armorpoints = VAR_2;

    return 1;
}
