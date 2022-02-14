
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t nExpr; TYPE_1__* a; } ;
typedef TYPE_3__ tSQLExprList ;
struct TYPE_7__ {size_t nLen; int pz; } ;
struct TYPE_9__ {TYPE_2__ val; TYPE_3__* pParam; } ;
typedef TYPE_4__ tSQLExpr ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_4__* pNode; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,size_t) ;

__attribute__((used)) static int32_t FUNC_2(tSQLExpr* VAR_6, char* VAR_7) {
  tSQLExprList* VAR_8 = VAR_6->pParam;
  if (VAR_8->nExpr <= 0) {
    return VAR_3;
  }

  if (VAR_8->nExpr > 0) {
    FUNC_0(VAR_7, VAR_0);
    VAR_7 += VAR_1;
  }

  int32_t VAR_9 = 0;
  for (int32_t VAR_10 = 0; VAR_10 < VAR_8->nExpr; ++VAR_10) {
    tSQLExpr* VAR_11 = VAR_8->a[VAR_10].pNode;
    FUNC_1(VAR_7 + VAR_9, VAR_11->val.pz, VAR_11->val.nLen);

    VAR_9 += VAR_11->val.nLen;

    if (VAR_10 < VAR_8->nExpr - 1) {
      VAR_7[VAR_9++] = VAR_2[0];
    }

    if (VAR_11->val.nLen <= 0 || VAR_11->val.nLen > VAR_5) {
      return VAR_3;
    }
  }

  return VAR_4;
}
