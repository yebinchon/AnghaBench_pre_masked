
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int (* Cmd_RemoveCommand ) (char*) ;int (* Printf ) (int ,char*,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ registered; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 TYPE_1__ VAR_3 ;

void FUNC_15( qboolean VAR_4 ) {

 VAR_2.Printf( VAR_0, "RE_Shutdown( %i )\n", VAR_4 );

 VAR_2.Cmd_RemoveCommand ("modellist");
 VAR_2.Cmd_RemoveCommand ("screenshotJPEG");
 VAR_2.Cmd_RemoveCommand ("screenshot");
 VAR_2.Cmd_RemoveCommand ("imagelist");
 VAR_2.Cmd_RemoveCommand ("shaderlist");
 VAR_2.Cmd_RemoveCommand ("skinlist");
 VAR_2.Cmd_RemoveCommand ("gfxinfo");
 VAR_2.Cmd_RemoveCommand( "modelist" );
 VAR_2.Cmd_RemoveCommand( "shaderstate" );


 if ( VAR_3.registered ) {
  FUNC_4();
  FUNC_3();
  FUNC_1();
 }

 FUNC_2();


 if ( VAR_4 ) {
  FUNC_0();
 }

 VAR_3.registered = VAR_1;
}
