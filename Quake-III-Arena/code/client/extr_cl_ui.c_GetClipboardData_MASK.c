
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( char *VAR_0, int VAR_1 ) {
 char *VAR_2;

 VAR_2 = FUNC_1();

 if ( !VAR_2 ) {
  *VAR_0 = 0;
  return;
 }

 FUNC_0( VAR_0, VAR_2, VAR_1 );

 FUNC_2( VAR_2 );
}
