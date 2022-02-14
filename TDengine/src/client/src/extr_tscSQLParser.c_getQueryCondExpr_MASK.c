
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nSQLOptr; struct TYPE_8__* pRight; struct TYPE_8__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef int SSqlCmd ;
typedef int SCondExpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__**,int *,scalar_t__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int *,char const*) ;

int32_t FUNC_5(SSqlCmd* VAR_5, tSQLExpr** VAR_6, SCondExpr* VAR_7, int32_t* VAR_8, int32_t VAR_9) {
  if (VAR_6 == ((void*)0)) {
    return VAR_2;
  }

  const char* VAR_10 = "query condition between different columns must use 'AND'";

  tSQLExpr* VAR_11 = (*VAR_6)->pLeft;
  tSQLExpr* VAR_12 = (*VAR_6)->pRight;

  if (!FUNC_3(VAR_11, VAR_12, (*VAR_6)->nSQLOptr)) {
    return VAR_1;
  }

  int32_t VAR_13 = -1;
  int32_t VAR_14 = -1;

  if (!FUNC_2(*VAR_6)) {
    int32_t VAR_15 = FUNC_5(VAR_5, &(*VAR_6)->pLeft, VAR_7, &VAR_13, (*VAR_6)->nSQLOptr);
    if (VAR_15 != VAR_2) {
      return VAR_15;
    }

    VAR_15 = FUNC_5(VAR_5, &(*VAR_6)->pRight, VAR_7, &VAR_14, (*VAR_6)->nSQLOptr);
    if (VAR_15 != VAR_2) {
      return VAR_15;
    }





    if (VAR_13 != VAR_14) {
      if ((*VAR_6)->nSQLOptr == VAR_0 && (VAR_13 + VAR_14 != VAR_4 + VAR_3)) {
        FUNC_4(VAR_5, VAR_10);
        return VAR_1;
      }
    }

    *VAR_8 = VAR_14;
    return VAR_2;
  }

  FUNC_0(*VAR_6);

  return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
