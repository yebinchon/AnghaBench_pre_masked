
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ xItemLen; int uxItemFlags; } ;
struct TYPE_4__ {scalar_t__ xMaxItemSize; int xSize; int uxRingbufferFlags; int * pucRead; int * pucFree; int * pucAcquire; int * pucHead; int * pucTail; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef TYPE_2__ ItemHeader_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(Ringbuffer_t *VAR_5, uint8_t *VAR_6)
{

    FUNC_0(FUNC_2(VAR_6));
    FUNC_0(VAR_6 >= VAR_5->pucHead);
    FUNC_0(VAR_6 <= VAR_5->pucTail);


    ItemHeader_t *VAR_7 = (ItemHeader_t *)(VAR_6 - VAR_1);
    FUNC_0(VAR_7->xItemLen <= VAR_5->xMaxItemSize);
    FUNC_0((VAR_7->uxItemFlags & VAR_2) == 0);
    FUNC_0((VAR_7->uxItemFlags & VAR_3) == 0);
    VAR_7->uxItemFlags &= ~VAR_4;
    VAR_7->uxItemFlags |= VAR_3;







    VAR_7 = (ItemHeader_t *)VAR_5->pucFree;

    while (((VAR_7->uxItemFlags & VAR_3) || (VAR_7->uxItemFlags & VAR_2)) && VAR_5->pucFree != VAR_5->pucRead) {
        if (VAR_7->uxItemFlags & VAR_2) {
            VAR_7->uxItemFlags |= VAR_3;
            VAR_5->pucFree = VAR_5->pucHead;
        } else {

            size_t VAR_8 = FUNC_1(VAR_7->xItemLen);
            VAR_5->pucFree += VAR_8 + VAR_1;

            FUNC_0(VAR_5->pucFree <= VAR_5->pucHead + VAR_5->xSize);
        }

        if ((VAR_5->pucTail - VAR_5->pucFree) < VAR_1) {
            VAR_5->pucFree = VAR_5->pucHead;
        }
        VAR_7 = (ItemHeader_t *)VAR_5->pucFree;
    }


    if (VAR_5->uxRingbufferFlags & VAR_0) {
        if (VAR_5->pucFree != VAR_5->pucAcquire) {
            VAR_5->uxRingbufferFlags &= ~VAR_0;
        } else if (VAR_5->pucFree == VAR_5->pucAcquire && VAR_5->pucFree == VAR_5->pucRead) {

            VAR_5->uxRingbufferFlags &= ~VAR_0;
        }
    }
}
