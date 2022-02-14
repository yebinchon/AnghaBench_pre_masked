
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nAlloc; int nList; int ** a; } ;
typedef TYPE_1__ tSQLExprListList ;
typedef int tSQLExprList ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int ** FUNC_2 (int **,int) ;

tSQLExprListList *FUNC_3(tSQLExprListList *VAR_0, tSQLExprList *VAR_1) {
  if (VAR_0 == ((void*)0)) VAR_0 = FUNC_1(1, sizeof(tSQLExprListList));

  if (VAR_0->nAlloc <= VAR_0->nList) {
    VAR_0->nAlloc = (VAR_0->nAlloc << 1) + 4;
    VAR_0->a = FUNC_2(VAR_0->a, VAR_0->nAlloc * sizeof(VAR_0->a[0]));
    if (VAR_0->a == 0) {
      VAR_0->nList = VAR_0->nAlloc = 0;
      return VAR_0;
    }
  }
  FUNC_0(VAR_0->a != 0);

  if (VAR_1) {
    VAR_0->a[VAR_0->nList++] = VAR_1;
  }

  return VAR_0;
}
