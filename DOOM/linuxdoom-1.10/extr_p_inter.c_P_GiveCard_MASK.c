
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cards; int bonuscount; } ;
typedef TYPE_1__ player_t ;
typedef size_t card_t ;


 int VAR_0 ;

void
FUNC_0
( player_t* VAR_1,
  card_t VAR_2 )
{
    if (VAR_1->cards[VAR_2])
 return;

    VAR_1->bonuscount = VAR_0;
    VAR_1->cards[VAR_2] = 1;
}
