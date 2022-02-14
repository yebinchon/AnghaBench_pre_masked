
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * angles; int serverTime; int weapon; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_5__ {int * viewangles; int serverTime; int cgameUserCmdValue; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_1( usercmd_t *VAR_1 ) {
 int VAR_2;


 VAR_1->weapon = VAR_0.cgameUserCmdValue;



 VAR_1->serverTime = VAR_0.serverTime;

 for (VAR_2=0 ; VAR_2<3 ; VAR_2++) {
  VAR_1->angles[VAR_2] = FUNC_0(VAR_0.viewangles[VAR_2]);
 }
}
