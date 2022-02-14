
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ batchSize; scalar_t__ numOfParams; } ;
struct TYPE_10__ {int sqlstr; TYPE_1__ cmd; } ;
struct TYPE_9__ {int db; int acctId; } ;
struct TYPE_8__ {TYPE_4__* pSql; TYPE_3__* taos; } ;
typedef TYPE_2__ STscStmt ;
typedef TYPE_3__ STscObj ;
typedef TYPE_4__ SSqlObj ;


 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(STscStmt* VAR_0) {
  STscObj* VAR_1 = VAR_0->taos;
  SSqlObj *VAR_2 = VAR_0->pSql;
  VAR_2->cmd.numOfParams = 0;
  VAR_2->cmd.batchSize = 0;

  return FUNC_0(VAR_2, VAR_2->sqlstr, VAR_1->acctId, VAR_1->db);
}
