
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numOfSlots; scalar_t__* pBuffer; int * pBoundingEntries; } ;
typedef TYPE_1__ tMemBucketSegment ;
struct TYPE_6__ {size_t nSlotsOfSeg; TYPE_1__* pSegs; } ;
typedef TYPE_2__ tMemBucket ;
typedef size_t int32_t ;
typedef int MinMaxEntry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,size_t) ;

__attribute__((used)) static MinMaxEntry FUNC_2(tMemBucket *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  tMemBucketSegment *VAR_3 = &VAR_0->pSegs[VAR_1];

  MinMaxEntry VAR_4;
  if (VAR_2 == VAR_3->numOfSlots - 1) {
    return FUNC_1(VAR_0, VAR_1);
  } else {
    int32_t VAR_5 = VAR_2 + 1;
    for (; VAR_5 < VAR_0->nSlotsOfSeg && VAR_0->pSegs[VAR_1].pBuffer[VAR_5] == 0; ++VAR_5) {
    };

    if (VAR_5 == VAR_0->nSlotsOfSeg) {

      return FUNC_1(VAR_0, VAR_1);
    } else {
      VAR_4 = VAR_3->pBoundingEntries[VAR_2 + 1];
      FUNC_0(VAR_3->pBuffer[VAR_2 + 1] != ((void*)0));
    }
  }

  return VAR_4;
}
