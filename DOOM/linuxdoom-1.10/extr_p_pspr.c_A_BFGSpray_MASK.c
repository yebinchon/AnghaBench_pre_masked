
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int angle; int target; } ;
typedef TYPE_1__ mobj_t ;
typedef int angle_t ;
struct TYPE_6__ {int height; scalar_t__ z; int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 TYPE_2__* VAR_3 ;

void FUNC_4 (mobj_t* VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    angle_t VAR_8;


    for (VAR_5=0 ; VAR_5<40 ; VAR_5++)
    {
 VAR_8 = VAR_4->angle - VAR_0/2 + VAR_0/40*VAR_5;



 FUNC_0 (VAR_4->target, VAR_8, 16*64*VAR_1);

 if (!VAR_3)
     continue;

 FUNC_3 (VAR_3->x,
       VAR_3->y,
       VAR_3->z + (VAR_3->height>>2),
       VAR_2);

 VAR_7 = 0;
 for (VAR_6=0;VAR_6<15;VAR_6++)
     VAR_7 += (FUNC_2()&7) + 1;

 FUNC_1 (VAR_3, VAR_4->target,VAR_4->target, VAR_7);
    }
}
