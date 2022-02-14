
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int angleturn; int forwardmove; int sidemove; } ;
typedef TYPE_1__ ticcmd_t ;
struct TYPE_7__ {TYPE_4__* mo; TYPE_1__ cmd; } ;
typedef TYPE_2__ player_t ;
struct TYPE_8__ {scalar_t__ z; scalar_t__ floorz; int * state; scalar_t__ angle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

void FUNC_2 (player_t* VAR_5)
{
    ticcmd_t* VAR_6;

    VAR_6 = &VAR_5->cmd;

    VAR_5->mo->angle += (VAR_6->angleturn<<16);



    VAR_3 = (VAR_5->mo->z <= VAR_5->mo->floorz);

    if (VAR_6->forwardmove && VAR_3)
 FUNC_1 (VAR_5, VAR_5->mo->angle, VAR_6->forwardmove*2048);

    if (VAR_6->sidemove && VAR_3)
 FUNC_1 (VAR_5, VAR_5->mo->angle-VAR_0, VAR_6->sidemove*2048);

    if ( (VAR_6->forwardmove || VAR_6->sidemove)
  && VAR_5->mo->state == &VAR_4[VAR_1] )
    {
 FUNC_0 (VAR_5->mo, VAR_2);
    }
}
