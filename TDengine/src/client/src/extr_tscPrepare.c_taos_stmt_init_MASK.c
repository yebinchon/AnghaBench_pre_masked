
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* pTscObj; struct TYPE_9__* signature; int emptyRspSem; int rspSem; } ;
struct TYPE_8__ {struct TYPE_8__* signature; } ;
struct TYPE_7__ {TYPE_4__* pSql; } ;
typedef TYPE_1__ TAOS_STMT ;
typedef int TAOS ;
typedef TYPE_1__ STscStmt ;
typedef TYPE_3__ STscObj ;
typedef TYPE_4__ SSqlObj ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int) ;

TAOS_STMT* FUNC_4(TAOS* VAR_3) {
  STscObj* VAR_4 = (STscObj*)VAR_3;
  if (VAR_4 == ((void*)0) || VAR_4->signature != VAR_4) {
    VAR_2 = VAR_1;
    FUNC_2("connection disconnected");
    return ((void*)0);
  }

  STscStmt* VAR_5 = FUNC_0(1, sizeof(STscStmt));
  if (VAR_5 == ((void*)0)) {
    VAR_2 = VAR_0;
    FUNC_2("failed to allocate memory for statement");
    return ((void*)0);
  }

  SSqlObj* VAR_6 = FUNC_0(1, sizeof(SSqlObj));
  if (VAR_6 == ((void*)0)) {
    FUNC_1(VAR_5);
    VAR_2 = VAR_0;
    FUNC_2("failed to allocate memory for statement");
    return ((void*)0);
  }

  FUNC_3(&VAR_6->rspSem, 0, 0);
  FUNC_3(&VAR_6->emptyRspSem, 0, 1);
  VAR_6->signature = VAR_6;
  VAR_6->pTscObj = VAR_4;

  VAR_5->pSql = VAR_6;
  return VAR_5;
}
