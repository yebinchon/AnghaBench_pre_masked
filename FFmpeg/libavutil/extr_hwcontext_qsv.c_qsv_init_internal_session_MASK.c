
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int par ;
struct TYPE_25__ {int FrameRateExtN; int FrameRateExtD; } ;
struct TYPE_26__ {TYPE_5__ In; TYPE_5__ Out; } ;
struct TYPE_27__ {int AsyncDepth; TYPE_6__ vpp; int IOPattern; int NumExtParam; int ExtParam; } ;
typedef TYPE_7__ mfxVideoParam ;
typedef scalar_t__ mfxStatus ;
typedef int * mfxSession ;
struct TYPE_28__ {int Free; int GetHDL; int Unlock; int Lock; int Alloc; TYPE_12__* pthis; } ;
typedef TYPE_8__ mfxFrameAllocator ;
struct TYPE_29__ {int ext_buffers; } ;
struct TYPE_24__ {TYPE_5__ Info; } ;
struct TYPE_23__ {TYPE_2__* internal; } ;
struct TYPE_22__ {TYPE_10__* priv; } ;
struct TYPE_21__ {TYPE_9__* priv; } ;
struct TYPE_20__ {TYPE_3__* device_ctx; TYPE_11__* hwctx; TYPE_1__* internal; } ;
struct TYPE_19__ {int frame_type; TYPE_4__* surfaces; } ;
struct TYPE_18__ {scalar_t__ handle; int handle_type; int ver; int impl; } ;
typedef TYPE_9__ QSVFramesContext ;
typedef TYPE_10__ QSVDeviceContext ;
typedef TYPE_11__ AVQSVFramesContext ;
typedef TYPE_12__ AVHWFramesContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int **) ;
 scalar_t__ FUNC_3 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_7__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_12__*,int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (TYPE_7__*,int ,int) ;

__attribute__((used)) static int FUNC_8(AVHWFramesContext *VAR_16,
                                     mfxSession *VAR_17, int VAR_18)
{
    QSVFramesContext *VAR_19 = VAR_16->internal->priv;
    AVQSVFramesContext *VAR_20 = VAR_16->hwctx;
    QSVDeviceContext *VAR_21 = VAR_16->device_ctx->internal->priv;
    int VAR_22 = !!(VAR_20->frame_type & VAR_10);

    mfxFrameAllocator VAR_23 = {
        .pthis = VAR_16,
        .Alloc = VAR_11,
        .Lock = VAR_14,
        .Unlock = VAR_15,
        .GetHDL = VAR_13,
        .Free = VAR_12,
    };

    mfxVideoParam VAR_24;
    mfxStatus VAR_25;

    VAR_25 = FUNC_2(VAR_21->impl, &VAR_21->ver, VAR_17);
    if (VAR_25 != VAR_3) {
        FUNC_6(VAR_16, VAR_1, "Error initializing an internal session\n");
        return VAR_0;
    }

    if (VAR_21->handle) {
        VAR_25 = FUNC_4(*VAR_17, VAR_21->handle_type,
                                     VAR_21->handle);
        if (VAR_25 != VAR_3)
            return VAR_0;
    }

    if (!VAR_22) {
        VAR_25 = FUNC_3(*VAR_17, &VAR_23);
        if (VAR_25 != VAR_3)
            return VAR_0;
    }

    FUNC_7(&VAR_24, 0, sizeof(VAR_24));

    if (VAR_22) {
        VAR_24.ExtParam = VAR_19->ext_buffers;
        VAR_24.NumExtParam = FUNC_0(VAR_19->ext_buffers);
        VAR_24.IOPattern = VAR_18 ? VAR_7 :
                                   VAR_4;
    } else {
        VAR_24.IOPattern = VAR_18 ? VAR_9 :
                                 VAR_6;
    }

    VAR_24.IOPattern |= VAR_18 ? VAR_5 :
                              VAR_8;
    VAR_24.AsyncDepth = 1;

    VAR_24.vpp.In = VAR_20->surfaces[0].Info;





    VAR_24.vpp.In.FrameRateExtN = 25;
    VAR_24.vpp.In.FrameRateExtD = 1;
    VAR_24.vpp.Out = VAR_24.vpp.In;

    VAR_25 = FUNC_5(*VAR_17, &VAR_24);
    if (VAR_25 != VAR_3) {
        FUNC_6(VAR_16, VAR_2, "Error opening the internal VPP session."
               "Surface upload/download will not be possible\n");
        FUNC_1(*VAR_17);
        *VAR_17 = ((void*)0);
    }

    return 0;
}
