
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int batchSize; } ;
struct TYPE_6__ {TYPE_1__* pSql; } ;
struct TYPE_5__ {TYPE_3__ cmd; } ;
typedef TYPE_2__ STscStmt ;
typedef TYPE_3__ SSqlCmd ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(STscStmt* VAR_1) {
  SSqlCmd* VAR_2 = &VAR_1->pSql->cmd;
  if ((VAR_2->batchSize % 2) == 1) {
    ++VAR_2->batchSize;
  }
  return VAR_0;
}
