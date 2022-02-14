
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (char*,int ) ;

qboolean FUNC_14( void ) {
 char VAR_5[VAR_1];

 FUNC_10( 0, VAR_5, sizeof( VAR_5 ) );

 if ( FUNC_1 (VAR_5, "entitylist") == 0 ) {
  FUNC_6();
  return VAR_4;
 }

 if ( FUNC_1 (VAR_5, "forceteam") == 0 ) {
  FUNC_7();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "game_memory") == 0) {
  FUNC_8();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "addbot") == 0) {
  FUNC_3();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "botlist") == 0) {
  FUNC_5();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "abort_podium") == 0) {
  FUNC_2();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "addip") == 0) {
  FUNC_4();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "removeip") == 0) {
  FUNC_9();
  return VAR_4;
 }

 if (FUNC_1 (VAR_5, "listip") == 0) {
  FUNC_11( VAR_0, "g_banIPs\n" );
  return VAR_4;
 }

 if (VAR_2.integer) {
  if (FUNC_1 (VAR_5, "say") == 0) {
   FUNC_12( -1, FUNC_13("print \"server: %s\"", FUNC_0(1) ) );
   return VAR_4;
  }

  FUNC_12( -1, FUNC_13("print \"server: %s\"", FUNC_0(0) ) );
  return VAR_4;
 }

 return VAR_3;
}
