
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

__attribute__((used)) static void FUNC_0( char *VAR_1 ) {
 char *VAR_2;

 for ( VAR_2 = VAR_1 ; *VAR_2 ; VAR_2++ ) {
  if ( *VAR_2 == '/' || *VAR_2 == '\\' ) {
   *VAR_2 = VAR_0;
  }
 }
}
