
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_24__ ;
typedef struct TYPE_44__ TYPE_23__ ;
typedef struct TYPE_43__ TYPE_22__ ;
typedef struct TYPE_42__ TYPE_21__ ;
typedef struct TYPE_41__ TYPE_20__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_19__ ;
typedef struct TYPE_38__ TYPE_18__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int par ;
struct TYPE_53__ {int FrameRateExtD; scalar_t__ FrameRateExtN; int CropH; int CropW; } ;
struct TYPE_30__ {TYPE_9__ Out; TYPE_9__ In; } ;
struct TYPE_38__ {int IOPattern; int AsyncDepth; TYPE_10__ vpp; scalar_t__ NumExtParam; int ** ExtParam; } ;
typedef TYPE_18__ mfxVideoParam ;
typedef int mfxVersion ;
typedef scalar_t__ mfxStatus ;
typedef int mfxIMPL ;
typedef int mfxHandleType ;
typedef int * mfxHDL ;
struct TYPE_39__ {int Free; int GetHDL; int Unlock; int Lock; int Alloc; TYPE_24__* pthis; } ;
typedef TYPE_19__ mfxFrameAllocator ;
typedef int mfxExtBuffer ;
struct TYPE_52__ {int den; scalar_t__ num; } ;
struct TYPE_50__ {int den; scalar_t__ num; } ;
struct TYPE_49__ {int den; scalar_t__ num; } ;
struct TYPE_51__ {TYPE_6__ time_base; TYPE_5__ frame_rate; int h; int w; } ;
struct TYPE_48__ {int MemId; } ;
struct TYPE_46__ {int BufferSz; int BufferId; } ;
struct TYPE_40__ {int NumSurface; int Type; TYPE_17__** Surfaces; } ;
struct TYPE_47__ {TYPE_2__ Header; TYPE_1__ In; TYPE_1__ Out; } ;
struct TYPE_45__ {TYPE_12__** outputs; TYPE_7__** inputs; TYPE_20__* priv; } ;
struct TYPE_44__ {TYPE_14__* device_ctx; TYPE_21__* hwctx; } ;
struct TYPE_43__ {int session; } ;
struct TYPE_42__ {int frame_type; int nb_surfaces; TYPE_17__* surfaces; } ;
struct TYPE_35__ {int BufferSz; int BufferId; } ;
struct TYPE_36__ {int Mode; TYPE_15__ Header; } ;
struct TYPE_41__ {int nb_surface_ptrs; int nb_mem_ids; int session; scalar_t__ num_ext_buffers; int ** ext_buffers; int * mem_ids; TYPE_3__ opaque_alloc; TYPE_17__** surface_ptrs; TYPE_16__ deint_conf; int mode; TYPE_13__* hw_frames_ctx; } ;
struct TYPE_37__ {TYPE_9__ Info; TYPE_4__ Data; } ;
struct TYPE_34__ {TYPE_22__* hwctx; } ;
struct TYPE_33__ {scalar_t__ data; } ;
struct TYPE_31__ {int den; scalar_t__ num; } ;
struct TYPE_32__ {TYPE_11__ time_base; TYPE_8__ frame_rate; } ;
typedef TYPE_20__ QSVDeintContext ;
typedef TYPE_21__ AVQSVFramesContext ;
typedef TYPE_22__ AVQSVDeviceContext ;
typedef TYPE_23__ AVHWFramesContext ;
typedef TYPE_24__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int **) ;
 scalar_t__ FUNC_7 (int ,TYPE_19__*) ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_18__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int ,int,int) ;
 int FUNC_11 (TYPE_24__*,int ,char*,...) ;
 void* FUNC_12 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_13 (TYPE_18__*,int ,int) ;

