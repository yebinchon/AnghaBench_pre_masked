
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numOfPages; scalar_t__ startPageId; } ;
typedef TYPE_2__ tFlushoutInfo ;
struct TYPE_7__ {size_t nLength; size_t nAllocSize; TYPE_2__* pFlushoutInfo; } ;
struct TYPE_9__ {TYPE_1__ flushoutData; } ;
typedef TYPE_3__ tFileMeta ;
struct TYPE_10__ {scalar_t__ flushModel; scalar_t__ numOfPagesInMem; TYPE_3__ fileMeta; } ;
typedef TYPE_4__ tExtMemBuffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_1(tExtMemBuffer *VAR_1) {
  tFileMeta *VAR_2 = &VAR_1->fileMeta;

  if (VAR_1->flushModel == VAR_0) {
    if (VAR_2->flushoutData.nLength == VAR_2->flushoutData.nAllocSize && !FUNC_0(VAR_2)) {
      return 0;
    }

    tFlushoutInfo *VAR_3 = &VAR_2->flushoutData.pFlushoutInfo[VAR_2->flushoutData.nLength];
    if (VAR_2->flushoutData.nLength == 0) {
      VAR_3->startPageId = 0;
    } else {
      VAR_3->startPageId =
          VAR_2->flushoutData.pFlushoutInfo[VAR_2->flushoutData.nLength - 1].startPageId +
          VAR_2->flushoutData.pFlushoutInfo[VAR_2->flushoutData.nLength - 1].numOfPages;
    }


    VAR_3->numOfPages = VAR_1->numOfPagesInMem;
    VAR_2->flushoutData.nLength += 1;
  } else {

    VAR_2->flushoutData.nLength = 1;
    tFlushoutInfo *VAR_4 = &VAR_2->flushoutData.pFlushoutInfo[0];
    VAR_4->numOfPages += VAR_1->numOfPagesInMem;
  }

  return 1;
}
