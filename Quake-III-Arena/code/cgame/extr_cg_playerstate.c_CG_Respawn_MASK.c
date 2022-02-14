
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* snap; int weaponSelect; int time; int weaponSelectTime; int thisFrameTeleport; } ;
struct TYPE_4__ {int weapon; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;

void FUNC_0( void ) {

 VAR_0.thisFrameTeleport = VAR_1;


 VAR_0.weaponSelectTime = VAR_0.time;


 VAR_0.weaponSelect = VAR_0.snap->ps.weapon;
}
