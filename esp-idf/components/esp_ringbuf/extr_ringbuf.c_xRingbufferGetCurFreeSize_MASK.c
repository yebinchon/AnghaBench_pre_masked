
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t (* xGetCurMaxSize ) (TYPE_1__*) ;int mux; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (TYPE_1__*) ;

size_t FUNC_4(RingbufHandle_t VAR_0)
{
    Ringbuffer_t *VAR_1 = (Ringbuffer_t *)VAR_0;
    FUNC_0(VAR_1);

    size_t VAR_2;
    FUNC_1(&VAR_1->mux);
    VAR_2 = VAR_1->xGetCurMaxSize(VAR_1);
    FUNC_2(&VAR_1->mux);
    return VAR_2;
}
