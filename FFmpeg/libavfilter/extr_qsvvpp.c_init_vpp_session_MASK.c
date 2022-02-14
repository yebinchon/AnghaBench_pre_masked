
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int mfxVersion ;
typedef int mfxIMPL ;
typedef int mfxHandleType ;
typedef scalar_t__ mfxHDL ;
struct TYPE_30__ {int Free; int GetHDL; int Unlock; int Lock; int Alloc; TYPE_6__* pthis; } ;
typedef TYPE_5__ mfxFrameAllocator ;
struct TYPE_34__ {int initial_pool_size; int sw_format; void* height; void* width; scalar_t__ format; TYPE_7__* hwctx; TYPE_13__* device_ref; } ;
struct TYPE_33__ {int session; } ;
struct TYPE_32__ {int nb_surfaces; scalar_t__ surfaces; void* frame_type; } ;
struct TYPE_28__ {int BufferSz; int BufferId; } ;
struct TYPE_27__ {int NumSurface; void* Type; scalar_t__* Surfaces; } ;
struct TYPE_26__ {int NumSurface; void* Type; scalar_t__* Surfaces; } ;
struct TYPE_29__ {TYPE_3__ Header; TYPE_2__ Out; TYPE_1__ In; } ;
struct TYPE_31__ {int nb_surface_ptrs_in; int nb_surface_ptrs_out; int session; void* out_mem_mode; void* in_mem_mode; TYPE_4__ opaque_alloc; scalar_t__* surface_ptrs_out; scalar_t__* surface_ptrs_in; int out_sw_format; } ;
struct TYPE_25__ {scalar_t__ data; } ;
struct TYPE_24__ {scalar_t__ extra_hw_frames; TYPE_13__* hw_device_ctx; TYPE_11__** outputs; TYPE_11__** inputs; } ;
struct TYPE_23__ {scalar_t__ format; TYPE_13__* hw_frames_ctx; int h; int w; } ;
struct TYPE_22__ {TYPE_8__* hwctx; } ;
typedef TYPE_6__ QSVVPPContext ;
typedef TYPE_7__ AVQSVFramesContext ;
typedef TYPE_8__ AVQSVDeviceContext ;
typedef TYPE_9__ AVHWFramesContext ;
typedef TYPE_10__ AVHWDeviceContext ;
typedef TYPE_11__ AVFilterLink ;
typedef TYPE_12__ AVFilterContext ;
typedef TYPE_13__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,scalar_t__*) ;
 int FUNC_10 (int ,TYPE_5__*) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_12 (int ,int,int) ;
 int FUNC_13 (TYPE_13__**) ;
 TYPE_13__* FUNC_14 (TYPE_13__*) ;
 int FUNC_15 (TYPE_13__*) ;
 int FUNC_16 (TYPE_12__*,int ,char*) ;
 void* FUNC_17 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;

