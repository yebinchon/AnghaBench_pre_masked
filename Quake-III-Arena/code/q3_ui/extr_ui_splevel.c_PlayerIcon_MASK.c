
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int model ;


 int FUNC_0 (char*,int,char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( const char *VAR_1, char *VAR_2, int VAR_3 ) {
 char *VAR_4;
 char VAR_5[VAR_0];

 FUNC_2( VAR_5, VAR_1, sizeof(VAR_5));
 VAR_4 = FUNC_3( VAR_5, '/' );
 if ( VAR_4 ) {
  *VAR_4++ = '\0';
 }
 else {
  VAR_4 = "default";
 }

 FUNC_0(VAR_2, VAR_3, "models/players/%s/icon_%s.tga", VAR_5, VAR_4 );

 if( !FUNC_4( VAR_2 ) && FUNC_1( VAR_4, "default" ) != 0 ) {
  FUNC_0(VAR_2, VAR_3, "models/players/%s/icon_default.tga", VAR_5 );
 }
}
