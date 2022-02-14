
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pSql; } ;
typedef int TAOS_STMT ;
typedef int TAOS_RES ;
typedef TYPE_1__ STscStmt ;


 int FUNC_0 (char*) ;

TAOS_RES *FUNC_1(TAOS_STMT* VAR_0) {
  if (VAR_0 == ((void*)0)) {
    FUNC_0("statement is invalid.");
    return ((void*)0);
  }

  STscStmt* VAR_1 = (STscStmt*)VAR_0;
  if (VAR_1->pSql == ((void*)0)) {
    FUNC_0("result has been used already.");
    return ((void*)0);
  }

  TAOS_RES* VAR_2 = VAR_1->pSql;
  VAR_1->pSql = ((void*)0);
  return VAR_2;
}
