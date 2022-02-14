
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {int numOfElem; } ;
struct TYPE_13__ {int len; } ;
struct TYPE_18__ {int vnodeIndex; scalar_t__ order; int tsIndex; int blockIndex; } ;
struct TYPE_19__ {int numOfVnodes; TYPE_4__* pData; TYPE_2__ block; TYPE_1__ tsData; TYPE_6__ cur; } ;
struct TYPE_17__ {int numOfBlocks; } ;
struct TYPE_15__ {int vnode; } ;
struct TYPE_16__ {TYPE_3__ info; } ;
typedef TYPE_5__ STSVnodeBlockInfo ;
typedef TYPE_6__ STSCursor ;
typedef TYPE_7__ STSBuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,int,int) ;
 TYPE_5__* FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*) ;

bool FUNC_4(STSBuf* VAR_3) {
  if (VAR_3 == ((void*)0) || VAR_3->numOfVnodes == 0) {
    return 0;
  }

  STSCursor* VAR_4 = &VAR_3->cur;


  if (VAR_4->vnodeIndex == -1) {
    if (VAR_4->order == VAR_1) {
      FUNC_1(VAR_3, 0, 0);

      if (VAR_3->block.numOfElem == 0) {
        FUNC_3(VAR_3);
        return 0;
      } else {
        return 1;
      }
    } else {
      int32_t VAR_5 = VAR_3->numOfVnodes - 1;

      int32_t VAR_6 = VAR_3->pData[VAR_4->vnodeIndex].info.vnode;
      STSVnodeBlockInfo* VAR_7 = FUNC_2(VAR_3, VAR_6);
      int32_t VAR_8 = VAR_7->numOfBlocks - 1;

      FUNC_1(VAR_3, VAR_5, VAR_8);

      VAR_4->tsIndex = VAR_3->block.numOfElem - 1;
      if (VAR_3->block.numOfElem == 0) {
        FUNC_3(VAR_3);
        return 0;
      } else {
        return 1;
      }
    }
  }

  int32_t VAR_9 = VAR_4->order == VAR_1 ? 1 : -1;

  while (1) {
    FUNC_0(VAR_3->tsData.len == VAR_3->block.numOfElem * VAR_0);

    if ((VAR_4->order == VAR_1 && VAR_4->tsIndex >= VAR_3->block.numOfElem - 1) ||
        (VAR_4->order == VAR_2 && VAR_4->tsIndex <= 0)) {
      int32_t VAR_10 = VAR_3->pData[VAR_4->vnodeIndex].info.vnode;

      STSVnodeBlockInfo* VAR_11 = FUNC_2(VAR_3, VAR_10);
      if (VAR_11 == ((void*)0) || (VAR_4->blockIndex >= VAR_11->numOfBlocks - 1 && VAR_4->order == VAR_1) ||
          (VAR_4->blockIndex <= 0 && VAR_4->order == VAR_2)) {
        if ((VAR_4->vnodeIndex >= VAR_3->numOfVnodes - 1 && VAR_4->order == VAR_1) ||
            (VAR_4->vnodeIndex <= 0 && VAR_4->order == VAR_2)) {
          VAR_4->vnodeIndex = -1;
          return 0;
        }

        int32_t VAR_12 = VAR_4->order == VAR_1 ? 0 : VAR_11->numOfBlocks - 1;
        FUNC_1(VAR_3, VAR_4->vnodeIndex + VAR_9, VAR_12);
        break;

      } else {
        FUNC_1(VAR_3, VAR_4->vnodeIndex, VAR_4->blockIndex + VAR_9);
        break;
      }
    } else {
      VAR_4->tsIndex += VAR_9;
      break;
    }
  }

  return 1;
}
