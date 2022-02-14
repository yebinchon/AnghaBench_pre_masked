
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nodeType; int * pExpr; } ;
typedef TYPE_1__ tSQLSyntaxNode ;
typedef int tSQLBinaryExpr ;
typedef scalar_t__ int32_t ;
typedef int SSchema ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__,char*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(tSQLBinaryExpr **VAR_1, SSchema *VAR_2, int32_t VAR_3, char *VAR_4, int32_t VAR_5) {
  *VAR_1 = ((void*)0);
  if (VAR_5 <= 0 || VAR_4 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 <= 0) {
    return;
  }

  int32_t VAR_6 = 0;
  tSQLSyntaxNode *VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6);
  if (VAR_7 != ((void*)0)) {
    FUNC_0(VAR_7->nodeType == VAR_0);
    *VAR_1 = VAR_7->pExpr;
    FUNC_2(VAR_7);
  }
}
