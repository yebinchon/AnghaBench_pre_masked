
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
typedef int tExtMemBuffer ;
typedef size_t int32_t ;
typedef size_t int16_t ;


 int FUNC_0 (int **) ;

tExtMemBuffer *FUNC_1(tMemBucket *VAR_0, int16_t VAR_1, int16_t VAR_2) {
  tExtMemBuffer *VAR_3 = ((void*)0);

  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->numOfSegs; ++VAR_4) {
    tMemBucketSegment *VAR_5 = &VAR_0->pSegs[VAR_4];

    for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfSlots; ++VAR_6) {
      if (VAR_4 == VAR_1 && VAR_6 == VAR_2) {
        VAR_3 = VAR_5->pBuffer[VAR_6];
      } else {
        if (VAR_5->pBuffer && VAR_5->pBuffer[VAR_6]) {
          FUNC_0(&VAR_5->pBuffer[VAR_6]);
        }
      }
    }
  }

  return VAR_3;
}
