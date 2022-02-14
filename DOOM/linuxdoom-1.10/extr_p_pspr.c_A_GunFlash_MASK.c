
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_5__ {size_t readyweapon; int mo; } ;
typedef TYPE_1__ player_t ;
struct TYPE_6__ {int flashstate; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void
FUNC_2
( player_t* VAR_3,
  pspdef_t* VAR_4 )
{
    FUNC_0 (VAR_3->mo, VAR_0);
    FUNC_1 (VAR_3,VAR_1,VAR_2[VAR_3->readyweapon].flashstate);
}
