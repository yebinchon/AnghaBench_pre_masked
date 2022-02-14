
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pendingWeapon; int weapon; int newModel; int chat; scalar_t__ weaponTimer; int lastWeapon; int currentWeapon; } ;
typedef TYPE_1__ playerInfo_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3( playerInfo_t *VAR_3, const char *VAR_4 ) {
 FUNC_2( VAR_3, 0, sizeof(*VAR_3) );
 FUNC_1( VAR_3, VAR_4 );
 VAR_3->weapon = VAR_0;
 VAR_3->currentWeapon = VAR_3->weapon;
 VAR_3->lastWeapon = VAR_3->weapon;
 VAR_3->pendingWeapon = -1;
 VAR_3->weaponTimer = 0;
 VAR_3->chat = VAR_1;
 VAR_3->newModel = VAR_2;
 FUNC_0( VAR_3, VAR_3->weapon );
}
