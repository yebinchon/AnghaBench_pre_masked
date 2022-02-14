
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;
typedef double sqlite3_int64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,double*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vfs *VAR_0, double *VAR_1){
  sqlite3_int64 VAR_2 = 0;
  int VAR_3;
  FUNC_0(VAR_0);
  VAR_3 = FUNC_1(0, &VAR_2);
  *VAR_1 = VAR_2/86400000.0;
  return VAR_3;
}
