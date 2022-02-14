
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_13__ {int nSize; int ** pData; } ;
struct TYPE_12__ {scalar_t__ command; int isInsertFromFile; int vnodeIdx; TYPE_3__* pDataBlocks; } ;
struct TYPE_11__ {TYPE_2__ cmd; } ;
typedef int STableDataBlocks ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef int SMeterMetaInfo ;
typedef TYPE_3__ SDataBlockList ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,TYPE_1__*,size_t,size_t) ;

void FUNC_6(SSqlObj *VAR_2) {
  SSqlCmd *VAR_3 = &VAR_2->cmd;


  if (VAR_3->command != VAR_1) {
    return;
  }


  if (VAR_3->pDataBlocks == ((void*)0)) {
    return;
  }

  STableDataBlocks *VAR_4 = ((void*)0);
  SMeterMetaInfo * VAR_5 = FUNC_3(VAR_3, 0);
  int32_t VAR_6 = VAR_0;


  FUNC_0(VAR_3->isInsertFromFile != -1 && VAR_3->vnodeIdx >= 1 && VAR_3->pDataBlocks != ((void*)0));

  if (VAR_3->vnodeIdx < VAR_3->pDataBlocks->nSize) {
    SDataBlockList *VAR_7 = VAR_3->pDataBlocks;

    for (int32_t VAR_8 = VAR_3->vnodeIdx; VAR_8 < VAR_7->nSize; ++VAR_8) {
      VAR_4 = VAR_7->pData[VAR_8];
      if (VAR_4 == ((void*)0)) {
        continue;
      }

      if ((VAR_6 = FUNC_1(VAR_2, VAR_4)) != VAR_0) {
        FUNC_5("%p build submit data block failed, vnodeIdx:%d, total:%d", VAR_2, VAR_3->vnodeIdx, VAR_7->nSize);
        continue;
      }

      FUNC_4(VAR_2);
    }
  }


  VAR_3->pDataBlocks = FUNC_2(VAR_3->pDataBlocks);
}
