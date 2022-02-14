
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nSQLOptr; int colInfo; struct TYPE_5__* pLeft; struct TYPE_5__* pRight; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef int SSqlCmd ;
typedef int SColumnIndex ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_3(SSqlCmd* VAR_3, tSQLExpr* VAR_4, int32_t VAR_5) {
  if (VAR_4 == ((void*)0)) {
    return VAR_2;
  }

  if (!FUNC_2(VAR_4)) {
    int32_t VAR_6 = FUNC_3(VAR_3, VAR_4->pLeft, VAR_4->nSQLOptr);
    if (VAR_6 != VAR_2) {
      return VAR_6;
    }

    return FUNC_3(VAR_3, VAR_4->pRight, VAR_4->nSQLOptr);
  } else {
    SColumnIndex VAR_7 = VAR_0;
    if (FUNC_1(&VAR_4->pLeft->colInfo, VAR_3, &VAR_7) != VAR_2) {
      return VAR_1;
    }

    return FUNC_0(VAR_3, &VAR_7, VAR_4, VAR_5);
  }
}
