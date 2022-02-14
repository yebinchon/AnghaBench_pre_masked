
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uxRingbufferFlags; scalar_t__ pucAcquire; scalar_t__ pucHead; scalar_t__ pucFree; scalar_t__ xSize; scalar_t__ pucTail; scalar_t__ xMaxItemSize; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_0(Ringbuffer_t *VAR_2)
{
    BaseType_t VAR_3;

    if (VAR_2->uxRingbufferFlags & VAR_0) {
        return 0;
    }
    if (VAR_2->pucAcquire == VAR_2->pucHead && VAR_2->pucFree == VAR_2->pucHead) {

        VAR_3 = VAR_2->xSize - VAR_1;
    } else if (VAR_2->pucAcquire < VAR_2->pucFree) {

        VAR_3 = (VAR_2->pucFree - VAR_2->pucAcquire) - VAR_1;
    } else {

        VAR_3 = (VAR_2->pucFree - VAR_2->pucHead) +
                    (VAR_2->pucTail - VAR_2->pucAcquire) -
                    (VAR_1 * 2);
    }


    if (VAR_3 > VAR_2->xMaxItemSize) {
        VAR_3 = VAR_2->xMaxItemSize;
    } else if (VAR_3 < 0) {
        VAR_3 = 0;
    }
    return VAR_3;
}
