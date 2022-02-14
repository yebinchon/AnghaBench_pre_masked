
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uxRingbufferFlags; size_t pucFree; size_t pucAcquire; size_t xSize; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef size_t BaseType_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(Ringbuffer_t *VAR_1)
{
    size_t VAR_2;
    if (VAR_1->uxRingbufferFlags & VAR_0) {
        VAR_2 = 0;
    } else {
        BaseType_t VAR_3 = VAR_1->pucFree - VAR_1->pucAcquire;

        if (VAR_3 <= 0) {
            VAR_3 += VAR_1->xSize;
        }
        VAR_2 = VAR_3;
    }
    FUNC_0(VAR_2 <= VAR_1->xSize);
    return VAR_2;
}
