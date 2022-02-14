
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int Btree ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ) ;

int FUNC_3(sqlite3 *VAR_0, const char *VAR_1){
  Btree *VAR_2 = FUNC_1(VAR_0, VAR_1);
  return VAR_2 ? FUNC_2(FUNC_0(VAR_2)) : -1;
}
