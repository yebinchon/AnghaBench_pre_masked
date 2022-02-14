
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ isInsert; } ;
typedef int TAOS_STMT ;
typedef TYPE_1__ STscStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(TAOS_STMT* VAR_1) {
  STscStmt* VAR_2 = (STscStmt*)VAR_1;
  if (VAR_2->isInsert) {
    return FUNC_0(VAR_2);
  }
  return VAR_0;
}
