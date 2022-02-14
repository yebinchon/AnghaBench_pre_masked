
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int levelShot; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_5__ {int talkSound; int votePassed; int voteFailed; } ;
struct TYPE_6__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (char const*,double,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (char*,char const*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char const*,char const*,char const*) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void FUNC_18( void ) {
 const char *VAR_12;
 char VAR_13[VAR_3];

 VAR_12 = FUNC_1(0);

 if ( !VAR_12[0] ) {

  return;
 }

 if ( !FUNC_14( VAR_12, "cp" ) ) {
  FUNC_2( FUNC_1(1), VAR_7 * 0.30, VAR_0 );
  return;
 }

 if ( !FUNC_14( VAR_12, "cs" ) ) {
  FUNC_3();
  return;
 }

 if ( !FUNC_14( VAR_12, "print" ) ) {
  FUNC_8( "%s", FUNC_1(1) );
  return;
 }

 if ( !FUNC_14( VAR_12, "chat" ) ) {
  if ( !VAR_9.integer ) {
   FUNC_17( VAR_10.media.talkSound, VAR_2 );
   FUNC_13( VAR_13, FUNC_1(1), VAR_3 );
   FUNC_9( VAR_13 );
   FUNC_8( "%s\n", VAR_13 );
  }
  return;
 }

 if ( !FUNC_14( VAR_12, "tchat" ) ) {
  FUNC_17( VAR_10.media.talkSound, VAR_2 );
  FUNC_13( VAR_13, FUNC_1(1), VAR_3 );
  FUNC_9( VAR_13 );
  FUNC_0( VAR_13 );
  FUNC_8( "%s\n", VAR_13 );
  return;
 }
 if ( !FUNC_14( VAR_12, "vchat" ) ) {
  FUNC_10( VAR_4 );
  return;
 }

 if ( !FUNC_14( VAR_12, "vtchat" ) ) {
  FUNC_10( VAR_5 );
  return;
 }

 if ( !FUNC_14( VAR_12, "vtell" ) ) {
  FUNC_10( VAR_6 );
  return;
 }

 if ( !FUNC_14( VAR_12, "scores" ) ) {
  FUNC_6();
  return;
 }

 if ( !FUNC_14( VAR_12, "tinfo" ) ) {
  FUNC_7();
  return;
 }

 if ( !FUNC_14( VAR_12, "map_restart" ) ) {
  FUNC_5();
  return;
 }

  if ( FUNC_11 (VAR_12, "remapShader") == 0 ) {
  if (FUNC_15() == 4) {
   FUNC_16(FUNC_1(1), FUNC_1(2), FUNC_1(3));
  }
 }


 if ( !FUNC_14( VAR_12, "loaddefered" ) ) {
  FUNC_4();
  return;
 }



 if ( !FUNC_14( VAR_12, "clientLevelShot" ) ) {
  VAR_8.levelShot = VAR_11;
  return;
 }

 FUNC_8( "Unknown client game command: %s\n", VAR_12 );
}
