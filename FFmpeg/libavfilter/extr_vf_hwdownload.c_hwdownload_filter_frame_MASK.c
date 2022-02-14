
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_24__ {TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_23__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_22__ {int height; int width; TYPE_1__* hw_frames_ctx; } ;
struct TYPE_21__ {TYPE_2__* hwframes; int hwframes_ref; } ;
struct TYPE_20__ {int height; int width; } ;
struct TYPE_19__ {void* data; } ;
typedef TYPE_3__ HWDownloadContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    AVFilterLink *VAR_6 = VAR_5->outputs[0];
    HWDownloadContext *VAR_7 = VAR_5->priv;
    AVFrame *VAR_8 = ((void*)0);
    int VAR_9;

    if (!VAR_7->hwframes_ref || !VAR_4->hw_frames_ctx) {
        FUNC_4(VAR_7, VAR_0, "Input frames must have hardware context.\n");
        VAR_9 = FUNC_0(VAR_1);
        goto fail;
    }
    if ((void*)VAR_7->hwframes != VAR_4->hw_frames_ctx->data) {
        FUNC_4(VAR_7, VAR_0, "Input frame is not the in the configured "
               "hwframe context.\n");
        VAR_9 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_8 = FUNC_6(VAR_6, VAR_7->hwframes->width,
                                 VAR_7->hwframes->height);
    if (!VAR_8) {
        VAR_9 = FUNC_0(VAR_2);
        goto fail;
    }

    VAR_9 = FUNC_3(VAR_8, VAR_4, 0);
    if (VAR_9 < 0) {
        FUNC_4(VAR_7, VAR_0, "Failed to download frame: %d.\n", VAR_9);
        goto fail;
    }

    VAR_8->width = VAR_6->w;
    VAR_8->height = VAR_6->h;

    VAR_9 = FUNC_1(VAR_8, VAR_4);
    if (VAR_9 < 0)
        goto fail;

    FUNC_2(&VAR_4);

    return FUNC_5(VAR_5->outputs[0], VAR_8);

fail:
    FUNC_2(&VAR_4);
    FUNC_2(&VAR_8);
    return VAR_9;
}
