
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ xItemsWaiting; int uxRingbufferFlags; int * pucRead; int * pucWrite; int * pucHead; int * pucTail; int * pucFree; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef int BaseType_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void *FUNC_1(Ringbuffer_t *VAR_1,
                               BaseType_t *VAR_2,
                               size_t VAR_3,
                               size_t *VAR_4)
{

    FUNC_0((VAR_1->xItemsWaiting > 0) && ((VAR_1->pucRead != VAR_1->pucWrite) || (VAR_1->uxRingbufferFlags & VAR_0)));
    FUNC_0(VAR_1->pucRead >= VAR_1->pucHead && VAR_1->pucRead < VAR_1->pucTail);
    FUNC_0(VAR_1->pucRead == VAR_1->pucFree);

    uint8_t *VAR_5 = VAR_1->pucRead;
    if ((VAR_1->pucRead > VAR_1->pucWrite) || (VAR_1->uxRingbufferFlags & VAR_0)) {

        if (VAR_3 == 0 || VAR_1->pucTail - VAR_1->pucRead <= VAR_3) {

            *VAR_4 = VAR_1->pucTail - VAR_1->pucRead;
            VAR_1->xItemsWaiting -= VAR_1->pucTail - VAR_1->pucRead;
            VAR_1->pucRead = VAR_1->pucHead;
        } else {

            *VAR_4 = VAR_3;
            VAR_1->xItemsWaiting -= VAR_3;
            VAR_1->pucRead += VAR_3;
        }
    } else {
        if (VAR_3 == 0 || VAR_1->pucWrite - VAR_1->pucRead <= VAR_3) {

            *VAR_4 = VAR_1->pucWrite - VAR_1->pucRead;
            VAR_1->xItemsWaiting -= VAR_1->pucWrite - VAR_1->pucRead;
            VAR_1->pucRead = VAR_1->pucWrite;
        } else {

            *VAR_4 = VAR_3;
            VAR_1->xItemsWaiting -= VAR_3;
            VAR_1->pucRead += VAR_3;

        }
    }
    return (void *)VAR_5;
}
