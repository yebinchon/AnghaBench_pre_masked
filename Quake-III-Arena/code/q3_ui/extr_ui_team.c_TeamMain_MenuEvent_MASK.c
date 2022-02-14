
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
typedef TYPE_1__ menucommon_s ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2( void* VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_1 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 129:
  FUNC_1( VAR_0, "cmd team red\n" );
  FUNC_0();
  break;

 case 131:
  FUNC_1( VAR_0, "cmd team blue\n" );
  FUNC_0();
  break;

 case 130:
  FUNC_1( VAR_0, "cmd team free\n" );
  FUNC_0();
  break;

 case 128:
  FUNC_1( VAR_0, "cmd team spectator\n" );
  FUNC_0();
  break;
 }
}
