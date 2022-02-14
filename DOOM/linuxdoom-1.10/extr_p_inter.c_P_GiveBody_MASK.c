
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ health; TYPE_1__* mo; } ;
typedef TYPE_2__ player_t ;
typedef int boolean ;
struct TYPE_4__ {scalar_t__ health; } ;


 scalar_t__ VAR_0 ;

boolean
FUNC_0
( player_t* VAR_1,
  int VAR_2 )
{
    if (VAR_1->health >= VAR_0)
 return 0;

    VAR_1->health += VAR_2;
    if (VAR_1->health > VAR_0)
 VAR_1->health = VAR_0;
    VAR_1->mo->health = VAR_1->health;

    return 1;
}
