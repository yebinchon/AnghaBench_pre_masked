
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {int string; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_0 ;
 char* FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8( const char *VAR_4, const char *VAR_5 ) {
 char *VAR_6, *VAR_7;

 if ( !VAR_3 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }


 FUNC_5();

 VAR_6 = FUNC_2( VAR_2->string, VAR_4, "" );
 VAR_7 = FUNC_2( VAR_2->string, VAR_5, "" );
 VAR_6[FUNC_7(VAR_6)-1] = '\0';
 VAR_7[FUNC_7(VAR_7)-1] = '\0';

 if ( VAR_1->integer ) {
  FUNC_1( "FS_SV_Rename: %s --> %s\n", VAR_6, VAR_7 );
 }

 if (FUNC_6( VAR_6, VAR_7 )) {

  FUNC_3 ( VAR_6, VAR_7 );
  FUNC_4 ( VAR_6 );
 }
}
