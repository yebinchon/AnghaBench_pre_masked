
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nSQLOptr; int pParam; int val; } ;
typedef TYPE_1__ tSQLExpr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(tSQLExpr *VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }

  if (VAR_1->nSQLOptr == VAR_0) {
    FUNC_2(&VAR_1->val);
  }

  FUNC_1(VAR_1->pParam);

  FUNC_0(VAR_1);
}
