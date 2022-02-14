
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int voidfunc_f ;
struct TYPE_2__ {int id; } ;
typedef TYPE_1__ menucommon_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;

void FUNC_9( void *VAR_4, int VAR_5 ) {
 if( VAR_5 != VAR_3 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_4)->id ) {
 case 129:
  FUNC_6();
  break;

 case 130:
  FUNC_5();
  break;

 case 136:
  FUNC_8( VAR_0, "disconnect\n" );
  break;

 case 133:
  FUNC_1( "RESTART ARENA?", (voidfunc_f)((void*)0), VAR_2 );
  break;

 case 135:
  FUNC_1( "EXIT GAME?", (voidfunc_f)((void*)0), VAR_1 );
  break;

 case 131:
  FUNC_4();
  break;

 case 137:
  FUNC_0();
  break;

 case 134:
  FUNC_3();
  break;

 case 128:
  FUNC_7();
  break;

 case 132:
  FUNC_2();
  break;
 }
}
