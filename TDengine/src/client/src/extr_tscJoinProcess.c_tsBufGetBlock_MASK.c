
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_16__ {int numOfElem; int compLen; int payload; } ;
struct TYPE_12__ {int len; int allocSize; int rawBuf; } ;
struct TYPE_14__ {size_t vnodeIndex; size_t blockIndex; scalar_t__ order; int tsIndex; } ;
struct TYPE_15__ {TYPE_2__ tsData; int bufSize; int assistBuf; TYPE_6__ block; TYPE_4__ cur; TYPE_1__* pData; } ;
struct TYPE_13__ {size_t numOfBlocks; } ;
struct TYPE_11__ {TYPE_3__ info; } ;
typedef TYPE_3__ STSVnodeBlockInfo ;
typedef TYPE_4__ STSCursor ;
typedef TYPE_5__ STSBuf ;
typedef TYPE_6__ STSBlock ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_5__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*,size_t) ;
 int FUNC_4 (int ,int ,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(STSBuf* VAR_4, int32_t VAR_5, int32_t VAR_6) {
  STSVnodeBlockInfo* VAR_7 = &VAR_4->pData[VAR_5].info;
  if (VAR_7->numOfBlocks <= VAR_6) {
    FUNC_1(0);
  }

  STSCursor* VAR_8 = &VAR_4->cur;
  if (VAR_8->vnodeIndex == VAR_5 && ((VAR_8->blockIndex <= VAR_6 && VAR_8->order == VAR_1) ||
                                         (VAR_8->blockIndex >= VAR_6 && VAR_8->order == VAR_2))) {
    int32_t VAR_9 = 0;
    bool VAR_10 = 0;
    int32_t VAR_11 = FUNC_0(VAR_6 - VAR_8->blockIndex);

    while ((++VAR_9) <= VAR_11) {
      if (FUNC_2(VAR_4, VAR_8->order, VAR_10) == ((void*)0)) {
        return;
      }
    }
  } else {
    if (FUNC_3(VAR_4, VAR_7, VAR_6) == -1) {
      FUNC_1(0);
    }
  }

  STSBlock* VAR_12 = &VAR_4->block;
  VAR_4->tsData.len =
      FUNC_4(VAR_12->payload, VAR_12->compLen, VAR_12->numOfElem, VAR_4->tsData.rawBuf,
                            VAR_4->tsData.allocSize, VAR_3, VAR_4->assistBuf, VAR_4->bufSize);

  FUNC_1(VAR_4->tsData.len / VAR_0 == VAR_12->numOfElem);

  VAR_8->vnodeIndex = VAR_5;
  VAR_8->blockIndex = VAR_6;

  VAR_8->tsIndex = (VAR_8->order == VAR_1) ? 0 : VAR_12->numOfElem - 1;
}
