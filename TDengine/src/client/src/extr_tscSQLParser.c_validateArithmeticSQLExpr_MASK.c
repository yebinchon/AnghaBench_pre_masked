
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nSQLOptr; struct TYPE_4__* pRight; struct TYPE_4__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef int SSchema ;
typedef int SColumnIdListRes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,scalar_t__,int *) ;

__attribute__((used)) static int32_t FUNC_1(tSQLExpr* VAR_3, SSchema* VAR_4, int32_t VAR_5,
                                         SColumnIdListRes* VAR_6) {
  if (VAR_3 == ((void*)0)) {
    return VAR_2;
  }

  tSQLExpr* VAR_7 = VAR_3->pLeft;
  if (VAR_7->nSQLOptr >= VAR_0 && VAR_7->nSQLOptr <= VAR_1) {
    int32_t VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6);
    if (VAR_8 != VAR_2) {
      return VAR_8;
    }
  } else {
    int32_t VAR_9 = FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);
    if (VAR_9 != VAR_2) {
      return VAR_9;
    }
  }

  tSQLExpr* VAR_10 = VAR_3->pRight;
  if (VAR_10->nSQLOptr >= VAR_0 && VAR_10->nSQLOptr <= VAR_1) {
    int32_t VAR_11 = FUNC_1(VAR_10, VAR_4, VAR_5, VAR_6);
    if (VAR_11 != VAR_2) {
      return VAR_11;
    }
  } else {
    int32_t VAR_12 = FUNC_0(VAR_10, VAR_4, VAR_5, VAR_6);
    if (VAR_12 != VAR_2) {
      return VAR_12;
    }
  }

  return VAR_2;
}
