
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

void FUNC_4( void ) {
 char *VAR_0;
 char VAR_1[256];

 VAR_0 = FUNC_0( 1 );
 if (VAR_0[0]) {
  FUNC_2( "model", VAR_0 );
  FUNC_2( "headmodel", VAR_0 );
 } else {
  FUNC_3( "model", VAR_1, sizeof(VAR_1) );
  FUNC_1("model is set to %s\n", VAR_1);
 }
}
