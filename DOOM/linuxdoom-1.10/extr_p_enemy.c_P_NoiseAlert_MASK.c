
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* subsector; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_6__ {int sector; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void
FUNC_1
( mobj_t* VAR_2,
  mobj_t* VAR_3 )
{
    VAR_0 = VAR_2;
    VAR_1++;
    FUNC_0 (VAR_3->subsector->sector, 0);
}
