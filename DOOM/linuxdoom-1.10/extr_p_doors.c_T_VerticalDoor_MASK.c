
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int direction; int topcountdown; int type; int topwait; int thinker; TYPE_3__* sector; int topheight; int speed; } ;
typedef TYPE_1__ vldoor_t ;
typedef int result_e ;
typedef int mobj_t ;
struct TYPE_5__ {int * specialdata; int soundorg; int floorheight; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int,int,int) ;





 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3 (vldoor_t* VAR_5)
{
    result_e VAR_6;

    switch(VAR_5->direction)
    {
      case 0:

 if (!--VAR_5->topcountdown)
 {
     switch(VAR_5->type)
     {
       case 133:
  VAR_5->direction = -1;
  FUNC_1((mobj_t *)&VAR_5->sector->soundorg,
        VAR_2);
  break;

       case 130:
  VAR_5->direction = -1;
  FUNC_1((mobj_t *)&VAR_5->sector->soundorg,
        VAR_3);
  break;

       case 131:
  VAR_5->direction = 1;
  FUNC_1((mobj_t *)&VAR_5->sector->soundorg,
        VAR_4);
  break;

       default:
  break;
     }
 }
 break;

      case 2:

 if (!--VAR_5->topcountdown)
 {
     switch(VAR_5->type)
     {
       case 128:
  VAR_5->direction = 1;
  VAR_5->type = 130;
  FUNC_1((mobj_t *)&VAR_5->sector->soundorg,
        VAR_4);
  break;

       default:
  break;
     }
 }
 break;

      case -1:

 VAR_6 = FUNC_2(VAR_5->sector,
     VAR_5->speed,
     VAR_5->sector->floorheight,
     0,1,VAR_5->direction);
 if (VAR_6 == VAR_1)
 {
     switch(VAR_5->type)
     {
       case 133:
       case 135:
  VAR_5->sector->specialdata = ((void*)0);
  FUNC_0 (&VAR_5->thinker);
  FUNC_1((mobj_t *)&VAR_5->sector->soundorg,
        VAR_2);
  break;

       case 130:
       case 132:
  VAR_5->sector->specialdata = ((void*)0);
  FUNC_0 (&VAR_5->thinker);
  break;

       case 131:
  VAR_5->direction = 0;
  VAR_5->topcountdown = 35*30;
  break;

       default:
  break;
     }
 }
 else if (VAR_6 == VAR_0)
 {
     switch(VAR_5->type)
     {
       case 135:
       case 132:
  break;

       default:
  VAR_5->direction = 1;
  FUNC_1((mobj_t *)&VAR_5->sector->soundorg,
        VAR_4);
  break;
     }
 }
 break;

      case 1:

 VAR_6 = FUNC_2(VAR_5->sector,
     VAR_5->speed,
     VAR_5->topheight,
     0,1,VAR_5->direction);

 if (VAR_6 == VAR_1)
 {
     switch(VAR_5->type)
     {
       case 133:
       case 130:
  VAR_5->direction = 0;
  VAR_5->topcountdown = VAR_5->topwait;
  break;

       case 131:
       case 134:
       case 129:
  VAR_5->sector->specialdata = ((void*)0);
  FUNC_0 (&VAR_5->thinker);
  break;

       default:
  break;
     }
 }
 break;
    }
}
