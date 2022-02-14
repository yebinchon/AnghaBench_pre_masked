
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ nSize; int ** pData; } ;
struct TYPE_16__ {int batchSize; int vnodeIdx; TYPE_6__* pDataBlocks; } ;
struct TYPE_14__ {int code; scalar_t__ qhandle; scalar_t__ numOfTotal; scalar_t__ numOfRows; } ;
struct TYPE_15__ {int * thandle; TYPE_2__ res; TYPE_4__ cmd; } ;
struct TYPE_13__ {TYPE_3__* pSql; } ;
typedef TYPE_1__ STscStmt ;
typedef int STableDataBlocks ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_6__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(STscStmt* VAR_2) {
  SSqlCmd* VAR_3 = &VAR_2->pSql->cmd;
  if (VAR_3->batchSize == 0) {
    return VAR_0;
  }
  if ((VAR_3->batchSize % 2) == 1) {
    ++VAR_3->batchSize;
  }

  if (VAR_3->pDataBlocks->nSize > 0) {

    int VAR_4 = FUNC_4(VAR_2->pSql, VAR_3->pDataBlocks);
    if (VAR_4 != VAR_1) {
      return VAR_4;
    }

    STableDataBlocks *VAR_5 = VAR_3->pDataBlocks->pData[0];
    VAR_4 = FUNC_0(VAR_2->pSql, VAR_5);
    if (VAR_4 != VAR_1) {
      return VAR_4;
    }


    VAR_3->vnodeIdx = 1;
  } else {
    VAR_3->pDataBlocks = FUNC_1(VAR_3->pDataBlocks);
  }

  SSqlObj *VAR_6 = VAR_2->pSql;
  SSqlRes *VAR_7 = &VAR_6->res;
  VAR_7->numOfRows = 0;
  VAR_7->numOfTotal = 0;
  VAR_7->qhandle = 0;
  VAR_6->thandle = ((void*)0);

  FUNC_2(VAR_6);


  if (VAR_7->code != VAR_1) {
    FUNC_3(VAR_6);
  }

  return VAR_7->code;
}
