
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5( void ) {
 int VAR_1;
 char VAR_2[16];
 char VAR_3[VAR_0];

 FUNC_3( "g_spAwards", VAR_3, VAR_0 );

 for( VAR_1 = 0; VAR_1 < 6; VAR_1++ ) {
  FUNC_0( VAR_2, sizeof(VAR_2), "a%i", VAR_1 );
  FUNC_1( VAR_3, VAR_2, "100" );
 }

 FUNC_2( "g_spAwards", VAR_3 );

 FUNC_4( "All levels unlocked at 100\n" );
}
