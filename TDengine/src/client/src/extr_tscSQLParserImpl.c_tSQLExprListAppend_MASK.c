
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nAlloc; int nExpr; struct tSQLExprItem* a; } ;
typedef TYPE_1__ tSQLExprList ;
typedef int tSQLExpr ;
struct tSQLExprItem {scalar_t__* aliasName; int * pNode; } ;
struct TYPE_8__ {int n; int z; } ;
typedef TYPE_2__ SSQLToken ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (struct tSQLExprItem*,int ,int) ;
 struct tSQLExprItem* FUNC_4 (struct tSQLExprItem*,int) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int ,int) ;

tSQLExprList *FUNC_7(tSQLExprList *VAR_0, tSQLExpr *VAR_1, SSQLToken *VAR_2) {
  if (VAR_0 == ((void*)0)) {
    VAR_0 = FUNC_1(1, sizeof(tSQLExprList));
  }

  if (VAR_0->nAlloc <= VAR_0->nExpr) {
    VAR_0->nAlloc = (VAR_0->nAlloc << 1) + 4;
    VAR_0->a = FUNC_4(VAR_0->a, VAR_0->nAlloc * sizeof(VAR_0->a[0]));
    if (VAR_0->a == 0) {
      VAR_0->nExpr = VAR_0->nAlloc = 0;
      return VAR_0;
    }
  }
  FUNC_0(VAR_0->a != 0);

  if (VAR_1 || VAR_2) {
    struct tSQLExprItem *VAR_3 = &VAR_0->a[VAR_0->nExpr++];
    FUNC_3(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->pNode = VAR_1;
    if (VAR_2) {
      VAR_3->aliasName = FUNC_2(VAR_2->n + 1);
      FUNC_6(VAR_3->aliasName, VAR_2->z, VAR_2->n);
      VAR_3->aliasName[VAR_2->n] = 0;

      FUNC_5(VAR_3->aliasName);
    }
  }
  return VAR_0;
}
