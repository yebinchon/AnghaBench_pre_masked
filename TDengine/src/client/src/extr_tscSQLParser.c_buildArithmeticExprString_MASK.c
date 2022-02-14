
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nSQLOptr; struct TYPE_5__* pRight; struct TYPE_5__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char**) ;

int32_t FUNC_2(tSQLExpr* VAR_4, char** VAR_5) {
  tSQLExpr* VAR_6 = VAR_4->pLeft;
  tSQLExpr* VAR_7 = VAR_4->pRight;

  *(*VAR_5) = '(';
  *VAR_5 += 1;

  if (VAR_6->nSQLOptr >= VAR_0 && VAR_6->nSQLOptr <= VAR_1) {
    FUNC_2(VAR_6, VAR_5);
  } else {
    int32_t VAR_8 = FUNC_1(VAR_6, VAR_5);
    if (VAR_8 != VAR_3) {
      return VAR_2;
    }
  }

  FUNC_0(VAR_4, VAR_5);

  if (VAR_7->nSQLOptr >= VAR_0 && VAR_7->nSQLOptr <= VAR_1) {
    FUNC_2(VAR_7, VAR_5);
  } else {
    int32_t VAR_9 = FUNC_1(VAR_7, VAR_5);
    if (VAR_9 != VAR_3) {
      return VAR_2;
    }
  }

  *(*VAR_5) = ')';
  *VAR_5 += 1;

  return VAR_3;
}
