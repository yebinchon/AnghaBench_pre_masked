
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numOfOrderedCols; } ;
struct TYPE_9__ {TYPE_6__* pSchema; TYPE_1__ orderIdx; } ;
typedef TYPE_2__ tOrderDescriptor ;
struct TYPE_10__ {scalar_t__ numOfElems; int data; } ;
typedef TYPE_3__ tFilePage ;
typedef int tExtMemBuffer ;
typedef int int32_t ;
struct TYPE_11__ {scalar_t__ maxCapacity; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ,scalar_t__,int ,int) ;
 int FUNC_3 (TYPE_6__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int32_t FUNC_6(tExtMemBuffer *VAR_0, tOrderDescriptor *VAR_1, tFilePage *VAR_2,
                                     int32_t VAR_3) {
  if (VAR_2->numOfElems == 0) {
    return 0;
  }

  FUNC_0(VAR_2->numOfElems <= VAR_1->pSchema->maxCapacity);


  if (VAR_1->orderIdx.numOfOrderedCols > 0) {
    FUNC_2(VAR_1, VAR_2->numOfElems, 0, VAR_2->numOfElems - 1, VAR_2->data, VAR_3);
  }







  if (FUNC_4(VAR_0, VAR_2->data, VAR_2->numOfElems) < 0) {
    FUNC_5("failed to save data in temporary buffer");
    return -1;
  }

  VAR_2->numOfElems = 0;
  return 0;
}
