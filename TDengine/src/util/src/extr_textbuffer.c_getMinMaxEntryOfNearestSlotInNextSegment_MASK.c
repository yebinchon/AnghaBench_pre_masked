
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numOfSlots; int * pBoundingEntries; int ** pBuffer; } ;
typedef TYPE_1__ tMemBucketSegment ;
struct TYPE_5__ {size_t numOfSegs; size_t nSlotsOfSeg; TYPE_1__* pSegs; } ;
typedef TYPE_2__ tMemBucket ;
typedef size_t int32_t ;
typedef int MinMaxEntry ;


 int FUNC_0 (int) ;

__attribute__((used)) static MinMaxEntry FUNC_1(tMemBucket *VAR_0, int32_t VAR_1) {
  int32_t VAR_2 = VAR_1 + 1;
  while (VAR_2 < VAR_0->numOfSegs && VAR_0->pSegs[VAR_2].numOfSlots == 0) ++VAR_2;

  tMemBucketSegment *VAR_3 = &VAR_0->pSegs[VAR_2];
  FUNC_0(VAR_0->numOfSegs > VAR_2 && VAR_0->pSegs[VAR_2].pBuffer != ((void*)0));

  VAR_2 = 0;
  while (VAR_2 < VAR_0->nSlotsOfSeg && VAR_3->pBuffer[VAR_2] == ((void*)0)) ++VAR_2;

  FUNC_0(VAR_2 < VAR_0->nSlotsOfSeg);
  return VAR_3->pBoundingEntries[VAR_2];
}
