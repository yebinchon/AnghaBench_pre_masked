
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_file ;
typedef scalar_t__ i64 ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1, i64 VAR_2){
  i64 VAR_3;
  int VAR_4 = FUNC_0(VAR_1, &VAR_3);
  if( VAR_4==VAR_0 && VAR_3>VAR_2 ){
    VAR_4 = FUNC_1(VAR_1, VAR_2);
  }
  return VAR_4;
}
