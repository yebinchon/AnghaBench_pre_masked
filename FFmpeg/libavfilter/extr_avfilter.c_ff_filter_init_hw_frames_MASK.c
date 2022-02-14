
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ extra_hw_frames; } ;
struct TYPE_8__ {TYPE_6__* hw_frames_ctx; } ;
struct TYPE_7__ {int initial_pool_size; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_6__*) ;

int FUNC_1(AVFilterContext *VAR_0, AVFilterLink *VAR_1,
                             int VAR_2)
{
    AVHWFramesContext *VAR_3;


    FUNC_0(VAR_1->hw_frames_ctx);

    VAR_3 = (AVHWFramesContext*)VAR_1->hw_frames_ctx->data;

    if (VAR_3->initial_pool_size == 0) {

    } else if (VAR_0->extra_hw_frames >= 0) {
        VAR_3->initial_pool_size += VAR_0->extra_hw_frames;
    } else {
        VAR_3->initial_pool_size = VAR_2;
    }

    return 0;
}
