
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int videos ;
typedef int qboolean ;
typedef int key ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int) ;

qboolean FUNC_7( int VAR_3 ) {
 char VAR_4[16];
 char VAR_5[VAR_0];

 if( VAR_3 <= 0 ) {
  return VAR_1;
 }

 FUNC_5( "g_spVideos", VAR_5, sizeof(VAR_5) );

 FUNC_0( VAR_4, sizeof(VAR_4), "tier%i", VAR_3 );
 if( FUNC_3( FUNC_2( VAR_5, VAR_4 ) ) ) {
  return VAR_1;
 }

 FUNC_1( VAR_5, VAR_4, FUNC_6( "%i", 1 ) );
 FUNC_4( "g_spVideos", VAR_5 );

 return VAR_2;
}
