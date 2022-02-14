
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int integer; } ;


 int FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void) {
 char *VAR_1;
 char VAR_2[1024];


 if ( !VAR_0->integer ) {
  FUNC_2( "Server is not running.\n" );
  return;
 }

 if ( FUNC_0 () < 2 ) {
  return;
 }

 FUNC_5 (VAR_2, "console: ");
 VAR_1 = FUNC_1();

 if ( *VAR_1 == '"' ) {
  VAR_1++;
  VAR_1[FUNC_6(VAR_1)-1] = 0;
 }

 FUNC_4(VAR_2, VAR_1);

 FUNC_3(((void*)0), "chat \"%s\n\"", VAR_2);
}
