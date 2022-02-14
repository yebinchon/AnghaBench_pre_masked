
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSQLExprList ;
struct TYPE_8__ {scalar_t__ nType; int i64Key; double dKey; } ;
struct TYPE_9__ {scalar_t__ nSQLOptr; struct TYPE_9__* pRight; struct TYPE_9__* pLeft; int * pParam; TYPE_1__ val; } ;
typedef TYPE_2__ tSQLExpr ;
typedef double int64_t ;
typedef int int32_t ;



 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;

 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;

tSQLExpr *FUNC_2(tSQLExpr *VAR_7, tSQLExpr *VAR_8, int32_t VAR_9) {
  tSQLExpr *VAR_10 = FUNC_0(1, sizeof(tSQLExpr));

  if (VAR_9 == 130 || VAR_9 == 131 || VAR_9 == 128 || VAR_9 == 132 ||
      VAR_9 == 129) {




    if ((VAR_7->nSQLOptr == VAR_2 && VAR_8->nSQLOptr == VAR_2) ||
        (VAR_7->nSQLOptr == VAR_4 && VAR_8->nSQLOptr == VAR_4)) {
      VAR_10->val.nType = VAR_5;
      VAR_10->nSQLOptr = VAR_7->nSQLOptr;

      switch (VAR_9) {
        case 130: {
          VAR_10->val.i64Key = VAR_7->val.i64Key + VAR_8->val.i64Key;
          break;
        }
        case 131: {
          VAR_10->val.i64Key = VAR_7->val.i64Key - VAR_8->val.i64Key;
          break;
        }
        case 128: {
          VAR_10->val.i64Key = VAR_7->val.i64Key * VAR_8->val.i64Key;
          break;
        }
        case 132: {
          VAR_10->nSQLOptr = VAR_0;
          VAR_10->val.nType = VAR_6;
          VAR_10->val.dKey = (double)VAR_7->val.i64Key / VAR_8->val.i64Key;
          break;
        }
        case 129: {
          VAR_10->val.i64Key = VAR_7->val.i64Key % VAR_8->val.i64Key;
          break;
        }
      }

      FUNC_1(VAR_7);
      FUNC_1(VAR_8);

    } else if ((VAR_7->val.nType == VAR_6 && VAR_8->val.nType == VAR_5) ||
               (VAR_8->val.nType == VAR_6 && VAR_7->val.nType == VAR_5)) {
      VAR_10->val.nType = VAR_6;
      VAR_10->nSQLOptr = VAR_0;

      double VAR_11 = VAR_7->val.nType == VAR_6 ? VAR_7->val.dKey : VAR_7->val.i64Key;
      double VAR_12 = VAR_8->val.nType == VAR_6 ? VAR_8->val.dKey : VAR_8->val.i64Key;

      switch (VAR_9) {
        case 130: {
          VAR_10->val.dKey = VAR_11 + VAR_12;
          break;
        }
        case 131: {
          VAR_10->val.dKey = VAR_11 - VAR_12;
          break;
        }
        case 128: {
          VAR_10->val.dKey = VAR_11 * VAR_12;
          break;
        }
        case 132: {
          VAR_10->val.dKey = VAR_11 / VAR_12;
          break;
        }
        case 129: {
          VAR_10->val.dKey = VAR_11 - ((int64_t)(VAR_11 / VAR_12)) * VAR_12;
          break;
        }
      }

      FUNC_1(VAR_7);
      FUNC_1(VAR_8);

    } else {
      VAR_10->nSQLOptr = VAR_9;
      VAR_10->pLeft = VAR_7;
      VAR_10->pRight = VAR_8;
    }
  } else if (VAR_9 == VAR_1) {
    VAR_10->nSQLOptr = VAR_9;
    VAR_10->pLeft = VAR_7;

    tSQLExpr *VAR_13 = FUNC_0(1, sizeof(tSQLExpr));
    VAR_13->nSQLOptr = VAR_3;
    VAR_13->pParam = (tSQLExprList *)VAR_8;

    VAR_10->pRight = VAR_13;
  } else {
    VAR_10->nSQLOptr = VAR_9;
    VAR_10->pLeft = VAR_7;
    VAR_10->pRight = VAR_8;
  }

  return VAR_10;
}
