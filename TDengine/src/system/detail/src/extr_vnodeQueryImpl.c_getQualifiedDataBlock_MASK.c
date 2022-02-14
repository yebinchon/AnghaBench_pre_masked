
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ (* __block_search_fn_t ) (int ,int ,scalar_t__,int ) ;
struct TYPE_23__ {scalar_t__ keyLast; scalar_t__ keyFirst; } ;
struct TYPE_22__ {int numOfPoints; } ;
struct TYPE_21__ {int data; } ;
struct TYPE_20__ {int vnode; } ;
struct TYPE_17__ {int order; } ;
struct TYPE_19__ {int slot; scalar_t__ lastKey; scalar_t__ fileId; scalar_t__ numOfBlocks; scalar_t__ pos; TYPE_1__ order; int * pFields; TYPE_7__* pBlock; } ;
struct TYPE_18__ {int blockStatus; TYPE_5__* primaryColBuffer; TYPE_3__* pQuery; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterObj ;
typedef TYPE_5__ SData ;
typedef TYPE_6__ SCompBlock ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_6__* FUNC_5 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_7__*,int *,TYPE_2__*,scalar_t__,int,int) ;

__attribute__((used)) static bool FUNC_9(SMeterObj *VAR_3, SQueryRuntimeEnv *VAR_4, int32_t VAR_5,
                                  __block_search_fn_t VAR_6) {
  int32_t VAR_7 = -1;
  int32_t VAR_8 = -1;
  int32_t VAR_9 = (VAR_5 == VAR_2) ? VAR_0 : VAR_1;

  SQuery *VAR_10 = VAR_4->pQuery;
  VAR_10->slot = -1;

  TSKEY VAR_11 = VAR_10->lastKey;

  SData *VAR_12 = VAR_4->primaryColBuffer;
  VAR_10->fileId = FUNC_6(VAR_3->vnode, VAR_11) - VAR_9;

  while (1) {
    if ((VAR_8 = FUNC_7(VAR_4, VAR_3, VAR_9)) < 0) {
      break;
    }

    VAR_7 = FUNC_3(VAR_10, VAR_11);

    if (VAR_5 == VAR_2) {
      if (VAR_11 <= VAR_10->pBlock[VAR_7].keyLast) {
        break;
      } else {
        VAR_7 = -1;
      }
    } else {
      if (VAR_11 >= VAR_10->pBlock[VAR_7].keyFirst) {
        break;
      } else {
        VAR_7 = -1;
      }
    }
  }


  if (VAR_7 == -1) {
    return 0;
  }

  FUNC_2(VAR_7 >= 0 && VAR_7 < VAR_10->numOfBlocks);


  bool VAR_13 = 0;
  while (VAR_7 < VAR_10->numOfBlocks) {
    VAR_10->slot = VAR_7;
    if (FUNC_8(&VAR_10->pBlock[VAR_10->slot], &VAR_10->pFields[VAR_10->slot], VAR_4, VAR_8, 1,
                             1) == 0) {
      FUNC_1(VAR_4->blockStatus);
      VAR_13 = 1;
      break;
    }

    FUNC_4("QInfo:%p fileId:%d total numOfBlks:%d blockId:%d into memory failed due to error in disk files",
           FUNC_0(VAR_10), VAR_10->fileId, VAR_10->numOfBlocks, VAR_7);
    VAR_7 += VAR_9;
  }


  if (VAR_13 == 0) {
    return 0;
  }

  SCompBlock *VAR_14 = FUNC_5(VAR_10, VAR_7);


  VAR_10->pos = VAR_6(VAR_12->data, VAR_14->numOfPoints, VAR_11, VAR_10->order.order);
  FUNC_2(VAR_10->pos >= 0 && VAR_10->fileId >= 0 && VAR_10->slot >= 0);

  return 1;
}
