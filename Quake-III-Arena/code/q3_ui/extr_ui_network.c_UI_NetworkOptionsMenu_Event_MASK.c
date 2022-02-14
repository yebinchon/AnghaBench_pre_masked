
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
struct TYPE_6__ {TYPE_1__ rate; } ;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5( void* VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 131:
  FUNC_2();
  FUNC_1();
  break;

 case 132:
  FUNC_2();
  FUNC_0();
  break;

 case 128:
  FUNC_2();
  FUNC_3();
  break;

 case 130:
  break;

 case 129:
  if( VAR_1.rate.curvalue == 0 ) {
   FUNC_4( "rate", 2500 );
  }
  else if( VAR_1.rate.curvalue == 1 ) {
   FUNC_4( "rate", 3000 );
  }
  else if( VAR_1.rate.curvalue == 2 ) {
   FUNC_4( "rate", 4000 );
  }
  else if( VAR_1.rate.curvalue == 3 ) {
   FUNC_4( "rate", 5000 );
  }
  else if( VAR_1.rate.curvalue == 4 ) {
   FUNC_4( "rate", 25000 );
  }
  break;

 case 133:
  FUNC_2();
  break;
 }
}
