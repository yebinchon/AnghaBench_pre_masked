
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uxRingbufferFlags; scalar_t__ pucFree; scalar_t__ pucAcquire; scalar_t__ xSize; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(Ringbuffer_t *VAR_1)
{
    BaseType_t VAR_2;

    if (VAR_1->uxRingbufferFlags & VAR_0) {
        return 0;
    }





    VAR_2 = VAR_1->pucFree - VAR_1->pucAcquire;
    if (VAR_2 <= 0) {
        VAR_2 += VAR_1->xSize;
    }
    return VAR_2;
}
