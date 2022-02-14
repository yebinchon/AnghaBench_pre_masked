
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serverTime; int weapon; int buttons; int upmove; int rightmove; int forwardmove; int * angles; } ;
typedef TYPE_1__ usercmd_t ;
typedef int msg_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,int ,int) ;

void FUNC_2( msg_t *VAR_0, usercmd_t *VAR_1, usercmd_t *VAR_2 ) {
 if ( VAR_2->serverTime - VAR_1->serverTime < 256 ) {
  FUNC_0( VAR_0, 1, 1 );
  FUNC_0( VAR_0, VAR_2->serverTime - VAR_1->serverTime, 8 );
 } else {
  FUNC_0( VAR_0, 0, 1 );
  FUNC_0( VAR_0, VAR_2->serverTime, 32 );
 }
 FUNC_1( VAR_0, VAR_1->angles[0], VAR_2->angles[0], 16 );
 FUNC_1( VAR_0, VAR_1->angles[1], VAR_2->angles[1], 16 );
 FUNC_1( VAR_0, VAR_1->angles[2], VAR_2->angles[2], 16 );
 FUNC_1( VAR_0, VAR_1->forwardmove, VAR_2->forwardmove, 8 );
 FUNC_1( VAR_0, VAR_1->rightmove, VAR_2->rightmove, 8 );
 FUNC_1( VAR_0, VAR_1->upmove, VAR_2->upmove, 8 );
 FUNC_1( VAR_0, VAR_1->buttons, VAR_2->buttons, 16 );
 FUNC_1( VAR_0, VAR_1->weapon, VAR_2->weapon, 8 );
}
