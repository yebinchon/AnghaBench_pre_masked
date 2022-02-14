
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int result_e ;
struct TYPE_5__ {int status; int crush; int type; TYPE_3__* sector; int low; int count; int wait; int speed; int high; } ;
typedef TYPE_1__ plat_t ;
typedef int mobj_t ;
struct TYPE_6__ {int soundorg; int floorheight; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int,int ,int) ;

 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



void FUNC_3(plat_t* VAR_6)
{
    result_e VAR_7;

    switch(VAR_6->status)
    {
      case 129:
 VAR_7 = FUNC_2(VAR_6->sector,
     VAR_6->speed,
     VAR_6->high,
     VAR_6->crush,0,1);

 if (VAR_6->type == 131
     || VAR_6->type == 130)
 {
     if (!(VAR_1&7))
  FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
        VAR_5);
 }


 if (VAR_7 == VAR_0 && (!VAR_6->crush))
 {
     VAR_6->count = VAR_6->wait;
     VAR_6->status = 134;
     FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
    VAR_3);
 }
 else
 {
     if (VAR_7 == VAR_2)
     {
  VAR_6->count = VAR_6->wait;
  VAR_6->status = 128;
  FUNC_1((mobj_t *)&VAR_6->sector->soundorg,
        VAR_4);

  switch(VAR_6->type)
  {
    case 135:
    case 133:
      FUNC_0(VAR_6);
      break;

    case 131:
    case 130:
      FUNC_0(VAR_6);
      break;

    default:
      break;
  }
     }
 }
 break;

      case 134:
 VAR_7 = FUNC_2(VAR_6->sector,VAR_6->speed,VAR_6->low,0,0,-1);

 if (VAR_7 == VAR_2)
 {
     VAR_6->count = VAR_6->wait;
     VAR_6->status = 128;
     FUNC_1((mobj_t *)&VAR_6->sector->soundorg,VAR_4);
 }
 break;

      case 128:
 if (!--VAR_6->count)
 {
     if (VAR_6->sector->floorheight == VAR_6->low)
  VAR_6->status = 129;
     else
  VAR_6->status = 134;
     FUNC_1((mobj_t *)&VAR_6->sector->soundorg,VAR_3);
 }
      case 132:
 break;
    }
}
