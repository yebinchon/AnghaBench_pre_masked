
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pJoinExpr; scalar_t__ pTimewindow; scalar_t__ pColumnCond; scalar_t__ pTagCond; scalar_t__ pTableCond; } ;
typedef TYPE_1__ SCondExpr ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(SCondExpr* VAR_0) {
  if (VAR_0->pTableCond) {
    FUNC_0(VAR_0->pTableCond);
  }

  if (VAR_0->pTagCond) {
    FUNC_0(VAR_0->pTagCond);
  }

  if (VAR_0->pColumnCond) {
    FUNC_0(VAR_0->pColumnCond);
  }

  if (VAR_0->pTimewindow) {
    FUNC_0(VAR_0->pTimewindow);
  }

  if (VAR_0->pJoinExpr) {
    FUNC_0(VAR_0->pJoinExpr);
  }
}
