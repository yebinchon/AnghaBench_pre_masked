
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;





 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4 = 0;
  FUNC_0(VAR_2);
  switch( FUNC_2(VAR_3[0]) ){
    case 129: VAR_4 = "integer"; break;
    case 128: VAR_4 = "text"; break;
    case 130: VAR_4 = "real"; break;
    case 131: VAR_4 = "blob"; break;
    default: VAR_4 = "null"; break;
  }
  FUNC_1(VAR_1, VAR_4, -1, VAR_0);
}
