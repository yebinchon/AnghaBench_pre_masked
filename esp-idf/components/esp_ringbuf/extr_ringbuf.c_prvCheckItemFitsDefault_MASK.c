
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
 size_t FUNC_1 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 size_t VAR_4 ;

__attribute__((used)) static BaseType_t FUNC_3( Ringbuffer_t *VAR_5, size_t VAR_6)
{

    FUNC_0(FUNC_2(VAR_5->pucAcquire));
    FUNC_0(VAR_5->pucAcquire >= VAR_5->pucHead && VAR_5->pucAcquire < VAR_5->pucTail);

    size_t VAR_7 = FUNC_1(VAR_6) + VAR_4;
    if (VAR_5->pucAcquire == VAR_5->pucFree) {

        return (VAR_5->uxRingbufferFlags & VAR_3) ? VAR_0 : VAR_1;
    }
    if (VAR_5->pucFree > VAR_5->pucAcquire) {

        return (VAR_7 <= VAR_5->pucFree - VAR_5->pucAcquire) ? VAR_1 : VAR_0;
    }

    if (VAR_7 <= VAR_5->pucTail - VAR_5->pucAcquire) {
        return VAR_1;
    }

    if (VAR_5->uxRingbufferFlags & VAR_2) {

        return (VAR_7 + VAR_4 <= VAR_5->xSize - (VAR_5->pucAcquire - VAR_5->pucFree)) ? VAR_1 : VAR_0;
    } else {
        return (VAR_7 <= VAR_5->pucFree - VAR_5->pucHead) ? VAR_1 : VAR_0;
    }
}
