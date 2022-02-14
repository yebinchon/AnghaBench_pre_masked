
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pRight; struct TYPE_6__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char**) ;
 int FUNC_2 (TYPE_1__*,char**) ;

__attribute__((used)) static int32_t FUNC_3(tSQLExpr* VAR_2, bool VAR_3, char** VAR_4) {
  if (!FUNC_0(VAR_2)) {
    return VAR_0;
  }

  tSQLExpr* VAR_5 = VAR_2->pLeft;
  tSQLExpr* VAR_6 = VAR_2->pRight;

  if (VAR_3) {
    *(*VAR_4) = '(';
    *VAR_4 += 1;
  }

  FUNC_2(VAR_5, VAR_4);
  if (FUNC_1(VAR_2, VAR_4) != VAR_1) {
    return VAR_0;
  }

  FUNC_2(VAR_6, VAR_4);

  if (VAR_3) {
    *(*VAR_4) = ')';
    *VAR_4 += 1;
  }

  return VAR_1;
}
