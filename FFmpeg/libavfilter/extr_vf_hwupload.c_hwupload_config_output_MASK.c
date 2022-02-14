
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ extra_hw_frames; TYPE_1__* priv; TYPE_3__** inputs; } ;
struct TYPE_13__ {scalar_t__ format; TYPE_7__* hw_frames_ctx; int h; int w; TYPE_4__* src; } ;
struct TYPE_12__ {scalar_t__ format; scalar_t__ sw_format; scalar_t__ initial_pool_size; int height; int width; } ;
struct TYPE_11__ {TYPE_7__* hwframes_ref; TYPE_2__* hwframes; int hwdevice_ref; } ;
typedef TYPE_1__ HWUploadContext ;
typedef TYPE_2__ AVHWFramesContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__**) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_7__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    AVFilterLink *VAR_6 = VAR_5->inputs[0];
    HWUploadContext *VAR_7 = VAR_5->priv;
    int VAR_8;

    FUNC_2(&VAR_7->hwframes_ref);

    if (VAR_6->format == VAR_4->format) {


        if (!VAR_6->hw_frames_ctx) {
            FUNC_6(VAR_7, VAR_1, "No input hwframe context.\n");
            return FUNC_0(VAR_2);
        }

        VAR_4->hw_frames_ctx = FUNC_1(VAR_6->hw_frames_ctx);
        if (!VAR_4->hw_frames_ctx)
            return FUNC_0(VAR_3);

        return 0;
    }

    VAR_7->hwframes_ref = FUNC_4(VAR_7->hwdevice_ref);
    if (!VAR_7->hwframes_ref)
        return FUNC_0(VAR_3);

    VAR_7->hwframes = (AVHWFramesContext*)VAR_7->hwframes_ref->data;

    FUNC_6(VAR_7, VAR_0, "Surface format is %s.\n",
           FUNC_3(VAR_6->format));

    VAR_7->hwframes->format = VAR_4->format;
    VAR_7->hwframes->sw_format = VAR_6->format;
    VAR_7->hwframes->width = VAR_6->w;
    VAR_7->hwframes->height = VAR_6->h;

    if (VAR_5->extra_hw_frames >= 0)
        VAR_7->hwframes->initial_pool_size = 2 + VAR_5->extra_hw_frames;

    VAR_8 = FUNC_5(VAR_7->hwframes_ref);
    if (VAR_8 < 0)
        goto fail;

    VAR_4->hw_frames_ctx = FUNC_1(VAR_7->hwframes_ref);
    if (!VAR_4->hw_frames_ctx) {
        VAR_8 = FUNC_0(VAR_3);
        goto fail;
    }

    return 0;

fail:
    FUNC_2(&VAR_7->hwframes_ref);
    return VAR_8;
}
