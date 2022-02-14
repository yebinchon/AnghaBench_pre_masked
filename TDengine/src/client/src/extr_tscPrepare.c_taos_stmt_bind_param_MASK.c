
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ isInsert; } ;
typedef int TAOS_STMT ;
typedef int TAOS_BIND ;
typedef TYPE_1__ STscStmt ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2(TAOS_STMT* VAR_0, TAOS_BIND* VAR_1) {
  STscStmt* VAR_2 = (STscStmt*)VAR_0;
  if (VAR_2->isInsert) {
    return FUNC_0(VAR_2, VAR_1);
  }
  return FUNC_1(VAR_2, VAR_1);
}
