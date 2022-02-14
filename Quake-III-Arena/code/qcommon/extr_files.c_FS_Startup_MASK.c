
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* string; } ;
typedef TYPE_1__ cvar_t ;
struct TYPE_12__ {char const* string; } ;
struct TYPE_11__ {char* string; } ;
struct TYPE_10__ {char* string; } ;
struct TYPE_9__ {char const* string; int modified; } ;
struct TYPE_8__ {char const* string; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int (*) ()) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 char* FUNC_12 () ;
 char* FUNC_13 () ;
 char* FUNC_14 () ;
 int * FUNC_15 (char*,char*) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_16( const char *VAR_14 ) {
        const char *VAR_15;
 cvar_t *VAR_16;

 FUNC_2( "----- FS_Startup -----\n" );

 VAR_7 = FUNC_4( "fs_debug", "0", 0 );
 VAR_6 = FUNC_4( "fs_copyfiles", "0", VAR_1 );
 VAR_5 = FUNC_4 ("fs_cdpath", FUNC_12(), VAR_1 );
 VAR_4 = FUNC_4 ("fs_basepath", FUNC_14(), VAR_1 );
 VAR_3 = FUNC_4 ("fs_basegame", "", VAR_1 );
  VAR_15 = FUNC_13();
  if (!VAR_15 || !VAR_15[0]) {
  VAR_15 = VAR_4->string;
 }
 VAR_9 = FUNC_4 ("fs_homepath", VAR_15, VAR_1 );
 VAR_8 = FUNC_4 ("fs_game", "", VAR_1|VAR_2 );
 VAR_11 = FUNC_4 ("fs_restrict", "", VAR_1 );


 if (VAR_5->string[0]) {
  FUNC_5( VAR_5->string, VAR_14 );
 }
 if (VAR_4->string[0]) {
  FUNC_5( VAR_4->string, VAR_14 );
 }


 if (VAR_4->string[0] && FUNC_11(VAR_9->string,VAR_4->string)) {
  FUNC_5 ( VAR_9->string, VAR_14 );
 }


 if ( VAR_3->string[0] && !FUNC_11( VAR_14, VAR_0 ) && FUNC_11( VAR_3->string, VAR_14 ) ) {
  if (VAR_5->string[0]) {
   FUNC_5(VAR_5->string, VAR_3->string);
  }
  if (VAR_4->string[0]) {
   FUNC_5(VAR_4->string, VAR_3->string);
  }
  if (VAR_9->string[0] && FUNC_11(VAR_9->string,VAR_4->string)) {
   FUNC_5(VAR_9->string, VAR_3->string);
  }
 }


 if ( VAR_8->string[0] && !FUNC_11( VAR_14, VAR_0 ) && FUNC_11( VAR_8->string, VAR_14 ) ) {
  if (VAR_5->string[0]) {
   FUNC_5(VAR_5->string, VAR_8->string);
  }
  if (VAR_4->string[0]) {
   FUNC_5(VAR_4->string, VAR_8->string);
  }
  if (VAR_9->string[0] && FUNC_11(VAR_9->string,VAR_4->string)) {
   FUNC_5(VAR_9->string, VAR_8->string);
  }
 }

 FUNC_3( "baseq3" );
 VAR_16 = FUNC_4 ("fs_game", "", VAR_1|VAR_2 );
 if (VAR_16 && VAR_16->string[0] != 0) {
  FUNC_1( VAR_16->string );
 }


 FUNC_0 ("path", FUNC_8);
 FUNC_0 ("dir", FUNC_6 );
 FUNC_0 ("fdir", FUNC_7 );
 FUNC_0 ("touchFile", FUNC_10 );



 FUNC_9();


 FUNC_8();

 VAR_8->modified = VAR_13;

 FUNC_2( "----------------------\n" );






 FUNC_2( "%d files in pk3 files\n", VAR_10 );
}
