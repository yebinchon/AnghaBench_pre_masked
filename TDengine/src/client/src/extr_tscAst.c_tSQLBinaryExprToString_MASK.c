
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pRight; int nSQLBinaryOptr; TYPE_2__* pLeft; } ;
typedef TYPE_1__ tSQLBinaryExpr ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int nodeType; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,char*,int ) ;
 char* FUNC_1 (int ,char*) ;

void FUNC_2(tSQLBinaryExpr *VAR_0, char *VAR_1, int32_t *VAR_2) {
  if (VAR_0 == ((void*)0)) {
    *VAR_1 = 0;
    *VAR_2 = 0;
  }

  int32_t VAR_3 = FUNC_0(VAR_0->pLeft, VAR_1, VAR_0->pLeft->nodeType);
  VAR_1 += VAR_3;
  *VAR_2 = VAR_3;

  char *VAR_4 = FUNC_1(VAR_0->nSQLBinaryOptr, VAR_1);
  *VAR_2 += (VAR_4 - VAR_1);

  *VAR_2 += FUNC_0(VAR_0->pRight, VAR_4, VAR_0->pRight->nodeType);
}
