
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int r ;


 int VAR_0 ;
 int FUNC_0 (int,int **) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  sqlite_int64 VAR_4;
  FUNC_0(VAR_2, VAR_3);
  FUNC_1(sizeof(VAR_4), &VAR_4);
  if( VAR_4<0 ){
    VAR_4 = -(VAR_4 & VAR_0);
  }
  FUNC_2(VAR_1, VAR_4);
}
