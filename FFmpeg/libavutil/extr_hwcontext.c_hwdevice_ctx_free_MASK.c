
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {struct TYPE_7__* internal; struct TYPE_7__* priv; struct TYPE_7__* hwctx; int source_device; int (* free ) (TYPE_2__*) ;TYPE_1__* hw_type; } ;
struct TYPE_6__ {int (* device_uninit ) (TYPE_2__*) ;} ;
typedef TYPE_2__ AVHWDeviceContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint8_t *VAR_1)
{
    AVHWDeviceContext *VAR_2 = (AVHWDeviceContext*)VAR_1;



    if (VAR_2->internal->hw_type->device_uninit)
        VAR_2->internal->hw_type->device_uninit(VAR_2);

    if (VAR_2->free)
        VAR_2->free(VAR_2);

    FUNC_0(&VAR_2->internal->source_device);

    FUNC_1(&VAR_2->hwctx);
    FUNC_1(&VAR_2->internal->priv);
    FUNC_1(&VAR_2->internal);
    FUNC_1(&VAR_2);
}
