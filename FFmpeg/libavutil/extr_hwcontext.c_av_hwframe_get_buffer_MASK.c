
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ data; } ;
struct TYPE_19__ {void* hw_frames_ctx; int format; } ;
struct TYPE_18__ {TYPE_2__* internal; int pool; int format; } ;
struct TYPE_17__ {TYPE_1__* hw_type; int source_allocation_map_flags; TYPE_5__* source_frames; } ;
struct TYPE_16__ {int (* frames_get_buffer ) (TYPE_3__*,TYPE_4__*) ;} ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (void**) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,char*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;

int FUNC_8(AVBufferRef *VAR_4, AVFrame *VAR_5, int VAR_6)
{
    AVHWFramesContext *VAR_7 = (AVHWFramesContext*)VAR_4->data;
    int VAR_8;

    if (VAR_7->internal->source_frames) {


        AVFrame *VAR_9;

        VAR_5->format = VAR_7->format;
        VAR_5->hw_frames_ctx = FUNC_1(VAR_4);
        if (!VAR_5->hw_frames_ctx)
            return FUNC_0(VAR_2);

        VAR_9 = FUNC_3();
        if (!VAR_9)
            return FUNC_0(VAR_2);

        VAR_8 = FUNC_8(VAR_7->internal->source_frames,
                                    VAR_9, 0);
        if (VAR_8 < 0) {
            FUNC_4(&VAR_9);
            return VAR_8;
        }

        VAR_8 = FUNC_5(VAR_5, VAR_9,
                             VAR_7->internal->source_allocation_map_flags);
        if (VAR_8) {
            FUNC_6(VAR_7, VAR_0, "Failed to map frame into derived "
                   "frame context: %d.\n", VAR_8);
            FUNC_4(&VAR_9);
            return VAR_8;
        }



        FUNC_4(&VAR_9);

        return 0;
    }

    if (!VAR_7->internal->hw_type->frames_get_buffer)
        return FUNC_0(VAR_3);

    if (!VAR_7->pool)
        return FUNC_0(VAR_1);

    VAR_5->hw_frames_ctx = FUNC_1(VAR_4);
    if (!VAR_5->hw_frames_ctx)
        return FUNC_0(VAR_2);

    VAR_8 = VAR_7->internal->hw_type->frames_get_buffer(VAR_7, VAR_5);
    if (VAR_8 < 0) {
        FUNC_2(&VAR_5->hw_frames_ctx);
        return VAR_8;
    }

    return 0;
}
