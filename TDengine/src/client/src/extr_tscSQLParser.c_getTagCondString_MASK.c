
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pRight; struct TYPE_6__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,char**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,char**) ;

__attribute__((used)) static int32_t FUNC_3(SSqlCmd* VAR_1, tSQLExpr* VAR_2, char** VAR_3) {
  if (VAR_2 == ((void*)0)) {
    return VAR_0;
  }

  if (!FUNC_0(VAR_2)) {
    *(*VAR_3) = '(';
    *VAR_3 += 1;

    int32_t VAR_4 = FUNC_3(VAR_1, VAR_2->pLeft, VAR_3);
    if (VAR_4 != VAR_0) {
      return VAR_4;
    }

    FUNC_1(VAR_1, VAR_2, VAR_3);

    VAR_4 = FUNC_3(VAR_1, VAR_2->pRight, VAR_3);

    *(*VAR_3) = ')';
    *VAR_3 += 1;

    return VAR_4;
  }

  return FUNC_2(VAR_2, 1, VAR_3);
}
