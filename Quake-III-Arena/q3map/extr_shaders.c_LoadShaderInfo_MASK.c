
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* VAR_2 ;
 char* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,char*,...) ;
 int FUNC_7 (char*,int ) ;
 int VAR_5 ;

void FUNC_8( void ) {
 char VAR_6[1024];
 int VAR_7;
 char *VAR_8[VAR_1];
 int VAR_9;

 FUNC_6( VAR_6, "%sscripts/shaderlist.txt", VAR_2 );
 FUNC_1( VAR_6 );

 VAR_9 = 0;
 while ( 1 ) {
  if ( !FUNC_0( VAR_4 ) ) {
   break;
  }
    VAR_8[VAR_9] = FUNC_4(VAR_0);
  FUNC_7( VAR_8[ VAR_9 ], VAR_5 );
  VAR_9++;
 }

 for ( VAR_7 = 0 ; VAR_7 < VAR_9 ; VAR_7++ ) {
  FUNC_6( VAR_6, "%sscripts/%s.shader", VAR_2, VAR_8[VAR_7] );
  FUNC_2( VAR_6 );
    FUNC_3(VAR_8[VAR_7]);
 }

 FUNC_5( "%5i shaderInfo\n", VAR_3);
}
