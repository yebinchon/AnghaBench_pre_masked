
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;

void FUNC_1 (char **VAR_1) {
 char *VAR_2;
 int VAR_3;

 VAR_3 = 0;
 do {
  VAR_2 = FUNC_0( VAR_1, VAR_0 );
  if( VAR_2[1] == 0 ) {
   if( VAR_2[0] == '{' ) {
    VAR_3++;
   }
   else if( VAR_2[0] == '}' ) {
    VAR_3--;
   }
  }
 } while( VAR_3 && *VAR_1 );
}
