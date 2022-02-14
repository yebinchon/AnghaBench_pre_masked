
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* snext; int y; int x; int angle; } ;
typedef TYPE_1__ mobj_t ;
struct TYPE_4__ {TYPE_1__* thinglist; } ;


 int FUNC_0 (int ,int ,int,int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

void
FUNC_1
( int VAR_6,
  int VAR_7)
{
    int VAR_8;
    mobj_t* VAR_9;

    for (VAR_8=0;VAR_8<VAR_3;VAR_8++)
    {
 VAR_9 = VAR_4[VAR_8].thinglist;
 while (VAR_9)
 {
     FUNC_0
  (VAR_5, VAR_1,
   16<<VAR_0, VAR_9->angle, VAR_6+VAR_2, VAR_9->x, VAR_9->y);
     VAR_9 = VAR_9->snext;
 }
    }
}
