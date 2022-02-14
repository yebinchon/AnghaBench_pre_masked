
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,char*,int,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_0;
 char VAR_1[128];
 char VAR_2[128];

 VAR_0 = FUNC_0();
 if ( VAR_0 == -1 ) {
  return;
 }

 FUNC_2( VAR_2, 128 );
 FUNC_1( VAR_1, 128, "vtell %i %s", VAR_0, VAR_2 );
 FUNC_3( VAR_1 );
}
