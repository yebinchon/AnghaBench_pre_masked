
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pucAcquire; scalar_t__ pucHead; scalar_t__ pucTail; scalar_t__ pucFree; int uxRingbufferFlags; size_t xSize; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef int BaseType_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BaseType_t FUNC_1( Ringbuffer_t *VAR_3, size_t VAR_4)
{

    FUNC_0(VAR_3->pucAcquire >= VAR_3->pucHead && VAR_3->pucAcquire < VAR_3->pucTail);

    if (VAR_3->pucAcquire == VAR_3->pucFree) {

        return (VAR_3->uxRingbufferFlags & VAR_2) ? VAR_0 : VAR_1;
    }
    if (VAR_3->pucFree > VAR_3->pucAcquire) {

        return (VAR_4 <= VAR_3->pucFree - VAR_3->pucAcquire) ? VAR_1 : VAR_0;
    }

    return (VAR_4 <= VAR_3->xSize - (VAR_3->pucAcquire - VAR_3->pucFree)) ? VAR_1 : VAR_0;
}
