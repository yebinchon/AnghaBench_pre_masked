
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
typedef TYPE_1__ menucommon_s ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(void* VAR_2, int VAR_3) {
 if( VAR_3 != VAR_1 ) {
  return;
 }

 FUNC_1();

 if( ((menucommon_s*)VAR_2)->id == VAR_0 ) {
  return;
 }


 FUNC_0();
 FUNC_3( "ui_spSelection", 0 );
 FUNC_1();
 FUNC_2();
}
