
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* sqlstr; } ;
struct TYPE_5__ {TYPE_2__* pSql; int taos; scalar_t__ isInsert; } ;
typedef int TAOS_STMT ;
typedef TYPE_1__ STscStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*) ;

int FUNC_4(TAOS_STMT* VAR_1) {
  int VAR_2 = 0;
  STscStmt* VAR_3 = (STscStmt*)VAR_1;
  if (VAR_3->isInsert) {
    VAR_2 = FUNC_0(VAR_3);
  } else {
    char* VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
      VAR_2 = VAR_0;
    } else {
      FUNC_3(VAR_3->pSql->sqlstr);
      VAR_3->pSql->sqlstr = VAR_4;
      VAR_2 = FUNC_2(VAR_3->taos, VAR_3->pSql);
    }
  }
  return VAR_2;
}
