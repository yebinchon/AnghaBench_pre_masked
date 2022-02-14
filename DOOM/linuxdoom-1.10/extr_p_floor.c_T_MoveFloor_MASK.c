
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ result_e ;
typedef int mobj_t ;
struct TYPE_4__ {int direction; int type; TYPE_2__* sector; int thinker; int texture; int newspecial; int crush; int floordestheight; int speed; } ;
typedef TYPE_1__ floormove_t ;
struct TYPE_5__ {int soundorg; int floorpic; int special; int * specialdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int) ;

 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(floormove_t* VAR_4)
{
    result_e VAR_5;

    VAR_5 = FUNC_2(VAR_4->sector,
        VAR_4->speed,
        VAR_4->floordestheight,
        VAR_4->crush,0,VAR_4->direction);

    if (!(VAR_0&7))
 FUNC_1((mobj_t *)&VAR_4->sector->soundorg,
       VAR_3);

    if (VAR_5 == VAR_1)
    {
 VAR_4->sector->specialdata = ((void*)0);

 if (VAR_4->direction == 1)
 {
     switch(VAR_4->type)
     {
       case 129:
  VAR_4->sector->special = VAR_4->newspecial;
  VAR_4->sector->floorpic = VAR_4->texture;
       default:
  break;
     }
 }
 else if (VAR_4->direction == -1)
 {
     switch(VAR_4->type)
     {
       case 128:
  VAR_4->sector->special = VAR_4->newspecial;
  VAR_4->sector->floorpic = VAR_4->texture;
       default:
  break;
     }
 }
 FUNC_0(&VAR_4->thinker);

 FUNC_1((mobj_t *)&VAR_4->sector->soundorg,
       VAR_2);
    }

}
