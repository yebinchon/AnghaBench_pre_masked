
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int isInsert; TYPE_1__* pSql; } ;
struct TYPE_5__ {char* sqlstr; } ;
typedef int TAOS_STMT ;
typedef TYPE_2__ STscStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char const*,unsigned long) ;
 int FUNC_3 (TYPE_2__*) ;
 unsigned long FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;

int FUNC_8(TAOS_STMT* VAR_1, const char* VAR_2, unsigned long VAR_3) {
  STscStmt* VAR_4 = (STscStmt*)VAR_1;
  if (VAR_3 == 0) {
    VAR_3 = FUNC_4(VAR_2);
  }
  char* VAR_5 = (char*)FUNC_1(VAR_3 + 1);
  if (VAR_5 == ((void*)0)) {
    FUNC_6("failed to malloc sql string buffer");
    return VAR_0;
  }
  FUNC_2(VAR_5, VAR_2, VAR_3);
  VAR_5[VAR_3] = 0;
  FUNC_5(VAR_5, VAR_5);

  VAR_4->pSql->sqlstr = VAR_5;
  if (FUNC_7(VAR_5)) {
    VAR_4->isInsert = 1;
    return FUNC_0(VAR_4);
  }

  VAR_4->isInsert = 0;
  return FUNC_3(VAR_4);
}