__attribute__((used)) static int FUNC_14(AVFilterContext *VAR_17)
{

    QSVDeintContext *VAR_18 = VAR_17->priv;
    AVHWFramesContext *VAR_19 = (AVHWFramesContext*)VAR_18->hw_frames_ctx->data;
    AVQSVFramesContext *VAR_20 = VAR_19->hwctx;
    AVQSVDeviceContext *VAR_21 = VAR_19->device_ctx->hwctx;

    int VAR_22 = !!(VAR_20->frame_type & VAR_10);

    mfxHDL VAR_23 = ((void*)0);
    mfxHandleType VAR_24;
    mfxVersion VAR_25;
    mfxIMPL VAR_26;
    mfxVideoParam VAR_27;
    mfxStatus VAR_28;
    int VAR_29;


    VAR_28 = FUNC_4(VAR_21->session, &VAR_26);
    if (VAR_28 == VAR_3)
        VAR_28 = FUNC_5(VAR_21->session, &VAR_25);
    if (VAR_28 != VAR_3) {
        FUNC_11(VAR_17, VAR_1, "Error querying the session attributes\n");
        return VAR_0;
    }

    for (VAR_29 = 0; VAR_29 < FUNC_1(VAR_16); VAR_29++) {
        VAR_28 = FUNC_6(VAR_21->session, VAR_16[VAR_29], &VAR_23);
        if (VAR_28 == VAR_3) {
            VAR_24 = VAR_16[VAR_29];
            break;
        }
    }

    if (VAR_28 != VAR_3) {
        FUNC_11(VAR_17, VAR_1, "Error getting the session handle\n");
        return VAR_0;
    }



    VAR_28 = FUNC_2(VAR_26, &VAR_25, &VAR_18->session);
    if (VAR_28 != VAR_3) {
        FUNC_11(VAR_17, VAR_1, "Error initializing a session for deinterlacing\n");
        return VAR_0;
    }

    if (VAR_23) {
        VAR_28 = FUNC_8(VAR_18->session, VAR_24, VAR_23);
        if (VAR_28 != VAR_3)
            return VAR_0;
    }

    if (FUNC_10(VAR_25, 1, 25)) {
        VAR_28 = FUNC_3(VAR_21->session, VAR_18->session);
        if (VAR_28 != VAR_3)
            return VAR_0;
    }

    FUNC_13(&VAR_27, 0, sizeof(VAR_27));

    VAR_18->deint_conf.Header.BufferId = VAR_5;
    VAR_18->deint_conf.Header.BufferSz = sizeof(VAR_18->deint_conf);
    VAR_18->deint_conf.Mode = VAR_18->mode;

    VAR_18->ext_buffers[VAR_18->num_ext_buffers++] = (mfxExtBuffer *)&VAR_18->deint_conf;

    if (VAR_22) {
        VAR_18->surface_ptrs = FUNC_12(VAR_20->nb_surfaces,
                                           sizeof(*VAR_18->surface_ptrs));
        if (!VAR_18->surface_ptrs)
            return FUNC_0(VAR_2);
        for (VAR_29 = 0; VAR_29 < VAR_20->nb_surfaces; VAR_29++)
            VAR_18->surface_ptrs[VAR_29] = VAR_20->surfaces + VAR_29;
        VAR_18->nb_surface_ptrs = VAR_20->nb_surfaces;

        VAR_18->opaque_alloc.In.Surfaces = VAR_18->surface_ptrs;
        VAR_18->opaque_alloc.In.NumSurface = VAR_18->nb_surface_ptrs;
        VAR_18->opaque_alloc.In.Type = VAR_20->frame_type;

        VAR_18->opaque_alloc.Out = VAR_18->opaque_alloc.In;

        VAR_18->opaque_alloc.Header.BufferId = VAR_4;
        VAR_18->opaque_alloc.Header.BufferSz = sizeof(VAR_18->opaque_alloc);

        VAR_18->ext_buffers[VAR_18->num_ext_buffers++] = (mfxExtBuffer *)&VAR_18->opaque_alloc;

        VAR_27.IOPattern = VAR_6 | VAR_8;
    } else {
        mfxFrameAllocator VAR_30 = {
            .pthis = VAR_17,
            .Alloc = VAR_11,
            .Lock = VAR_14,
            .Unlock = VAR_15,
            .GetHDL = VAR_13,
            .Free = VAR_12,
        };

        VAR_18->mem_ids = FUNC_12(VAR_20->nb_surfaces,
                                      sizeof(*VAR_18->mem_ids));
        if (!VAR_18->mem_ids)
            return FUNC_0(VAR_2);
        for (VAR_29 = 0; VAR_29 < VAR_20->nb_surfaces; VAR_29++)
            VAR_18->mem_ids[VAR_29] = VAR_20->surfaces[VAR_29].Data.MemId;
        VAR_18->nb_mem_ids = VAR_20->nb_surfaces;

        VAR_28 = FUNC_7(VAR_18->session, &VAR_30);
        if (VAR_28 != VAR_3)
            return VAR_0;

        VAR_27.IOPattern = VAR_7 | VAR_9;
    }

    VAR_27.ExtParam = VAR_18->ext_buffers;
    VAR_27.NumExtParam = VAR_18->num_ext_buffers;

    VAR_27.AsyncDepth = 1;

    VAR_27.vpp.In = VAR_20->surfaces[0].Info;

    VAR_27.vpp.In.CropW = VAR_17->inputs[0]->w;
    VAR_27.vpp.In.CropH = VAR_17->inputs[0]->h;

    if (VAR_17->inputs[0]->frame_rate.num) {
        VAR_27.vpp.In.FrameRateExtN = VAR_17->inputs[0]->frame_rate.num;
        VAR_27.vpp.In.FrameRateExtD = VAR_17->inputs[0]->frame_rate.den;
    } else {
        VAR_27.vpp.In.FrameRateExtN = VAR_17->inputs[0]->time_base.num;
        VAR_27.vpp.In.FrameRateExtD = VAR_17->inputs[0]->time_base.den;
    }

    VAR_27.vpp.Out = VAR_27.vpp.In;

    if (VAR_17->outputs[0]->frame_rate.num) {
        VAR_27.vpp.Out.FrameRateExtN = VAR_17->outputs[0]->frame_rate.num;
        VAR_27.vpp.Out.FrameRateExtD = VAR_17->outputs[0]->frame_rate.den;
    } else {
        VAR_27.vpp.Out.FrameRateExtN = VAR_17->outputs[0]->time_base.num;
        VAR_27.vpp.Out.FrameRateExtD = VAR_17->outputs[0]->time_base.den;
    }

    VAR_28 = FUNC_9(VAR_18->session, &VAR_27);
    if (VAR_28 != VAR_3) {
        FUNC_11(VAR_17, VAR_1, "Error opening the VPP for deinterlacing: %d\n", VAR_28);
        return VAR_0;
    }

    return 0;
}
