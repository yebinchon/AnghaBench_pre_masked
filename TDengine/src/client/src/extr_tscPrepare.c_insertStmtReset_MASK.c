
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_13__ {size_t numOfRows; } ;
struct TYPE_12__ {int batchSize; scalar_t__ vnodeIdx; TYPE_2__* pDataBlocks; } ;
struct TYPE_11__ {int size; scalar_t__ pData; } ;
struct TYPE_10__ {TYPE_1__* pSql; } ;
struct TYPE_9__ {size_t nSize; TYPE_4__** pData; } ;
struct TYPE_8__ {TYPE_5__ cmd; } ;
typedef TYPE_3__ STscStmt ;
typedef TYPE_4__ STableDataBlocks ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SShellSubmitBlock ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(STscStmt* VAR_1) {
  SSqlCmd* VAR_2 = &VAR_1->pSql->cmd;
  if (VAR_2->batchSize > 2) {
    int32_t VAR_3 = (VAR_2->batchSize + 1) / 2;
    for (int32_t VAR_4 = 0; VAR_4 < VAR_2->pDataBlocks->nSize; ++VAR_4) {
      STableDataBlocks* VAR_5 = VAR_2->pDataBlocks->pData[VAR_4];

      uint32_t VAR_6 = VAR_5->size - sizeof(SShellSubmitBlock);
      VAR_5->size = sizeof(SShellSubmitBlock) + VAR_6 / VAR_3;

      SShellSubmitBlock* VAR_7 = (SShellSubmitBlock*)VAR_5->pData;
      VAR_7->numOfRows = VAR_7->numOfRows / VAR_3;
    }
  }
  VAR_2->batchSize = 0;
  VAR_2->vnodeIdx = 0;
  return VAR_0;
}
