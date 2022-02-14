
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int dirlist ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int) ;

__attribute__((used)) static qboolean FUNC_3( void ) {
 int VAR_2;
 char VAR_3[2048];
 char *VAR_4;
  char *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_2 = FUNC_2( "$modlist", "", VAR_3, sizeof(VAR_3) );
 VAR_4 = VAR_3;
 for( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++ ) {
  VAR_7 = FUNC_1( VAR_4 ) + 1;
    VAR_5 = VAR_4 + VAR_7;
  if (FUNC_0(VAR_4, "missionpack") == 0) {
   return VAR_1;
  }
    VAR_4 += VAR_7 + FUNC_1(VAR_5) + 1;
 }
 return VAR_0;
}
