
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nSQLOptr; struct TYPE_5__* pLeft; struct TYPE_5__* pRight; } ;
typedef TYPE_1__ tSQLExpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(tSQLExpr** VAR_2) {
  if (*VAR_2 == ((void*)0) || FUNC_0(*VAR_2)) {
    return;
  }

  if ((*VAR_2)->pLeft) {
    FUNC_2(&(*VAR_2)->pLeft);
  }

  if ((*VAR_2)->pRight) {
    FUNC_2(&(*VAR_2)->pRight);
  }

  if ((*VAR_2)->pLeft == ((void*)0) && (*VAR_2)->pRight == ((void*)0) &&
      ((*VAR_2)->nSQLOptr == VAR_1 || (*VAR_2)->nSQLOptr == VAR_0)) {
    FUNC_1(*VAR_2);
    *VAR_2 = ((void*)0);

  } else if ((*VAR_2)->pLeft == ((void*)0) && (*VAR_2)->pRight != ((void*)0)) {
    tSQLExpr* VAR_3 = (*VAR_2)->pRight;
    FUNC_1(*VAR_2);

    (*VAR_2) = VAR_3;
  } else if ((*VAR_2)->pRight == ((void*)0) && (*VAR_2)->pLeft != ((void*)0)) {
    tSQLExpr* VAR_4 = (*VAR_2)->pLeft;
    FUNC_1(*VAR_2);

    (*VAR_2) = VAR_4;
  }
}
