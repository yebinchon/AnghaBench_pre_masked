
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_4__ {int curvalue; } ;
struct TYPE_6__ {TYPE_1__ handicap; } ;





 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5( void* VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 129:
  FUNC_3( "handicap", FUNC_4( "%i", 100 - 25 * VAR_1.handicap.curvalue ) );
  break;

 case 128:
  FUNC_0();
  FUNC_1();
  break;

 case 130:
  FUNC_0();
  FUNC_2();
  break;
 }
}
