
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int uxRingbufferFlags; int pucRead; int pucFree; int * pucTail; int * pucHead; } ;
typedef TYPE_1__ Ringbuffer_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(Ringbuffer_t *VAR_1, uint8_t *VAR_2)
{

    FUNC_0((uint8_t *)VAR_2 >= VAR_1->pucHead);
    FUNC_0((uint8_t *)VAR_2 < VAR_1->pucTail);

    VAR_1->pucFree = VAR_1->pucRead;

    if (VAR_1->uxRingbufferFlags & VAR_0) {
        VAR_1->uxRingbufferFlags &= ~VAR_0;
    }
}
