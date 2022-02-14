
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vldoor_e ;
struct TYPE_7__ {int message; int * cards; } ;
typedef TYPE_1__ player_t ;
struct TYPE_8__ {TYPE_1__* player; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_9__ {int special; } ;
typedef TYPE_3__ line_t ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;

int
FUNC_2
( line_t* VAR_10,
  vldoor_e VAR_11,
  mobj_t* VAR_12 )
{
    player_t* VAR_13;

    VAR_13 = VAR_12->player;

    if (!VAR_13)
 return 0;

    switch(VAR_10->special)
    {
      case 99:
      case 133:
 if ( !VAR_13 )
     return 0;
 if (!VAR_13->cards[VAR_3] && !VAR_13->cards[VAR_4])
 {
     VAR_13->message = VAR_0;
     FUNC_1(((void*)0),VAR_9);
     return 0;
 }
 break;

      case 134:
      case 135:
 if ( !VAR_13 )
     return 0;
 if (!VAR_13->cards[VAR_5] && !VAR_13->cards[VAR_6])
 {
     VAR_13->message = VAR_1;
     FUNC_1(((void*)0),VAR_9);
     return 0;
 }
 break;

      case 136:
      case 137:
 if ( !VAR_13 )
     return 0;
 if (!VAR_13->cards[VAR_7] &&
     !VAR_13->cards[VAR_8])
 {
     VAR_13->message = VAR_2;
     FUNC_1(((void*)0),VAR_9);
     return 0;
 }
 break;
    }

    return FUNC_0(VAR_10,VAR_11);
}
