
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nExpr; struct TYPE_4__* a; int pNode; struct TYPE_4__* aliasName; } ;
typedef TYPE_1__ tSQLExprList ;
typedef size_t int32_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(tSQLExprList *VAR_0) {
  if (VAR_0 == ((void*)0)) return;

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->nExpr; ++VAR_1) {
    if (VAR_0->a[VAR_1].aliasName != ((void*)0)) {
      FUNC_0(VAR_0->a[VAR_1].aliasName);
    }
    FUNC_1(VAR_0->a[VAR_1].pNode);
  }

  FUNC_0(VAR_0->a);
  FUNC_0(VAR_0);
}
