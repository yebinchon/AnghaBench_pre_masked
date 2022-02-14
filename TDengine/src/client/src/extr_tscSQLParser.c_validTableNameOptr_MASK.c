
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const nSQLOptr; } ;
typedef TYPE_1__ tSQLExpr ;
typedef size_t int32_t ;


 char const VAR_0 ;
 char const VAR_1 ;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static bool FUNC_1(tSQLExpr* VAR_2) {
  const char VAR_3[] = {VAR_0, VAR_1};

  for (int32_t VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); ++VAR_4) {
    if (VAR_2->nSQLOptr == VAR_3[VAR_4]) {
      return 1;
    }
  }

  return 0;
}
