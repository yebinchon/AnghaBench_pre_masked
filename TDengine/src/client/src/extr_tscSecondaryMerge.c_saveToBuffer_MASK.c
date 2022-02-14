
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pSchema; } ;
typedef TYPE_1__ tOrderDescriptor ;
struct TYPE_11__ {scalar_t__ numOfElems; } ;
typedef TYPE_2__ tFilePage ;
typedef int tExtMemBuffer ;
struct TYPE_12__ {scalar_t__ maxCapacity; } ;
typedef TYPE_3__ tColModel ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,void*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,TYPE_2__*,scalar_t__) ;

int32_t FUNC_3(tExtMemBuffer *VAR_0, tOrderDescriptor *VAR_1, tFilePage *VAR_2, void *VAR_3,
                     int32_t VAR_4, int32_t VAR_5) {
  if (VAR_2->numOfElems + VAR_4 <= VAR_1->pSchema->maxCapacity) {
    FUNC_1(VAR_1->pSchema, VAR_2, VAR_3, 0, VAR_4, VAR_4);
    return 0;
  }

  tColModel *VAR_6 = VAR_1->pSchema;

  int32_t VAR_7 = VAR_1->pSchema->maxCapacity - VAR_2->numOfElems;
  FUNC_1(VAR_6, VAR_2, VAR_3, 0, VAR_7, VAR_4);


  FUNC_0(VAR_2->numOfElems == VAR_1->pSchema->maxCapacity);
  int32_t VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5);
  if (VAR_8 != 0) {
    return -1;
  }

  int32_t VAR_9 = VAR_4 - VAR_7;

  while (VAR_9 > 0) {
    int32_t VAR_10 = 0;
    if (VAR_9 > VAR_6->maxCapacity) {
      VAR_10 = VAR_6->maxCapacity;
    } else {
      VAR_10 = VAR_9;
    }

    FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4 - VAR_9, VAR_10, VAR_4);

    if (VAR_2->numOfElems == VAR_6->maxCapacity) {
      int32_t VAR_11 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5);
      if (VAR_11 != 0) {
        return -1;
      }
    } else {
      VAR_2->numOfElems = VAR_10;
    }

    VAR_9 -= VAR_10;
    VAR_7 += VAR_10;
  }

  return 0;
}
