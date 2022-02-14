
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uxRingbufferFlags; scalar_t__ pucRead; scalar_t__ pucFree; scalar_t__ xItemsWaiting; scalar_t__ pucWrite; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef int BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BaseType_t FUNC_0(Ringbuffer_t *VAR_4)
{
    if ((VAR_4->uxRingbufferFlags & VAR_3) && VAR_4->pucRead != VAR_4->pucFree) {
        return VAR_0;
    }
    if ((VAR_4->xItemsWaiting > 0) && ((VAR_4->pucRead != VAR_4->pucWrite) || (VAR_4->uxRingbufferFlags & VAR_2))) {
        return VAR_1;
    } else {
        return VAR_0;
    }
}
