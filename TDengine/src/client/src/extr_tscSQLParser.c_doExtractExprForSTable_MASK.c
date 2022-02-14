
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* pRight; struct TYPE_11__* pLeft; int nSQLOptr; int colInfo; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
struct TYPE_13__ {scalar_t__ tableIndex; } ;
struct TYPE_12__ {int member_0; } ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSQLToken ;
typedef TYPE_3__ SColumnIndex ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(tSQLExpr** VAR_2, SSqlCmd* VAR_3, tSQLExpr** VAR_4, int32_t VAR_5) {
  if (FUNC_2(*VAR_2)) {
    tSQLExpr* VAR_6 = (*VAR_2)->pLeft;

    SColumnIndex VAR_7 = VAR_0;
    if (FUNC_1(&VAR_6->colInfo, VAR_3, &VAR_7) != VAR_1) {
      return;
    }

    if (VAR_7.tableIndex != VAR_5) {
      return;
    }

    SSQLToken VAR_8 = {0};
    FUNC_0(&VAR_6->colInfo, &VAR_8);

    *VAR_4 = *VAR_2;
    (*VAR_2) = ((void*)0);

  } else {
    *VAR_4 = FUNC_3(((void*)0), ((void*)0), (*VAR_2)->nSQLOptr);

    FUNC_4(&(*VAR_2)->pLeft, VAR_3, &((*VAR_4)->pLeft), VAR_5);
    FUNC_4(&(*VAR_2)->pRight, VAR_3, &((*VAR_4)->pRight), VAR_5);
  }
}
