
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* demoName; int demofile; scalar_t__ spDemoRecording; int demorecording; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,char*,int ,int ) ;
 TYPE_1__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,char*,int) ;
 int FUNC_3 (char*) ;

void FUNC_4( void ) {
 char VAR_3[1024];
 int VAR_4;

 if ( !VAR_0.demorecording ) {
  return;
 }
 if ( VAR_0.spDemoRecording ) {
  return;
 }

 VAR_4 = FUNC_0( VAR_0.demofile );
 FUNC_2( VAR_3, "RECORDING %s: %ik", VAR_0.demoName, VAR_4 / 1024 );

 FUNC_1( 320 - FUNC_3( VAR_3 ) * 4, 20, 8, VAR_3, VAR_1[7], VAR_2 );
}
