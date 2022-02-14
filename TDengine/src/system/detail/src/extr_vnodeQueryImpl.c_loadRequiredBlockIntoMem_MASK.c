
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_22__ {scalar_t__ numOfBlocks; int * cacheBlocks; } ;
struct TYPE_21__ {scalar_t__ pCache; } ;
struct TYPE_20__ {int fileId; int pos; int slot; } ;
struct TYPE_17__ {int order; } ;
struct TYPE_19__ {int fileId; int pos; TYPE_1__ order; int slot; } ;
struct TYPE_18__ {int blockStatus; TYPE_5__* pMeterObj; TYPE_3__* pQuery; } ;
typedef int TSKEY ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SPositionInfo ;
typedef TYPE_5__ SMeterObj ;
typedef TYPE_6__ SCacheInfo ;
typedef int SCacheBlock ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int * FUNC_4 (TYPE_5__*,TYPE_3__*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (int*,TYPE_2__*,int ) ;

int64_t FUNC_10(SQueryRuntimeEnv *VAR_1, SPositionInfo *VAR_2) {
  TSKEY VAR_3 = -1;

  SQuery * VAR_4 = VAR_1->pQuery;
  SMeterObj *VAR_5 = VAR_1->pMeterObj;

  VAR_4->fileId = VAR_2->fileId;
  VAR_4->slot = VAR_2->slot;
  VAR_4->pos = VAR_2->pos;

  if (VAR_2->fileId == -1) {
    SCacheInfo *VAR_6 = (SCacheInfo *)VAR_5->pCache;
    if (VAR_6 == ((void*)0) || VAR_6->numOfBlocks == 0 || VAR_6->cacheBlocks == ((void*)0)) {
      FUNC_7(VAR_4, VAR_0);
      return -1;
    }

    SCacheBlock *VAR_7 = FUNC_4(VAR_5, VAR_4, VAR_4->slot);
    if (VAR_7 != ((void*)0)) {
      VAR_3 = FUNC_5(VAR_7, VAR_2->pos);
    } else {

    }

    FUNC_1(VAR_1->blockStatus);
  } else {





    int32_t VAR_8 = FUNC_9(&VAR_4->fileId, VAR_1, VAR_4->order.order);
    if (VAR_8 < 0) {
      FUNC_3("QInfo:%p failed to get data file:%d", FUNC_0(VAR_4), VAR_4->fileId);

      VAR_2->fileId = -1;
      return -1;
    }





    int32_t VAR_9 = FUNC_8(VAR_5, VAR_1, VAR_8);
    FUNC_2(VAR_9 > 0);

    VAR_3 = FUNC_6(VAR_1, VAR_4->pos);
  }

  return VAR_3;
}
