
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pucAcquire; scalar_t__ pucHead; scalar_t__ pucTail; size_t xItemsWaiting; scalar_t__ pucFree; scalar_t__ pucWrite; int uxRingbufferFlags; } ;
typedef TYPE_1__ Ringbuffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(Ringbuffer_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{

    FUNC_0(VAR_1->pucAcquire >= VAR_1->pucHead && VAR_1->pucAcquire < VAR_1->pucTail);

    size_t VAR_4 = VAR_1->pucTail - VAR_1->pucAcquire;
    if (VAR_4 < VAR_3) {

        FUNC_1(VAR_1->pucAcquire, VAR_2, VAR_4);
        VAR_1->xItemsWaiting += VAR_4;

        VAR_2 += VAR_4;
        VAR_3 -= VAR_4;
        VAR_1->pucAcquire = VAR_1->pucHead;
    }

    FUNC_1(VAR_1->pucAcquire, VAR_2, VAR_3);
    VAR_1->xItemsWaiting += VAR_3;
    VAR_1->pucAcquire += VAR_3;


    if (VAR_1->pucAcquire == VAR_1->pucTail) {
        VAR_1->pucAcquire = VAR_1->pucHead;
    }

    if (VAR_1->pucAcquire == VAR_1->pucFree) {
        VAR_1->uxRingbufferFlags |= VAR_0;
    }


    VAR_1->pucWrite = VAR_1->pucAcquire;
}
