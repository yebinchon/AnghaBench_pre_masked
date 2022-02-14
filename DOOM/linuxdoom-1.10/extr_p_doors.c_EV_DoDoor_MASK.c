
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ acp1; } ;
struct TYPE_11__ {TYPE_1__ function; } ;
struct TYPE_9__ {int type; int speed; int topheight; int direction; TYPE_3__* sector; int topwait; TYPE_7__ thinker; } ;
typedef TYPE_2__ vldoor_t ;
typedef int vldoor_e ;
struct TYPE_10__ {int ceilingheight; int soundorg; TYPE_2__* specialdata; } ;
typedef TYPE_3__ sector_t ;
typedef int mobj_t ;
typedef int line_t ;
typedef scalar_t__ actionf_p1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (int,int ,int ) ;







 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_5
( line_t* VAR_10,
  vldoor_e VAR_11 )
{
    int VAR_12,VAR_13;
    sector_t* VAR_14;
    vldoor_t* VAR_15;

    VAR_12 = -1;
    VAR_13 = 0;

    while ((VAR_12 = FUNC_2(VAR_10,VAR_12)) >= 0)
    {
 VAR_14 = &VAR_5[VAR_12];
 if (VAR_14->specialdata)
     continue;



 VAR_13 = 1;
 VAR_15 = FUNC_4 (sizeof(*VAR_15), VAR_1, 0);
 FUNC_0 (&VAR_15->thinker);
 VAR_14->specialdata = VAR_15;

 VAR_15->thinker.function.acp1 = (actionf_p1) VAR_2;
 VAR_15->sector = VAR_14;
 VAR_15->type = VAR_11;
 VAR_15->topwait = VAR_4;
 VAR_15->speed = VAR_3;

 switch(VAR_11)
 {
   case 134:
     VAR_15->topheight = FUNC_1(VAR_14);
     VAR_15->topheight -= 4*VAR_0;
     VAR_15->direction = -1;
     VAR_15->speed = VAR_3 * 4;
     FUNC_3((mobj_t *)&VAR_15->sector->soundorg,
    VAR_6);
     break;

   case 131:
     VAR_15->topheight = FUNC_1(VAR_14);
     VAR_15->topheight -= 4*VAR_0;
     VAR_15->direction = -1;
     FUNC_3((mobj_t *)&VAR_15->sector->soundorg,
    VAR_8);
     break;

   case 130:
     VAR_15->topheight = VAR_14->ceilingheight;
     VAR_15->direction = -1;
     FUNC_3((mobj_t *)&VAR_15->sector->soundorg,
    VAR_8);
     break;

   case 132:
   case 133:
     VAR_15->direction = 1;
     VAR_15->topheight = FUNC_1(VAR_14);
     VAR_15->topheight -= 4*VAR_0;
     VAR_15->speed = VAR_3 * 4;
     if (VAR_15->topheight != VAR_14->ceilingheight)
  FUNC_3((mobj_t *)&VAR_15->sector->soundorg,
        VAR_7);
     break;

   case 129:
   case 128:
     VAR_15->direction = 1;
     VAR_15->topheight = FUNC_1(VAR_14);
     VAR_15->topheight -= 4*VAR_0;
     if (VAR_15->topheight != VAR_14->ceilingheight)
  FUNC_3((mobj_t *)&VAR_15->sector->soundorg,
        VAR_9);
     break;

   default:
     break;
 }

    }
    return VAR_13;
}
