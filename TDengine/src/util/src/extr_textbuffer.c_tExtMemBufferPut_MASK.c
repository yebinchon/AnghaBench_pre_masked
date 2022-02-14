
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numOfElems; } ;
struct TYPE_6__ {TYPE_5__ item; } ;
typedef TYPE_1__ tFilePagesItem ;
struct TYPE_7__ {int numOfPagesInMem; scalar_t__ numOfElemsPerPage; int numOfElemsInBuffer; int pColModel; TYPE_1__* pTail; int numOfAllElems; } ;
typedef TYPE_2__ tExtMemBuffer ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,TYPE_5__*,void*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

int16_t FUNC_2(tExtMemBuffer *VAR_0, void *VAR_1, int32_t VAR_2) {
  if (VAR_2 == 0) {
    return VAR_0->numOfPagesInMem;
  }

  tFilePagesItem *VAR_3 = VAR_0->pTail;
  if (VAR_3 == ((void*)0)) {
    if (!FUNC_1(VAR_0)) {
      return -1;
    }

    VAR_3 = VAR_0->pTail;
  }

  if (VAR_3->item.numOfElems + VAR_2 <= VAR_0->numOfElemsPerPage) {

    FUNC_0(VAR_0->pColModel, &VAR_3->item, VAR_1, 0, VAR_2, VAR_2);
    VAR_0->numOfElemsInBuffer += VAR_2;
    VAR_0->numOfAllElems += VAR_2;
  } else {
    int32_t VAR_4 = VAR_0->numOfElemsPerPage - VAR_3->item.numOfElems;
    FUNC_0(VAR_0->pColModel, &VAR_3->item, VAR_1, 0, VAR_4, VAR_2);

    VAR_0->numOfElemsInBuffer += VAR_4;
    VAR_0->numOfAllElems += VAR_4;

    int32_t VAR_5 = VAR_4;
    int32_t VAR_6 = VAR_2 - VAR_4;

    while (VAR_6 > 0) {
      if (!FUNC_1(VAR_0)) {

        return -1;
      }

      int32_t VAR_7 = 0;
      if (VAR_6 > VAR_0->numOfElemsPerPage) {
        VAR_7 = VAR_0->numOfElemsPerPage;
      } else {
        VAR_7 = VAR_6;
      }

      VAR_0->numOfAllElems += VAR_7;

      VAR_3 = VAR_0->pTail;
      FUNC_0(VAR_0->pColModel, &VAR_3->item, VAR_1, VAR_5, VAR_7, VAR_2);

      VAR_6 -= VAR_7;
      VAR_0->numOfElemsInBuffer += VAR_7;
      VAR_5 += VAR_7;
    }
  }

  return VAR_0->numOfPagesInMem;
}
