
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char*,char*) ;
 char VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static qboolean FUNC_3 (char *VAR_3) {
 char *VAR_4;



 if ( FUNC_2( VAR_3, ".." ) || FUNC_2( VAR_3, "::" ) ) {
  FUNC_0( "WARNING: refusing to create relative path \"%s\"\n", VAR_3 );
  return VAR_2;
 }

 for (VAR_4 = VAR_3+1 ; *VAR_4 ; VAR_4++) {
  if (*VAR_4 == VAR_0) {

   *VAR_4 = 0;
   FUNC_1 (VAR_3);
   *VAR_4 = VAR_0;
  }
 }
 return VAR_1;
}
