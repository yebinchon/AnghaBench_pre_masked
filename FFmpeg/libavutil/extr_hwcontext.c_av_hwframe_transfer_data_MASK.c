
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* hw_frames_ctx; int * buf; } ;
struct TYPE_19__ {TYPE_3__* internal; } ;
struct TYPE_18__ {TYPE_2__* hw_type; } ;
struct TYPE_17__ {int (* transfer_data_from ) (TYPE_4__*,TYPE_5__*,TYPE_5__ const*) ;int (* transfer_data_to ) (TYPE_4__*,TYPE_5__*,TYPE_5__ const*) ;} ;
struct TYPE_16__ {scalar_t__ data; } ;
typedef TYPE_4__ AVHWFramesContext ;
typedef TYPE_5__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,TYPE_5__ const*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,TYPE_5__ const*) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__ const*,int) ;

int FUNC_4(AVFrame *VAR_1, const AVFrame *VAR_2, int VAR_3)
{
    AVHWFramesContext *VAR_4;
    int VAR_5;

    if (!VAR_1->buf[0])
        return FUNC_3(VAR_1, VAR_2, VAR_3);

    if (VAR_2->hw_frames_ctx) {
        VAR_4 = (AVHWFramesContext*)VAR_2->hw_frames_ctx->data;

        VAR_5 = VAR_4->internal->hw_type->transfer_data_from(VAR_4, VAR_1, VAR_2);
        if (VAR_5 < 0)
            return VAR_5;
    } else if (VAR_1->hw_frames_ctx) {
        VAR_4 = (AVHWFramesContext*)VAR_1->hw_frames_ctx->data;

        VAR_5 = VAR_4->internal->hw_type->transfer_data_to(VAR_4, VAR_1, VAR_2);
        if (VAR_5 < 0)
            return VAR_5;
    } else
        return FUNC_0(VAR_0);

    return 0;
}
