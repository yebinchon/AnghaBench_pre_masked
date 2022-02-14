
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t xItemLen; scalar_t__ uxItemFlags; } ;
struct TYPE_4__ {size_t pucTail; size_t pucAcquire; scalar_t__ pucHead; scalar_t__ pucFree; scalar_t__ pucWrite; int uxRingbufferFlags; int xItemsWaiting; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef TYPE_2__ ItemHeader_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int const*,size_t) ;
 size_t FUNC_2 (size_t) ;
 int VAR_0 ;
 int FUNC_3 (size_t) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(Ringbuffer_t *VAR_4, const uint8_t *VAR_5, size_t VAR_6)
{

    size_t VAR_7 = FUNC_2(VAR_6);
    size_t VAR_8 = VAR_4->pucTail - VAR_4->pucAcquire;
    FUNC_0(FUNC_3(VAR_4->pucAcquire));
    FUNC_0(VAR_4->pucAcquire >= VAR_4->pucHead && VAR_4->pucAcquire < VAR_4->pucTail);
    FUNC_0(VAR_8 >= VAR_1);


    if (VAR_8 < VAR_7 + VAR_1) {

        ItemHeader_t *VAR_9 = (ItemHeader_t *)VAR_4->pucAcquire;
        VAR_9->uxItemFlags = 0;
        VAR_9->xItemLen = VAR_8 - VAR_1;
        VAR_4->pucAcquire += VAR_1;
        VAR_8 -= VAR_1;
        if (VAR_8 > 0) {
            FUNC_1(VAR_4->pucAcquire, VAR_5, VAR_8);
            VAR_4->xItemsWaiting++;

            VAR_5 += VAR_8;
            VAR_6 -= VAR_8;
            VAR_7 -= VAR_8;
            VAR_9->uxItemFlags |= VAR_3;
        } else {

            VAR_9->uxItemFlags |= VAR_2;
        }
        VAR_4->pucAcquire = VAR_4->pucHead;
    }


    ItemHeader_t *VAR_10 = (ItemHeader_t *)VAR_4->pucAcquire;
    VAR_10->xItemLen = VAR_6;
    VAR_10->uxItemFlags = 0;
    VAR_4->pucAcquire += VAR_1;
    FUNC_1(VAR_4->pucAcquire, VAR_5, VAR_6);
    VAR_4->xItemsWaiting++;
    VAR_4->pucAcquire += VAR_7;


    if (VAR_4->pucTail - VAR_4->pucAcquire < VAR_1) {
        VAR_4->pucAcquire = VAR_4->pucHead;
    }

    if (VAR_4->pucAcquire == VAR_4->pucFree) {

        VAR_4->uxRingbufferFlags |= VAR_0;
    }


    VAR_4->pucWrite = VAR_4->pucAcquire;
}
