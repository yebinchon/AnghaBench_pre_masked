
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_16__ {scalar_t__ acp1; } ;
struct TYPE_15__ {TYPE_1__ function; } ;
struct TYPE_17__ {int direction; int speed; int topheight; int type; int topwait; TYPE_3__* sector; TYPE_12__ thinker; } ;
typedef TYPE_2__ vldoor_t ;
struct TYPE_18__ {TYPE_2__* specialdata; int soundorg; } ;
typedef TYPE_3__ sector_t ;
struct TYPE_19__ {int message; int * cards; } ;
typedef TYPE_4__ player_t ;
struct TYPE_20__ {TYPE_4__* player; } ;
typedef TYPE_5__ mobj_t ;
struct TYPE_21__ {int special; size_t* sidenum; } ;
typedef TYPE_6__ line_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_22__ {TYPE_3__* sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_12__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_3 (int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_3__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_7__* VAR_22 ;

void
FUNC_4
( line_t* VAR_23,
  mobj_t* VAR_24 )
{
    player_t* VAR_25;
    int VAR_26;
    sector_t* VAR_27;
    vldoor_t* VAR_28;
    int VAR_29;

    VAR_29 = 0;


    VAR_25 = VAR_24->player;

    switch(VAR_23->special)
    {
      case 26:
      case 32:
 if ( !VAR_25 )
     return;

 if (!VAR_25->cards[VAR_10] && !VAR_25->cards[VAR_11])
 {
     VAR_25->message = VAR_1;
     FUNC_2(((void*)0),VAR_21);
     return;
 }
 break;

      case 27:
      case 34:
 if ( !VAR_25 )
     return;

 if (!VAR_25->cards[VAR_14] &&
     !VAR_25->cards[VAR_15])
 {
     VAR_25->message = VAR_3;
     FUNC_2(((void*)0),VAR_21);
     return;
 }
 break;

      case 28:
      case 33:
 if ( !VAR_25 )
     return;

 if (!VAR_25->cards[VAR_12] && !VAR_25->cards[VAR_13])
 {
     VAR_25->message = VAR_2;
     FUNC_2(((void*)0),VAR_21);
     return;
 }
 break;
    }


    VAR_27 = VAR_22[ VAR_23->sidenum[VAR_29^1]] .sector;
    VAR_26 = VAR_27-VAR_18;

    if (VAR_27->specialdata)
    {
 VAR_28 = VAR_27->specialdata;
 switch(VAR_23->special)
 {
   case 1:
   case 26:
   case 27:
   case 28:
   case 117:
     if (VAR_28->direction == -1)
  VAR_28->direction = 1;
     else
     {
  if (!VAR_24->player)
      return;

  VAR_28->direction = -1;
     }
     return;
 }
    }


    switch(VAR_23->special)
    {
      case 117:
      case 118:
 FUNC_2((mobj_t *)&VAR_27->soundorg,VAR_19);
 break;

      case 1:
      case 31:
 FUNC_2((mobj_t *)&VAR_27->soundorg,VAR_20);
 break;

      default:
 FUNC_2((mobj_t *)&VAR_27->soundorg,VAR_20);
 break;
    }



    VAR_28 = FUNC_3 (sizeof(*VAR_28), VAR_4, 0);
    FUNC_0 (&VAR_28->thinker);
    VAR_27->specialdata = VAR_28;
    VAR_28->thinker.function.acp1 = (actionf_p1) VAR_5;
    VAR_28->sector = VAR_27;
    VAR_28->direction = 1;
    VAR_28->speed = VAR_6;
    VAR_28->topwait = VAR_7;

    switch(VAR_23->special)
    {
      case 1:
      case 26:
      case 27:
      case 28:
 VAR_28->type = VAR_16;
 break;

      case 31:
      case 32:
      case 33:
      case 34:
 VAR_28->type = VAR_17;
 VAR_23->special = 0;
 break;

      case 117:
 VAR_28->type = VAR_9;
 VAR_28->speed = VAR_6*4;
 break;
      case 118:
 VAR_28->type = VAR_8;
 VAR_23->special = 0;
 VAR_28->speed = VAR_6*4;
 break;
    }


    VAR_28->topheight = FUNC_1(VAR_27);
    VAR_28->topheight -= 4*VAR_0;
}
