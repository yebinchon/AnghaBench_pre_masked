
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct dxva_context {int workaround; int surface_count; int surface; int * cfg; int decoder; } ;
typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_30__ {int context_mutex; int workaround; int surface; int surface_count; int * cfg; int video_context; int decoder; } ;
struct TYPE_29__ {int video_context; } ;
struct TYPE_28__ {int nb_surfaces; int surfaces; } ;
struct TYPE_27__ {scalar_t__ format; TYPE_7__* hwctx; TYPE_3__* device_ctx; } ;
struct TYPE_25__ {struct dxva_context dxva2; TYPE_9__ d3d11va; } ;
struct TYPE_26__ {scalar_t__ pix_fmt; int workaround; int dxva2_config; int dxva2_decoder; TYPE_4__ ctx; int d3d11_views; int nb_d3d11_views; int d3d11_config; int d3d11_decoder; TYPE_3__* device_ctx; } ;
struct TYPE_24__ {TYPE_8__* hwctx; } ;
struct TYPE_23__ {scalar_t__ data; } ;
struct TYPE_22__ {scalar_t__ pix_fmt; } ;
struct TYPE_21__ {TYPE_2__* hw_frames_ctx; TYPE_1__* hwaccel; scalar_t__ hwaccel_context; } ;
typedef TYPE_5__ FFDXVASharedContext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef TYPE_7__ AVDXVA2FramesContext ;
typedef TYPE_8__ AVD3D11VADeviceContext ;
typedef TYPE_9__ AVD3D11VAContext ;
typedef TYPE_10__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_1 (TYPE_10__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_10__*,int ,char*) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*,int) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*) ;

int FUNC_9(AVCodecContext *VAR_7)
{
    FFDXVASharedContext *VAR_8 = FUNC_1(VAR_7);
    AVHWFramesContext *VAR_9;
    enum AVHWDeviceType VAR_10 = VAR_7->hwaccel->pix_fmt == VAR_4
                            ? VAR_1 : VAR_0;
    int VAR_11 = 0;


    if (VAR_7->hwaccel_context)
        return 0;


    VAR_8->pix_fmt = VAR_7->hwaccel->pix_fmt;

    VAR_11 = FUNC_5(VAR_7, VAR_10);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_9 = (AVHWFramesContext*)VAR_7->hw_frames_ctx->data;
    VAR_8->device_ctx = VAR_9->device_ctx;

    if (VAR_9->format != VAR_8->pix_fmt) {
        FUNC_2(VAR_7, VAR_2, "Invalid pixfmt for hwaccel!\n");
        VAR_11 = FUNC_0(VAR_5);
        goto fail;
    }
    return 0;

fail:
    FUNC_6(VAR_7);
    return VAR_11;
}
