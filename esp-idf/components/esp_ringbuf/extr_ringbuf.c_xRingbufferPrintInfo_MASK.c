
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xSize; int pucRead; int pucHead; int pucFree; int pucWrite; int pucAcquire; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(RingbufHandle_t VAR_0)
{
    Ringbuffer_t *VAR_1 = (Ringbuffer_t *)VAR_0;
    FUNC_0(VAR_1);
    FUNC_1("Rb size:%d\tfree: %d\trptr: %d\tfreeptr: %d\twptr: %d, aptr: %d\n",
           VAR_1->xSize, FUNC_2(VAR_1),
           VAR_1->pucRead - VAR_1->pucHead,
           VAR_1->pucFree - VAR_1->pucHead,
           VAR_1->pucWrite - VAR_1->pucHead,
           VAR_1->pucAcquire - VAR_1->pucHead);
}
