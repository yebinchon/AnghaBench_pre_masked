
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t xItemLen; int uxItemFlags; } ;
struct TYPE_4__ {scalar_t__ xItemsWaiting; int uxRingbufferFlags; size_t xMaxItemSize; int * pucHead; int * pucRead; int * pucTail; int * pucWrite; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef TYPE_2__ ItemHeader_t ;
typedef int BaseType_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_3(Ringbuffer_t *VAR_6,
                               BaseType_t *VAR_7,
                               size_t VAR_8,
                               size_t *VAR_9)
{

    ItemHeader_t *VAR_10 = (ItemHeader_t *)VAR_6->pucRead;
    FUNC_0(VAR_7 != ((void*)0));
    FUNC_0((VAR_6->xItemsWaiting > 0) && ((VAR_6->pucRead != VAR_6->pucWrite) || (VAR_6->uxRingbufferFlags & VAR_2)));
    FUNC_0(FUNC_2(VAR_6->pucRead));
    FUNC_0(VAR_6->pucRead >= VAR_6->pucHead && VAR_6->pucRead < VAR_6->pucTail);
    FUNC_0((VAR_10->xItemLen <= VAR_6->xMaxItemSize) || (VAR_10->uxItemFlags & VAR_4));

    uint8_t *VAR_11;

    if (VAR_10->uxItemFlags & VAR_4) {
        VAR_6->pucRead = VAR_6->pucHead;

        VAR_10 = (ItemHeader_t *)VAR_6->pucRead;
        FUNC_0(VAR_10->xItemLen <= VAR_6->xMaxItemSize);
    }
    VAR_11 = VAR_6->pucRead + VAR_3;
    if (VAR_10->xItemLen == 0) {

        FUNC_0(VAR_11 >= VAR_6->pucHead && VAR_11 <= VAR_6->pucTail);
    } else {

        FUNC_0(VAR_11 >= VAR_6->pucHead && VAR_11 < VAR_6->pucTail);
    }
    *VAR_9 = VAR_10->xItemLen;
    VAR_6->xItemsWaiting --;
    *VAR_7 = (VAR_10->uxItemFlags & VAR_5) ? VAR_1 : VAR_0;

    VAR_6->pucRead += VAR_3 + FUNC_1(VAR_10->xItemLen);

    if ((VAR_6->pucTail - VAR_6->pucRead) < VAR_3) {
        VAR_6->pucRead = VAR_6->pucHead;
    }
    return (void *)VAR_11;
}
