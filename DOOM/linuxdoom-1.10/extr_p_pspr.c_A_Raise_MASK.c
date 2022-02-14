
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int statenum_t ;
struct TYPE_7__ {scalar_t__ sy; } ;
typedef TYPE_1__ pspdef_t ;
struct TYPE_8__ {size_t readyweapon; } ;
typedef TYPE_2__ player_t ;
struct TYPE_9__ {int readystate; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

void
FUNC_1
( player_t* VAR_4,
  pspdef_t* VAR_5 )
{
    statenum_t VAR_6;

    VAR_5->sy -= VAR_0;

    if (VAR_5->sy > VAR_1 )
 return;

    VAR_5->sy = VAR_1;



    VAR_6 = VAR_3[VAR_4->readyweapon].readystate;

    FUNC_0 (VAR_4, VAR_2, VAR_6);
}