__attribute__((used)) static int FUNC_18(AVFilterContext *VAR_16, QSVVPPContext *VAR_17)
{
    AVFilterLink *VAR_18 = VAR_16->inputs[0];
    AVFilterLink *VAR_19 = VAR_16->outputs[0];
    AVQSVFramesContext *VAR_20 = ((void*)0);
    AVQSVFramesContext *VAR_21 = ((void*)0);

    AVBufferRef *VAR_22;
    AVHWDeviceContext *VAR_23;
    AVQSVDeviceContext *VAR_24;
    mfxHDL VAR_25;
    mfxHandleType VAR_26;
    mfxVersion VAR_27;
    mfxIMPL VAR_28;
    int VAR_29, VAR_30;

    if (VAR_18->hw_frames_ctx) {
        AVHWFramesContext *VAR_31 = (AVHWFramesContext *)VAR_18->hw_frames_ctx->data;

        VAR_22 = VAR_31->device_ref;
        VAR_20 = VAR_31->hwctx;

        VAR_17->in_mem_mode = VAR_20->frame_type;

        VAR_17->surface_ptrs_in = FUNC_17(VAR_20->nb_surfaces,
                                              sizeof(*VAR_17->surface_ptrs_in));
        if (!VAR_17->surface_ptrs_in)
            return FUNC_0(VAR_4);

        for (VAR_30 = 0; VAR_30 < VAR_20->nb_surfaces; VAR_30++)
            VAR_17->surface_ptrs_in[VAR_30] = VAR_20->surfaces + VAR_30;

        VAR_17->nb_surface_ptrs_in = VAR_20->nb_surfaces;
    } else if (VAR_16->hw_device_ctx) {
        VAR_22 = VAR_16->hw_device_ctx;
        VAR_17->in_mem_mode = VAR_8;
    } else {
        FUNC_16(VAR_16, VAR_1, "No hw context provided.\n");
        return FUNC_0(VAR_3);
    }

    VAR_23 = (AVHWDeviceContext *)VAR_22->data;
    VAR_24 = VAR_23->hwctx;

    if (VAR_19->format == VAR_2) {
        AVHWFramesContext *VAR_32;
        AVBufferRef *VAR_33 = FUNC_14(VAR_22);
        if (!VAR_33)
            return FUNC_0(VAR_4);

        VAR_17->out_mem_mode = FUNC_3(VAR_17->in_mem_mode) ?
                          VAR_7 :
                          VAR_9;

        VAR_32 = (AVHWFramesContext *)VAR_33->data;
        VAR_21 = VAR_32->hwctx;

        VAR_32->format = VAR_2;
        VAR_32->width = FUNC_1(VAR_19->w, 32);
        VAR_32->height = FUNC_1(VAR_19->h, 32);
        VAR_32->sw_format = VAR_17->out_sw_format;
        VAR_32->initial_pool_size = 64;
        if (VAR_16->extra_hw_frames > 0)
            VAR_32->initial_pool_size += VAR_16->extra_hw_frames;
        VAR_21->frame_type = VAR_17->out_mem_mode;

        VAR_29 = FUNC_15(VAR_33);
        if (VAR_29 < 0) {
            FUNC_13(&VAR_33);
            FUNC_16(VAR_16, VAR_1, "Error creating frames_ctx for output pad.\n");
            return VAR_29;
        }

        VAR_17->surface_ptrs_out = FUNC_17(VAR_21->nb_surfaces,
                                               sizeof(*VAR_17->surface_ptrs_out));
        if (!VAR_17->surface_ptrs_out) {
            FUNC_13(&VAR_33);
            return FUNC_0(VAR_4);
        }

        for (VAR_30 = 0; VAR_30 < VAR_21->nb_surfaces; VAR_30++)
            VAR_17->surface_ptrs_out[VAR_30] = VAR_21->surfaces + VAR_30;
        VAR_17->nb_surface_ptrs_out = VAR_21->nb_surfaces;

        FUNC_13(&VAR_19->hw_frames_ctx);
        VAR_19->hw_frames_ctx = VAR_33;
    } else
        VAR_17->out_mem_mode = VAR_8;


    VAR_29 = FUNC_7(VAR_24->session, &VAR_28);
    if (VAR_29 == VAR_5)
        VAR_29 = FUNC_8(VAR_24->session, &VAR_27);
    if (VAR_29 != VAR_5) {
        FUNC_16(VAR_16, VAR_1, "Error querying the session attributes\n");
        return VAR_0;
    }

    for (VAR_30 = 0; VAR_30 < FUNC_2(VAR_15); VAR_30++) {
        VAR_29 = FUNC_9(VAR_24->session, VAR_15[VAR_30], &VAR_25);
        if (VAR_29 == VAR_5) {
            VAR_26 = VAR_15[VAR_30];
            break;
        }
    }

    if (VAR_29 != VAR_5) {
        FUNC_16(VAR_16, VAR_1, "Error getting the session handle\n");
        return VAR_0;
    }


    VAR_29 = FUNC_5(VAR_28, &VAR_27, &VAR_17->session);
    if (VAR_29 != VAR_5) {
        FUNC_16(VAR_16, VAR_1, "Error initializing a session for scaling\n");
        return VAR_0;
    }

    if (VAR_25) {
        VAR_29 = FUNC_11(VAR_17->session, VAR_26, VAR_25);
        if (VAR_29 != VAR_5)
            return VAR_0;
    }

    if (FUNC_12(VAR_27, 1, 25)) {
        VAR_29 = FUNC_6(VAR_24->session, VAR_17->session);
        if (VAR_29 != VAR_5)
            return VAR_0;
    }

    if (FUNC_3(VAR_17->in_mem_mode) || FUNC_3(VAR_17->out_mem_mode)) {
        VAR_17->opaque_alloc.In.Surfaces = VAR_17->surface_ptrs_in;
        VAR_17->opaque_alloc.In.NumSurface = VAR_17->nb_surface_ptrs_in;
        VAR_17->opaque_alloc.In.Type = VAR_17->in_mem_mode;

        VAR_17->opaque_alloc.Out.Surfaces = VAR_17->surface_ptrs_out;
        VAR_17->opaque_alloc.Out.NumSurface = VAR_17->nb_surface_ptrs_out;
        VAR_17->opaque_alloc.Out.Type = VAR_17->out_mem_mode;

        VAR_17->opaque_alloc.Header.BufferId = VAR_6;
        VAR_17->opaque_alloc.Header.BufferSz = sizeof(VAR_17->opaque_alloc);
    } else if (FUNC_4(VAR_17->in_mem_mode) || FUNC_4(VAR_17->out_mem_mode)) {
        mfxFrameAllocator VAR_34 = {
            .pthis = VAR_17,
            .Alloc = VAR_10,
            .Lock = VAR_13,
            .Unlock = VAR_14,
            .GetHDL = VAR_12,
            .Free = VAR_11,
        };

        VAR_29 = FUNC_10(VAR_17->session, &VAR_34);
        if (VAR_29 != VAR_5)
            return VAR_0;
    }

    return 0;
}
