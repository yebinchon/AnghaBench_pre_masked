
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int mux; int (* vReturnItem ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;
typedef int BaseType_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(RingbufHandle_t VAR_0, void *VAR_1, BaseType_t *VAR_2)
{
    Ringbuffer_t *VAR_3 = (Ringbuffer_t *)VAR_0;
    FUNC_0(VAR_3);
    FUNC_0(VAR_1 != ((void*)0));

    FUNC_1(&VAR_3->mux);
    VAR_3->vReturnItem(VAR_3, (uint8_t *)VAR_1);
    FUNC_2(&VAR_3->mux);
    FUNC_5(FUNC_3(VAR_3), VAR_2);
}
