
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int result_e ;
typedef int mobj_t ;
struct TYPE_5__ {int direction; int speed; int crush; int type; TYPE_2__* sector; int bottomheight; int topheight; } ;
typedef TYPE_1__ ceiling_t ;
struct TYPE_6__ {int soundorg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int,int ,int,int,int) ;

 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;


void FUNC_3 (ceiling_t* VAR_6)
{
    result_e VAR_7;

    switch(VAR_6->direction)
    {
      case 0:

 break;
      case 1:

 VAR_7 = FUNC_2(VAR_6->sector,
     VAR_6->speed,
     VAR_6->topheight,
     0,1,VAR_6->direction);

 if (!(VAR_2&7))
 {
     switch(VAR_6->type)
     {
       case 128:
  break;
       default:
  FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
        VAR_5);

  break;
     }
 }

 if (VAR_7 == VAR_3)
 {
     switch(VAR_6->type)
     {
       case 129:
  FUNC_0(VAR_6);
  break;

       case 128:
  FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
        VAR_4);
       case 132:
       case 133:
  VAR_6->direction = -1;
  break;

       default:
  break;
     }

 }
 break;

      case -1:

 VAR_7 = FUNC_2(VAR_6->sector,
     VAR_6->speed,
     VAR_6->bottomheight,
     VAR_6->crush,1,VAR_6->direction);

 if (!(VAR_2&7))
 {
     switch(VAR_6->type)
     {
       case 128: break;
       default:
  FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
        VAR_5);
     }
 }

 if (VAR_7 == VAR_3)
 {
     switch(VAR_6->type)
     {
       case 128:
  FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
        VAR_4);
       case 133:
  VAR_6->speed = VAR_0;
       case 132:
  VAR_6->direction = 1;
  break;

       case 131:
       case 130:
  FUNC_0(VAR_6);
  break;

       default:
  break;
     }
 }
 else
 {
     if (VAR_7 == VAR_1)
     {
  switch(VAR_6->type)
  {
    case 128:
    case 133:
    case 131:
      VAR_6->speed = VAR_0 / 8;
      break;

    default:
      break;
  }
     }
 }
 break;
    }
}
