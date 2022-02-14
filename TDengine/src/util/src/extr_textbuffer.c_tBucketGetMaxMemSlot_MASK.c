
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t numOfSlots; TYPE_1__** pBuffer; } ;
typedef TYPE_2__ tMemBucketSegment ;
struct TYPE_7__ {size_t numOfSegs; TYPE_2__* pSegs; } ;
typedef TYPE_3__ tMemBucket ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_5__ {size_t numOfPagesInMem; } ;



__attribute__((used)) static void FUNC_0(tMemBucket *VAR_0, int16_t *VAR_1, int16_t *VAR_2) {
  *VAR_1 = -1;
  *VAR_2 = -1;

  int32_t VAR_3 = 0;
  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->numOfSegs; ++VAR_4) {
    tMemBucketSegment *VAR_5 = &VAR_0->pSegs[VAR_4];
    for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfSlots; ++VAR_6) {
      if (VAR_5->pBuffer == ((void*)0) || VAR_5->pBuffer[VAR_6] == ((void*)0)) {
        continue;
      }

      if (VAR_3 < VAR_5->pBuffer[VAR_6]->numOfPagesInMem) {
        VAR_3 = VAR_5->pBuffer[VAR_6]->numOfPagesInMem;
        *VAR_1 = VAR_4;
        *VAR_2 = VAR_6;
      }
    }
  }
}
