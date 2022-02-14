
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nSQLOptr; int colInfo; struct TYPE_5__* pRight; struct TYPE_5__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static int32_t FUNC_4(SSqlCmd* VAR_4, tSQLExpr* VAR_5, char* VAR_6) {
  const char* VAR_7 = "invalid table name list";

  if (VAR_5 == ((void*)0)) {
    return VAR_3;
  }

  tSQLExpr* VAR_8 = VAR_5->pLeft;
  tSQLExpr* VAR_9 = VAR_5->pRight;

  if (!FUNC_0(&VAR_8->colInfo)) {
    return VAR_2;
  }

  int32_t VAR_10 = VAR_3;

  if (VAR_5->nSQLOptr == VAR_0) {
    VAR_10 = FUNC_3(VAR_9, VAR_6);
  } else if (VAR_5->nSQLOptr == VAR_1) {
    VAR_10 = FUNC_2(VAR_9, VAR_6);
  }

  if (VAR_10 != VAR_3) {
    FUNC_1(VAR_4, VAR_7);
  }

  return VAR_10;
}
