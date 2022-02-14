
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_7__ {TYPE_3__* mo; scalar_t__* powers; } ;
typedef TYPE_1__ player_t ;
typedef int angle_t ;
struct TYPE_9__ {int angle; int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int,int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

void
FUNC_5
( player_t* VAR_4,
  pspdef_t* VAR_5 )
{
    angle_t VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_7 = (FUNC_2 ()%10+1)<<1;

    if (VAR_4->powers[VAR_2])
 VAR_7 *= 10;

    VAR_6 = VAR_4->mo->angle;
    VAR_6 += (FUNC_2()-FUNC_2())<<18;
    VAR_8 = FUNC_0 (VAR_4->mo, VAR_6, VAR_0);
    FUNC_1 (VAR_4->mo, VAR_6, VAR_0, VAR_8, VAR_7);


    if (VAR_1)
    {
 FUNC_4 (VAR_4->mo, VAR_3);
 VAR_4->mo->angle = FUNC_3 (VAR_4->mo->x,
          VAR_4->mo->y,
          VAR_1->x,
          VAR_1->y);
    }
}
