
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int pVal; TYPE_1__* pSchema; int pExpr; } ;
typedef TYPE_2__ tSQLSyntaxNode ;
typedef int int32_t ;
struct TYPE_4__ {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (int ,char*) ;

int32_t FUNC_3(tSQLSyntaxNode *VAR_2, char *VAR_3, uint8_t VAR_4) {
  int32_t VAR_5 = 0;
  if (VAR_4 == VAR_1) {
    *VAR_3 = '(';
    FUNC_1(VAR_2->pExpr, VAR_3 + 1, &VAR_5);
    VAR_5 += 2;
    *(VAR_3 + VAR_5 - 1) = ')';
  } else if (VAR_4 == VAR_0) {
    VAR_5 = FUNC_0(VAR_3, "%s", VAR_2->pSchema->name);
  } else {
    VAR_5 = FUNC_2(VAR_2->pVal, VAR_3);
  }
  return VAR_5;
}
