
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_16__ {int idx; } ;
struct TYPE_15__ {size_t numOfRows; } ;
struct TYPE_14__ {int batchSize; TYPE_2__* pDataBlocks; } ;
struct TYPE_13__ {size_t size; size_t nAllocSize; char* pData; size_t numOfParams; TYPE_7__* params; } ;
struct TYPE_12__ {TYPE_1__* pSql; } ;
struct TYPE_11__ {size_t nSize; TYPE_4__** pData; } ;
struct TYPE_10__ {TYPE_5__ cmd; } ;
typedef int TAOS_BIND ;
typedef TYPE_3__ STscStmt ;
typedef TYPE_4__ STableDataBlocks ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SShellSubmitBlock ;
typedef TYPE_7__ SParamInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_7__*,int *) ;
 void* FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(STscStmt* VAR_2, TAOS_BIND* VAR_3) {
  SSqlCmd* VAR_4 = &VAR_2->pSql->cmd;

  int32_t VAR_5 = 1, VAR_6 = 0;
  if (VAR_4->batchSize > 0) {
    VAR_5 = (VAR_4->batchSize + 1) / 2;
    VAR_6 = VAR_4->batchSize / 2;
  }

  for (int32_t VAR_7 = 0; VAR_7 < VAR_4->pDataBlocks->nSize; ++VAR_7) {
    STableDataBlocks* VAR_8 = VAR_4->pDataBlocks->pData[VAR_7];
    uint32_t VAR_9 = VAR_8->size - sizeof(SShellSubmitBlock);
    uint32_t VAR_10 = VAR_9 / VAR_5;
    FUNC_0(VAR_10 * VAR_5 == VAR_9);

    if (VAR_5 == VAR_6) {
      VAR_9 += VAR_10 + sizeof(SShellSubmitBlock);
      if (VAR_9 > VAR_8->nAllocSize) {
        const double VAR_11 = 1.5;
        void* VAR_12 = FUNC_2(VAR_8->pData, (uint32_t)(VAR_9 * VAR_11));
        if (VAR_12 == ((void*)0)) {
          return VAR_0;
        }
        VAR_8->pData = (char*)VAR_12;
        VAR_8->nAllocSize = (uint32_t)(VAR_9 * VAR_11);
      }
    }

    char* VAR_13 = VAR_8->pData + sizeof(SShellSubmitBlock) + VAR_10 * VAR_6;
    for (uint32_t VAR_14 = 0; VAR_14 < VAR_8->numOfParams; ++VAR_14) {
      SParamInfo* VAR_15 = VAR_8->params + VAR_14;
      int VAR_16 = FUNC_1(VAR_13, VAR_15, VAR_3 + VAR_15->idx);
      if (VAR_16 != VAR_1) {
        FUNC_3("param %d: type mismatch or invalid", VAR_15->idx);
        return VAR_16;
      }
    }
  }




  VAR_4->batchSize = VAR_6 * 2 + 1;

  if (VAR_6 < VAR_5) {
    return VAR_1;
  }

  for (int32_t VAR_17 = 0; VAR_17 < VAR_4->pDataBlocks->nSize; ++VAR_17) {
    STableDataBlocks* VAR_18 = VAR_4->pDataBlocks->pData[VAR_17];

    uint32_t VAR_19 = VAR_18->size - sizeof(SShellSubmitBlock);
    VAR_18->size += VAR_19 / VAR_5;

    SShellSubmitBlock* VAR_20 = (SShellSubmitBlock*)VAR_18->pData;
    VAR_20->numOfRows += VAR_20->numOfRows / VAR_5;
  }

  return VAR_1;
}
