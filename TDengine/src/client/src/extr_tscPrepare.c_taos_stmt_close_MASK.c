
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ numParams; TYPE_1__* sql; TYPE_1__* parts; TYPE_1__* params; } ;
struct TYPE_5__ {int pSql; TYPE_2__ normal; int isInsert; } ;
typedef int TAOS_STMT ;
typedef TYPE_1__ STscStmt ;
typedef TYPE_2__ SNormalStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

int FUNC_3(TAOS_STMT* VAR_1) {
  STscStmt* VAR_2 = (STscStmt*)VAR_1;
  if (!VAR_2->isInsert) {
    SNormalStmt* VAR_3 = &VAR_2->normal;
    if (VAR_3->params != ((void*)0)) {
      for (uint16_t VAR_4 = 0; VAR_4 < VAR_3->numParams; VAR_4++) {
        FUNC_1(VAR_3->params + VAR_4);
      }
      FUNC_0(VAR_3->params);
    }
    FUNC_0(VAR_3->parts);
    FUNC_0(VAR_3->sql);
  }

  FUNC_2(VAR_2->pSql);
  FUNC_0(VAR_2);
  return VAR_0;
}
