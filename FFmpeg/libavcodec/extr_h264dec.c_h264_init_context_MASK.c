
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_22__ {int active_thread_type; int thread_count; int chroma_sample_location; int flags; int workaround_bugs; int height; int width; } ;
struct TYPE_20__ {void* f; } ;
struct TYPE_19__ {void* f; } ;
struct TYPE_17__ {int x264_build; } ;
struct TYPE_16__ {int arrangement_cancel_flag; } ;
struct TYPE_13__ {TYPE_3__ unregistered; TYPE_2__ frame_packing; } ;
struct TYPE_15__ {int prev_poc_msb; int prev_frame_num; } ;
struct TYPE_21__ {int cur_chroma_format_idc; int recovery_frame; int nb_slice_ctx; TYPE_12__* slice_ctx; TYPE_6__ last_pic_for_ec; TYPE_5__ cur_pic; TYPE_4__* DPB; TYPE_11__ sei; void** last_pocs; void* next_outputed_poc; TYPE_1__ poc; scalar_t__ frame_recovered; int flags; int workaround_bugs; int picture_structure; int height_from_caller; int width_from_caller; TYPE_8__* avctx; } ;
struct TYPE_18__ {void* f; } ;
struct TYPE_14__ {TYPE_7__* h264; } ;
typedef TYPE_7__ H264Context ;
typedef TYPE_8__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 () ;
 TYPE_12__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_11__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_7, H264Context *VAR_8)
{
    int VAR_9;

    VAR_8->avctx = VAR_7;
    VAR_8->cur_chroma_format_idc = -1;

    VAR_8->width_from_caller = VAR_7->width;
    VAR_8->height_from_caller = VAR_7->height;

    VAR_8->picture_structure = VAR_6;
    VAR_8->workaround_bugs = VAR_7->workaround_bugs;
    VAR_8->flags = VAR_7->flags;
    VAR_8->poc.prev_poc_msb = 1 << 16;
    VAR_8->recovery_frame = -1;
    VAR_8->frame_recovered = 0;
    VAR_8->poc.prev_frame_num = -1;
    VAR_8->sei.frame_packing.arrangement_cancel_flag = -1;
    VAR_8->sei.unregistered.x264_build = -1;

    VAR_8->next_outputed_poc = VAR_4;
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
        VAR_8->last_pocs[VAR_9] = VAR_4;

    FUNC_3(&VAR_8->sei);

    VAR_7->chroma_sample_location = VAR_0;

    VAR_8->nb_slice_ctx = (VAR_7->active_thread_type & VAR_2) ? VAR_7->thread_count : 1;
    VAR_8->slice_ctx = FUNC_2(VAR_8->nb_slice_ctx, sizeof(*VAR_8->slice_ctx));
    if (!VAR_8->slice_ctx) {
        VAR_8->nb_slice_ctx = 0;
        return FUNC_0(VAR_1);
    }

    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        VAR_8->DPB[VAR_9].f = FUNC_1();
        if (!VAR_8->DPB[VAR_9].f)
            return FUNC_0(VAR_1);
    }

    VAR_8->cur_pic.f = FUNC_1();
    if (!VAR_8->cur_pic.f)
        return FUNC_0(VAR_1);

    VAR_8->last_pic_for_ec.f = FUNC_1();
    if (!VAR_8->last_pic_for_ec.f)
        return FUNC_0(VAR_1);

    for (VAR_9 = 0; VAR_9 < VAR_8->nb_slice_ctx; VAR_9++)
        VAR_8->slice_ctx[VAR_9].h264 = VAR_8;

    return 0;
}
