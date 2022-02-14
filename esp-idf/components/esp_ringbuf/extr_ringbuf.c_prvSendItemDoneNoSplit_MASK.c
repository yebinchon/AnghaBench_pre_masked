
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ xItemLen; int uxItemFlags; } ;
struct TYPE_4__ {scalar_t__ xMaxItemSize; int xSize; int * pucWrite; int * pucHead; int * pucTail; int * pucAcquire; int xItemsWaiting; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef TYPE_2__ ItemHeader_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(Ringbuffer_t *VAR_4, uint8_t* VAR_5)
{

    FUNC_0(FUNC_2(VAR_5));
    FUNC_0(VAR_5 >= VAR_4->pucHead);
    FUNC_0(VAR_5 <= VAR_4->pucTail);


    ItemHeader_t *VAR_6 = (ItemHeader_t *)(VAR_5 - VAR_0);
    FUNC_0(VAR_6->xItemLen <= VAR_4->xMaxItemSize);
    FUNC_0((VAR_6->uxItemFlags & VAR_1) == 0);
    FUNC_0((VAR_6->uxItemFlags & VAR_3) == 0);
    VAR_6->uxItemFlags &= ~VAR_2;
    VAR_6->uxItemFlags |= VAR_3;

    VAR_4->xItemsWaiting++;
    VAR_6 = (ItemHeader_t *)VAR_4->pucWrite;

    while (((VAR_6->uxItemFlags & VAR_3) || (VAR_6->uxItemFlags & VAR_1)) && VAR_4->pucWrite != VAR_4->pucAcquire) {
        if (VAR_6->uxItemFlags & VAR_1) {
            VAR_6->uxItemFlags |= VAR_3;
            VAR_4->pucWrite = VAR_4->pucHead;
        } else {

            size_t VAR_7 = FUNC_1(VAR_6->xItemLen);
            VAR_4->pucWrite += VAR_7 + VAR_0;

            FUNC_0(VAR_4->pucWrite <= VAR_4->pucHead + VAR_4->xSize);
        }

        if ((VAR_4->pucTail - VAR_4->pucWrite) < VAR_0) {
            VAR_4->pucWrite = VAR_4->pucHead;
        }
        VAR_6 = (ItemHeader_t *)VAR_4->pucWrite;
    }
}
