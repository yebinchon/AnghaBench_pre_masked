
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t xSize; int xMaxItemSize; int mux; int xGetCurMaxSize; void* vReturnItem; void* pvGetItem; int vCopyItem; void* xCheckItemFits; int uxRingbufferFlags; scalar_t__ xItemsWaiting; int * pucAcquire; int * pucWrite; int * pucRead; int * pucFree; int * pucTail; int * pucHead; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufferType_t ;
typedef int ItemHeader_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_16 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(size_t VAR_17,
                                       RingbufferType_t VAR_18,
                                       Ringbuffer_t *VAR_19,
                                       uint8_t *VAR_20)
{

    VAR_19->xSize = VAR_17;
    VAR_19->pucHead = VAR_20;
    VAR_19->pucTail = VAR_20 + VAR_17;
    VAR_19->pucFree = VAR_20;
    VAR_19->pucRead = VAR_20;
    VAR_19->pucWrite = VAR_20;
    VAR_19->pucAcquire = VAR_20;
    VAR_19->xItemsWaiting = 0;
    VAR_19->uxRingbufferFlags = 0;


    if (VAR_18 == VAR_1) {
        VAR_19->xCheckItemFits = VAR_3;
        VAR_19->vCopyItem = VAR_6;
        VAR_19->pvGetItem = VAR_11;
        VAR_19->vReturnItem = VAR_13;




        VAR_19->xMaxItemSize = FUNC_0(VAR_19->xSize / 2) - VAR_16;
        VAR_19->xGetCurMaxSize = VAR_9;
    } else if (VAR_18 == VAR_0) {
        VAR_19->uxRingbufferFlags |= VAR_14;
        VAR_19->xCheckItemFits = VAR_3;
        VAR_19->vCopyItem = VAR_4;
        VAR_19->pvGetItem = VAR_11;
        VAR_19->vReturnItem = VAR_13;

        VAR_19->xMaxItemSize = VAR_19->xSize - (sizeof(ItemHeader_t) * 2);
        VAR_19->xGetCurMaxSize = VAR_7;
    } else {
        VAR_19->uxRingbufferFlags |= VAR_15;
        VAR_19->xCheckItemFits = VAR_2;
        VAR_19->vCopyItem = VAR_5;
        VAR_19->pvGetItem = VAR_10;
        VAR_19->vReturnItem = VAR_12;

        VAR_19->xMaxItemSize = VAR_19->xSize;
        VAR_19->xGetCurMaxSize = VAR_8;
    }
    FUNC_3(FUNC_1(VAR_19));
    FUNC_2(&VAR_19->mux);
}
