
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oldPath ;


 int FUNC_0 (char*,int,char*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3 (char *VAR_1, int VAR_2, const char *VAR_3 ) {
 char VAR_4[VAR_0];
 char *VAR_5;





 VAR_5 = VAR_1 + FUNC_2(VAR_1) - 1;

 while (*VAR_5 != '/' && VAR_5 != VAR_1) {
  if ( *VAR_5 == '.' ) {
   return;
  }
  VAR_5--;
 }

 FUNC_1( VAR_4, VAR_1, sizeof( VAR_4 ) );
 FUNC_0( VAR_1, VAR_2, "%s%s", VAR_4, VAR_3 );
}
