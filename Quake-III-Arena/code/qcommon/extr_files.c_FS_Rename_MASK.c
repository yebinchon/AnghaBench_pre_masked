
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
 char* FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*) ;

void FUNC_7( const char *VAR_5, const char *VAR_6 ) {
 char *VAR_7, *VAR_8;

 if ( !VAR_4 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }


 FUNC_5();

 VAR_7 = FUNC_2( VAR_3->string, VAR_2, VAR_5 );
 VAR_8 = FUNC_2( VAR_3->string, VAR_2, VAR_6 );

 if ( VAR_1->integer ) {
  FUNC_1( "FS_Rename: %s --> %s\n", VAR_7, VAR_8 );
 }

 if (FUNC_6( VAR_7, VAR_8 )) {

  FUNC_3 ( VAR_7, VAR_8 );
  FUNC_4 ( VAR_7 );
 }
}
