
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3( fileHandle_t VAR_0, char *VAR_1 ) {
 char VAR_2[5];
 int VAR_3;
 int VAR_4;

 VAR_2[4] = 0;
 VAR_3 = 0;
 VAR_4 = FUNC_1( VAR_2, 4, VAR_0 );
 if ( VAR_4 != 4 ) {
  return 0;
 }
 VAR_3 = FUNC_0( VAR_0 );
 if ( VAR_3 < 0 || VAR_3 > 0xfffffff ) {
  VAR_3 = 0;
  return 0;
 }
 VAR_3 = (VAR_3 + 1 ) & ~1;


 if ( FUNC_2( VAR_2, VAR_1 ) ) {
  return 0;
 }

 return VAR_3;
}
