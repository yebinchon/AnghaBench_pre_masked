
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t numOfSlots; TYPE_5__** pBuffer; } ;
typedef TYPE_2__ tMemBucketSegment ;
struct TYPE_9__ {int numOfElems; size_t numOfSegs; int dataType; TYPE_2__* pSegs; } ;
typedef TYPE_3__ tMemBucket ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_4__ tFilePage ;
struct TYPE_11__ {int numOfAllElems; int numOfElemsInBuffer; TYPE_1__* pHead; } ;
typedef TYPE_5__ tExtMemBuffer ;
typedef double int8_t ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
typedef double int16_t ;
struct TYPE_7__ {TYPE_4__ item; } ;
 int FUNC_0 (int) ;

double FUNC_1(tMemBucket *VAR_0) {
  FUNC_0(VAR_0->numOfElems == 1);

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->numOfSegs; ++VAR_1) {
    tMemBucketSegment *VAR_2 = &VAR_0->pSegs[VAR_1];
    if (VAR_2->pBuffer) {
      for (int32_t VAR_3 = 0; VAR_3 < VAR_2->numOfSlots; ++VAR_3) {
        tExtMemBuffer *VAR_4 = VAR_2->pBuffer[VAR_3];
        if (VAR_4) {
          FUNC_0(VAR_4->numOfAllElems == 1);
          tFilePage *VAR_5 = &VAR_4->pHead->item;
          if (VAR_4->numOfElemsInBuffer == 1) {
            switch (VAR_0->dataType) {
              case 130:
                return *(int32_t *)VAR_5->data;
              case 129:
                return *(int16_t *)VAR_5->data;
              case 128:
                return *(int8_t *)VAR_5->data;
              case 133:
                return (double)(*(int64_t *)VAR_5->data);
              case 132:
                return *(double *)VAR_5->data;
              case 131:
                return *(float *)VAR_5->data;
              default:
                return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}
