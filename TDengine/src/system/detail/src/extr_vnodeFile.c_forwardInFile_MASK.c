
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_16__ {scalar_t__ numOfPoints; } ;
struct TYPE_15__ {scalar_t__ lastKeyOnFile; } ;
struct TYPE_12__ {scalar_t__ offset; } ;
struct TYPE_14__ {size_t numOfBlocks; scalar_t__ pos; size_t slot; size_t fileId; scalar_t__ lastKey; scalar_t__ skey; TYPE_1__ limit; TYPE_5__* pBlock; } ;
struct TYPE_13__ {scalar_t__ fileId; scalar_t__ numOfFiles; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterObj ;
typedef TYPE_5__ SCompBlock ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;

int FUNC_2(SQuery *VAR_0, int32_t VAR_1, int32_t VAR_2, SVnodeObj *VAR_3, SMeterObj *VAR_4) {
  SCompBlock *VAR_5 = VAR_0->pBlock;

  while (VAR_1 < VAR_0->numOfBlocks && VAR_1 >= 0 && VAR_0->limit.offset >= VAR_5[VAR_1].numOfPoints) {
    VAR_0->limit.offset -= VAR_5[VAR_1].numOfPoints;
    VAR_1 += VAR_2;
  }

  if (VAR_1 < VAR_0->numOfBlocks && VAR_1 >= 0) {
    if (FUNC_0(VAR_0)) {
      VAR_0->pos = VAR_0->limit.offset;
    } else {
      VAR_0->pos = VAR_5[VAR_1].numOfPoints - VAR_0->limit.offset - 1;
    }
    VAR_0->slot = VAR_1;
    VAR_0->limit.offset = 0;

    return VAR_0->numOfBlocks;
  } else {
    int VAR_6 = 0;
    VAR_0->slot = -1;
    VAR_0->pos = -1;

    while (1) {
      VAR_0->fileId += VAR_2;
      if ((VAR_0->fileId > VAR_3->fileId) || (VAR_0->fileId < VAR_3->fileId - VAR_3->numOfFiles + 1)) {
        VAR_0->lastKey = VAR_4->lastKeyOnFile;
        VAR_0->skey = VAR_0->lastKey + 1;
        return 0;
      }

      VAR_6 = FUNC_1(VAR_4, VAR_0);
      if (VAR_6 == 0) continue;
      if (VAR_6 > 0) break;
    }

    if (VAR_6 > 0) {
      int VAR_7 = FUNC_0(VAR_0) ? 0 : VAR_0->numOfBlocks - 1;
      return FUNC_2(VAR_0, VAR_7, VAR_2, VAR_3, VAR_4);
    } else {
      return VAR_6;
    }
  }
}
