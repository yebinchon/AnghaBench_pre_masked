
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_7__ {TYPE_3__* mo; } ;
typedef TYPE_1__ player_t ;
typedef int angle_t ;
struct TYPE_9__ {int angle; int flags; int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int,scalar_t__,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5
( player_t* VAR_7,
  pspdef_t* VAR_8 )
{
    angle_t VAR_9;
    int VAR_10;
    int VAR_11;

    VAR_10 = 2*(FUNC_2 ()%10+1);
    VAR_9 = VAR_7->mo->angle;
    VAR_9 += (FUNC_2()-FUNC_2())<<18;


    VAR_11 = FUNC_0 (VAR_7->mo, VAR_9, VAR_2+1);
    FUNC_1 (VAR_7->mo, VAR_9, VAR_2+1, VAR_11, VAR_10);

    if (!VAR_4)
    {
 FUNC_4 (VAR_7->mo, VAR_5);
 return;
    }
    FUNC_4 (VAR_7->mo, VAR_6);


    VAR_9 = FUNC_3 (VAR_7->mo->x, VAR_7->mo->y,
        VAR_4->x, VAR_4->y);
    if (VAR_9 - VAR_7->mo->angle > VAR_0)
    {
 if (VAR_9 - VAR_7->mo->angle < -VAR_1/20)
     VAR_7->mo->angle = VAR_9 + VAR_1/21;
 else
     VAR_7->mo->angle -= VAR_1/20;
    }
    else
    {
 if (VAR_9 - VAR_7->mo->angle > VAR_1/20)
     VAR_7->mo->angle = VAR_9 - VAR_1/21;
 else
     VAR_7->mo->angle += VAR_1/20;
    }
    VAR_7->mo->flags |= VAR_3;
}
