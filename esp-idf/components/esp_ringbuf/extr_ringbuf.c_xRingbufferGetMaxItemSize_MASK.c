
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t xMaxItemSize; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;


 int FUNC_0 (TYPE_1__*) ;

size_t FUNC_1(RingbufHandle_t VAR_0)
{
    Ringbuffer_t *VAR_1 = (Ringbuffer_t *)VAR_0;
    FUNC_0(VAR_1);
    return VAR_1->xMaxItemSize;
}
