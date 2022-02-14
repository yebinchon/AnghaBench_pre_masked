
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {scalar_t__ nSize; int * pData; } ;
struct TYPE_10__ {scalar_t__ vnodeIdx; TYPE_3__* pDataBlocks; int isInsertFromFile; } ;
struct TYPE_9__ {int param; int (* fp ) (int ,int *,int) ;int (* fetchFp ) (int ,int *,int) ;struct TYPE_9__* signature; TYPE_2__ cmd; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SDataBlockList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,TYPE_1__*,...) ;

void FUNC_6(void *VAR_1, TAOS_RES *VAR_2, int VAR_3) {
  SSqlObj *VAR_4 = (SSqlObj *)VAR_1;
  SSqlCmd *VAR_5 = &VAR_4->cmd;
  int32_t VAR_6 = VAR_0;

  FUNC_0(!VAR_5->isInsertFromFile && VAR_4->signature == VAR_4);

  SDataBlockList *VAR_7 = VAR_5->pDataBlocks;
  if (VAR_7 == ((void*)0) || VAR_5->vnodeIdx >= VAR_7->nSize) {

    VAR_4->fp = VAR_4->fetchFp;
    FUNC_5("%p Async insertion completed, destroy data block list", VAR_4);


    VAR_5->pDataBlocks = FUNC_3(VAR_5->pDataBlocks);


    (*VAR_4->fp)(VAR_4->param, VAR_2, VAR_3);
  } else {
    do {
      VAR_6 = FUNC_2(VAR_4, VAR_7->pData[VAR_5->vnodeIdx++]);
      if (VAR_6 != VAR_0) {
        FUNC_5("%p prepare submit data block failed in async insertion, vnodeIdx:%d, total:%d, code:%d",
                 VAR_4, VAR_5->vnodeIdx - 1, VAR_7->nSize, VAR_6);
      }

    } while (VAR_6 != VAR_0 && VAR_5->vnodeIdx < VAR_7->nSize);


    if (VAR_6 == VAR_0) {
      FUNC_5("%p async insertion, vnodeIdx:%d, total:%d", VAR_4, VAR_5->vnodeIdx - 1, VAR_7->nSize);
      FUNC_4(VAR_4);
    }
  }
}
