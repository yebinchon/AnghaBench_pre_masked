
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nSQLOptr; int * pLeft; int * pRight; } ;
typedef TYPE_1__ tSQLExpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(tSQLExpr* VAR_4) {
  return (VAR_4->pRight == ((void*)0) && VAR_4->pLeft == ((void*)0)) &&
         (VAR_4->nSQLOptr == VAR_1 || (VAR_4->nSQLOptr >= VAR_0 && VAR_4->nSQLOptr <= VAR_2) ||
          VAR_4->nSQLOptr == VAR_3);
}
