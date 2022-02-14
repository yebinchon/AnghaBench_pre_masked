
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t numOfSlots; int ** pBuffer; } ;
typedef TYPE_1__ tMemBucketSegment ;
struct TYPE_5__ {size_t numOfSegs; TYPE_1__* pSegs; } ;
typedef TYPE_2__ tMemBucket ;
typedef size_t int32_t ;


 int FUNC_0 (int **) ;

void FUNC_1(tMemBucket *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  if (VAR_1 < 0 || VAR_1 > VAR_0->numOfSegs || VAR_2 < 0) {
    return;
  }

  tMemBucketSegment *VAR_3 = &VAR_0->pSegs[VAR_1];
  if (VAR_2 < 0 || VAR_2 >= VAR_3->numOfSlots || VAR_3->pBuffer[VAR_2] == ((void*)0)) {
    return;
  }

  FUNC_0(&VAR_3->pBuffer[VAR_2]);
}
