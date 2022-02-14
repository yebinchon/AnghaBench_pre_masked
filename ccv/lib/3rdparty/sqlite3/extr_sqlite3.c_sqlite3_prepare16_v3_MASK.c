
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,int,unsigned int,int **,void const**) ;

int FUNC_2(
  sqlite3 *VAR_3,
  const void *VAR_4,
  int VAR_5,
  unsigned int VAR_6,
  sqlite3_stmt **VAR_7,
  const void **VAR_8
){
  int VAR_9;
  VAR_9 = FUNC_1(VAR_3,VAR_4,VAR_5,
         VAR_2|(VAR_6&VAR_1),
         VAR_7,VAR_8);
  FUNC_0( VAR_9==VAR_0 || VAR_7==0 || *VAR_7==0 );
  return VAR_9;
}
