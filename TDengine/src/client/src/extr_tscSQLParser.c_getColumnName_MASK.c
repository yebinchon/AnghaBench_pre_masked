
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pNode; int * aliasName; } ;
typedef TYPE_3__ tSQLExprItem ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {scalar_t__ n; int * z; } ;
struct TYPE_6__ {TYPE_1__ operand; } ;


 int FUNC_0 (char*,int *,scalar_t__) ;

void FUNC_1(tSQLExprItem* VAR_0, char* VAR_1, int32_t VAR_2) {
  if (VAR_0->aliasName != ((void*)0)) {
    FUNC_0(VAR_1, VAR_0->aliasName, VAR_2);
  } else {
    int32_t VAR_3 = (VAR_0->pNode->operand.n < VAR_2) ? VAR_0->pNode->operand.n : VAR_2;
    FUNC_0(VAR_1, VAR_0->pNode->operand.z, VAR_3);
  }
}
