
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_27__ {scalar_t__ format; TYPE_3__* hw_frames_ctx; TYPE_2__** buf; } ;
struct TYPE_26__ {scalar_t__ sw_format; scalar_t__ format; TYPE_5__* internal; } ;
struct TYPE_25__ {int source; } ;
struct TYPE_24__ {TYPE_4__* hw_type; TYPE_1__* source_frames; } ;
struct TYPE_23__ {int (* map_from ) (TYPE_7__*,TYPE_8__*,TYPE_8__ const*,int) ;int (* map_to ) (TYPE_7__*,TYPE_8__*,TYPE_8__ const*,int) ;} ;
struct TYPE_22__ {scalar_t__ data; } ;
struct TYPE_21__ {scalar_t__ data; } ;
struct TYPE_20__ {int * data; } ;
typedef TYPE_6__ HWMapDescriptor ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_8__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_7__*,int ,char*) ;
 int FUNC_4 (TYPE_7__*,TYPE_8__*,TYPE_8__ const*,int) ;
 int FUNC_5 (TYPE_7__*,TYPE_8__*,TYPE_8__ const*,int) ;

int FUNC_6(AVFrame *VAR_3, const AVFrame *VAR_4, int VAR_5)
{
    AVHWFramesContext *VAR_6, *VAR_7;
    HWMapDescriptor *VAR_8;
    int VAR_9;

    if (VAR_4->hw_frames_ctx && VAR_3->hw_frames_ctx) {
        VAR_6 = (AVHWFramesContext*)VAR_4->hw_frames_ctx->data;
        VAR_7 = (AVHWFramesContext*)VAR_3->hw_frames_ctx->data;

        if ((VAR_6 == VAR_7 &&
             VAR_4->format == VAR_7->sw_format &&
             VAR_3->format == VAR_7->format) ||
            (VAR_6->internal->source_frames &&
             VAR_6->internal->source_frames->data ==
             (uint8_t*)VAR_7)) {




            if (!VAR_4->buf[0]) {
                FUNC_3(VAR_6, VAR_0, "Invalid mapping "
                       "found when attempting unmap.\n");
                return FUNC_0(VAR_1);
            }
            VAR_8 = (HWMapDescriptor*)VAR_4->buf[0]->data;
            FUNC_2(VAR_3);
            return FUNC_1(VAR_3, VAR_8->source);
        }
    }

    if (VAR_4->hw_frames_ctx) {
        VAR_6 = (AVHWFramesContext*)VAR_4->hw_frames_ctx->data;

        if (VAR_6->format == VAR_4->format &&
            VAR_6->internal->hw_type->map_from) {
            VAR_9 = VAR_6->internal->hw_type->map_from(VAR_6,
                                                          VAR_3, VAR_4, VAR_5);
            if (VAR_9 != FUNC_0(VAR_2))
                return VAR_9;
        }
    }

    if (VAR_3->hw_frames_ctx) {
        VAR_7 = (AVHWFramesContext*)VAR_3->hw_frames_ctx->data;

        if (VAR_7->format == VAR_3->format &&
            VAR_7->internal->hw_type->map_to) {
            VAR_9 = VAR_7->internal->hw_type->map_to(VAR_7,
                                                        VAR_3, VAR_4, VAR_5);
            if (VAR_9 != FUNC_0(VAR_2))
                return VAR_9;
        }
    }

    return FUNC_0(VAR_2);
}
