
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * xRecvSemHandle; int * xTransSemHandle; int xRecvSemStatic; int xTransSemStatic; } ;
typedef TYPE_1__ uint8_t ;
typedef TYPE_1__ Ringbuffer_t ;
typedef scalar_t__ RingbufferType_t ;
typedef int * RingbufHandle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (size_t) ;
 int FUNC_4 (size_t,scalar_t__,TYPE_1__*,TYPE_1__*) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 () ;
 int FUNC_8 (int *) ;

RingbufHandle_t FUNC_9(size_t VAR_2, RingbufferType_t VAR_3)
{
    FUNC_1(VAR_2 > 0);
    FUNC_1(VAR_3 < VAR_1);


    if (VAR_3 != VAR_0) {
        VAR_2 = FUNC_5(VAR_2);
    }
    Ringbuffer_t *VAR_4 = FUNC_0(1, sizeof(Ringbuffer_t));
    uint8_t *VAR_5 = FUNC_3(VAR_2);
    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        goto err;
    }







    VAR_4->xTransSemHandle = FUNC_7();
    VAR_4->xRecvSemHandle = FUNC_7();
    if (VAR_4->xTransSemHandle == ((void*)0) || VAR_4->xRecvSemHandle == ((void*)0)) {
        if (VAR_4->xTransSemHandle != ((void*)0)) {
            FUNC_6(VAR_4->xTransSemHandle);
        }
        if (VAR_4->xRecvSemHandle != ((void*)0)) {
            FUNC_6(VAR_4->xRecvSemHandle);
        }
        goto err;
    }


    FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
    return (RingbufHandle_t)VAR_4;

err:

    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    return ((void*)0);
}
