
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
typedef TYPE_1__ menucommon_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,char*) ;

void FUNC_9 (void* VAR_3, int VAR_4) {
 if( VAR_4 != VAR_2 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_3)->id ) {
 case 129:
  FUNC_5();
  break;

 case 131:
  FUNC_0();
  break;

 case 130:
  FUNC_6();
  break;

 case 134:
  FUNC_3();
  break;

 case 135:
  FUNC_1();
  break;

 case 132:
  FUNC_4();
  break;

 case 128:
  FUNC_8( "fs_game", "missionpack");
  FUNC_7( VAR_0, "vid_restart;" );
  break;

 case 133:
  FUNC_2( "EXIT GAME?", ((void*)0), VAR_1 );
  break;
 }
}
