
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {scalar_t__ demoversion; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 TYPE_2__ VAR_5 ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3( void *VAR_6, int VAR_7 ) {
 int VAR_8;

 if (VAR_7 != VAR_3)
  return;

 VAR_8 = ((menucommon_s*)VAR_6)->id - VAR_2;
 FUNC_1( "nextmap", FUNC_2( "ui_cinematics %i", VAR_8 ) );
 if( VAR_5.demoversion && ((menucommon_s*)VAR_6)->id == VAR_1 ) {
  FUNC_0( VAR_0, "disconnect; cinematic demoEnd.RoQ 1\n" );
 }
 else {
  FUNC_0( VAR_0, FUNC_2( "disconnect; cinematic %s.RoQ\n", VAR_4[VAR_8] ) );
 }
}
