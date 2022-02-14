
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_3__ {int mux; scalar_t__ xItemsWaiting; scalar_t__ pucHead; scalar_t__ pucAcquire; scalar_t__ pucWrite; scalar_t__ pucRead; scalar_t__ pucFree; } ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(RingbufHandle_t VAR_0,
                        UBaseType_t *VAR_1,
                        UBaseType_t *VAR_2,
                        UBaseType_t *VAR_3,
                        UBaseType_t *VAR_4,
                        UBaseType_t *VAR_5)
{
    Ringbuffer_t *VAR_6 = (Ringbuffer_t *)VAR_0;
    FUNC_0(VAR_6);

    FUNC_1(&VAR_6->mux);
    if (VAR_1 != ((void*)0)) {
        *VAR_1 = (UBaseType_t)(VAR_6->pucFree - VAR_6->pucHead);
    }
    if (VAR_2 != ((void*)0)) {
        *VAR_2 = (UBaseType_t)(VAR_6->pucRead - VAR_6->pucHead);
    }
    if (VAR_3 != ((void*)0)) {
        *VAR_3 = (UBaseType_t)(VAR_6->pucWrite - VAR_6->pucHead);
    }
    if (VAR_4 != ((void*)0)) {
        *VAR_4 = (UBaseType_t)(VAR_6->pucAcquire - VAR_6->pucHead);
    }
    if (VAR_5 != ((void*)0)) {
        *VAR_5 = (UBaseType_t)(VAR_6->xItemsWaiting);
    }
    FUNC_2(&VAR_6->mux);
}
