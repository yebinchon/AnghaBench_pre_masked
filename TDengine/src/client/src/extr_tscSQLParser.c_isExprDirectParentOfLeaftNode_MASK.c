
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pRight; int * pLeft; } ;
typedef TYPE_1__ tSQLExpr ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(tSQLExpr* VAR_0) {
  return (VAR_0->pLeft != ((void*)0) && VAR_0->pRight != ((void*)0)) &&
         (FUNC_0(VAR_0->pLeft) && FUNC_0(VAR_0->pRight));
}
