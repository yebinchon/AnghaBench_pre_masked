
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int floorheight; int tag; int ceilingheight; TYPE_3__* specialdata; } ;
typedef TYPE_2__ sector_t ;
typedef int line_t ;
struct TYPE_9__ {scalar_t__ acp1; } ;
struct TYPE_12__ {TYPE_1__ function; } ;
struct TYPE_11__ {int crush; int bottomheight; int direction; int speed; int type; int tag; int topheight; TYPE_2__* sector; TYPE_7__ thinker; } ;
typedef TYPE_3__ ceiling_t ;
typedef int ceiling_e ;
typedef scalar_t__ actionf_p1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_5 (int,int ,int ) ;





 TYPE_2__* VAR_4 ;


int
FUNC_6
( line_t* VAR_5,
  ceiling_e VAR_6 )
{
    int VAR_7;
    int VAR_8;
    sector_t* VAR_9;
    ceiling_t* VAR_10;

    VAR_7 = -1;
    VAR_8 = 0;


    switch(VAR_6)
    {
      case 132:
      case 128:
      case 133:
 FUNC_0(VAR_5);
      default:
 break;
    }

    while ((VAR_7 = FUNC_4(VAR_5,VAR_7)) >= 0)
    {
 VAR_9 = &VAR_4[VAR_7];
 if (VAR_9->specialdata)
     continue;


 VAR_8 = 1;
 VAR_10 = FUNC_5 (sizeof(*VAR_10), VAR_2, 0);
 FUNC_2 (&VAR_10->thinker);
 VAR_9->specialdata = VAR_10;
 VAR_10->thinker.function.acp1 = (actionf_p1)VAR_3;
 VAR_10->sector = VAR_9;
 VAR_10->crush = 0;

 switch(VAR_6)
 {
   case 132:
     VAR_10->crush = 1;
     VAR_10->topheight = VAR_9->ceilingheight;
     VAR_10->bottomheight = VAR_9->floorheight + (8*VAR_1);
     VAR_10->direction = -1;
     VAR_10->speed = VAR_0 * 2;
     break;

   case 128:
   case 133:
     VAR_10->crush = 1;
     VAR_10->topheight = VAR_9->ceilingheight;
   case 131:
   case 130:
     VAR_10->bottomheight = VAR_9->floorheight;
     if (VAR_6 != 130)
  VAR_10->bottomheight += 8*VAR_1;
     VAR_10->direction = -1;
     VAR_10->speed = VAR_0;
     break;

   case 129:
     VAR_10->topheight = FUNC_3(VAR_9);
     VAR_10->direction = 1;
     VAR_10->speed = VAR_0;
     break;
 }

 VAR_10->tag = VAR_9->tag;
 VAR_10->type = VAR_6;
 FUNC_1(VAR_10);
    }
    return VAR_8;
}
