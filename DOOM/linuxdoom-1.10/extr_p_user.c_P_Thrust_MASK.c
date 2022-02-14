
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mo; } ;
typedef TYPE_2__ player_t ;
typedef int fixed_t ;
typedef size_t angle_t ;
struct TYPE_4__ {int momy; int momx; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

void
FUNC_1
( player_t* VAR_3,
  angle_t VAR_4,
  fixed_t VAR_5 )
{
    VAR_4 >>= VAR_0;

    VAR_3->mo->momx += FUNC_0(VAR_5,VAR_1[VAR_4]);
    VAR_3->mo->momy += FUNC_0(VAR_5,VAR_2[VAR_4]);
}
