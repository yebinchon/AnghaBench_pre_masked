
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t xItemLen; scalar_t__ uxItemFlags; } ;
struct TYPE_4__ {int uxRingbufferFlags; int * pucFree; int * pucAcquire; int * pucHead; int * pucTail; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef TYPE_2__ ItemHeader_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uint8_t* FUNC_3(Ringbuffer_t *VAR_3, size_t VAR_4)
{

    size_t VAR_5 = FUNC_1(VAR_4);
    size_t VAR_6 = VAR_3->pucTail - VAR_3->pucAcquire;
    FUNC_0(FUNC_2(VAR_3->pucAcquire));
    FUNC_0(VAR_3->pucAcquire >= VAR_3->pucHead && VAR_3->pucAcquire < VAR_3->pucTail);
    FUNC_0(VAR_6 >= VAR_1);


    if (VAR_6 < VAR_5 + VAR_1) {
        ItemHeader_t *VAR_7 = (ItemHeader_t *)VAR_3->pucAcquire;
        VAR_7->uxItemFlags = VAR_2;
        VAR_7->xItemLen = 0;
        VAR_3->pucAcquire = VAR_3->pucHead;
    }


    ItemHeader_t *VAR_8 = (ItemHeader_t *)VAR_3->pucAcquire;
    VAR_8->xItemLen = VAR_4;
    VAR_8->uxItemFlags = 0;


    uint8_t* VAR_9 = VAR_3->pucAcquire + VAR_1;
    VAR_3->pucAcquire += VAR_1 + VAR_5;



    if (VAR_3->pucTail - VAR_3->pucAcquire < VAR_1) {
        VAR_3->pucAcquire = VAR_3->pucHead;
    }

    if (VAR_3->pucAcquire == VAR_3->pucFree) {

        VAR_3->uxRingbufferFlags |= VAR_0;
    }
    return VAR_9;
}
