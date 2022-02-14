
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {struct TYPE_7__* internal; struct TYPE_7__* priv; struct TYPE_7__* hwctx; int device_ref; int source_frames; int (* free ) (TYPE_2__*) ;TYPE_1__* hw_type; scalar_t__ pool_internal; } ;
struct TYPE_6__ {int (* frames_uninit ) (TYPE_2__*) ;} ;
typedef TYPE_2__ AVHWFramesContext ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, uint8_t *VAR_1)
{
    AVHWFramesContext *VAR_2 = (AVHWFramesContext*)VAR_1;

    if (VAR_2->internal->pool_internal)
        FUNC_0(&VAR_2->internal->pool_internal);

    if (VAR_2->internal->hw_type->frames_uninit)
        VAR_2->internal->hw_type->frames_uninit(VAR_2);

    if (VAR_2->free)
        VAR_2->free(VAR_2);

    FUNC_1(&VAR_2->internal->source_frames);

    FUNC_1(&VAR_2->device_ref);

    FUNC_2(&VAR_2->hwctx);
    FUNC_2(&VAR_2->internal->priv);
    FUNC_2(&VAR_2->internal);
    FUNC_2(&VAR_2);
}
