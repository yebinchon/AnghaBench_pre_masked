
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int * mfxSyncPoint ;
typedef scalar_t__ mfxStatus ;
struct TYPE_20__ {int PicStruct; int CropH; int CropW; } ;
struct TYPE_21__ {TYPE_1__ Info; } ;
typedef TYPE_2__ mfxFrameSurface1 ;
struct TYPE_25__ {TYPE_5__** outputs; TYPE_5__** inputs; TYPE_3__* priv; } ;
struct TYPE_24__ {int time_base; int h; int w; } ;
struct TYPE_23__ {scalar_t__ pts; scalar_t__ interlaced_frame; int height; int width; scalar_t__* data; } ;
struct TYPE_22__ {scalar_t__ last_pts; int session; } ;
typedef TYPE_3__ QSVDeintContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,TYPE_2__*,int *,int **) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__ const*) ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (TYPE_6__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_10, const AVFrame *VAR_11,
                         mfxFrameSurface1 *VAR_12)
{
    QSVDeintContext *VAR_13 = VAR_10->priv;
    AVFilterLink *VAR_14 = VAR_10->inputs[0];
    AVFilterLink *VAR_15 = VAR_10->outputs[0];

    AVFrame *VAR_16;
    mfxFrameSurface1 *VAR_17;
    mfxSyncPoint VAR_18 = ((void*)0);
    mfxStatus VAR_19;
    int VAR_20, VAR_21 = 0;

    VAR_16 = FUNC_9(VAR_15, VAR_15->w, VAR_15->h);
    if (!VAR_16) {
        VAR_20 = FUNC_0(VAR_2);
        goto fail;
    }

    VAR_17 = (mfxFrameSurface1*)VAR_16->data[3];
    VAR_17->Info.CropW = VAR_15->w;
    VAR_17->Info.CropH = VAR_15->h;
    VAR_17->Info.PicStruct = VAR_5;

    do {
        VAR_19 = FUNC_2(VAR_13->session, VAR_12, VAR_17,
                                           ((void*)0), &VAR_18);
        if (VAR_19 == VAR_6)
            FUNC_7(1);
    } while (VAR_19 == VAR_6);

    if (VAR_19 == VAR_3) {
        FUNC_4(&VAR_16);
        return VAR_8;
    }

    if ((VAR_19 < 0 && VAR_19 != VAR_4) || !VAR_18) {
        FUNC_5(VAR_10, VAR_1, "Error during deinterlacing: %d\n", VAR_19);
        VAR_20 = VAR_0;
        goto fail;
    }
    if (VAR_19 == VAR_4)
        VAR_21 = 1;

    do {
        VAR_19 = FUNC_1(VAR_13->session, VAR_18, 1000);
    } while (VAR_19 == VAR_7);
    if (VAR_19 < 0) {
        FUNC_5(VAR_10, VAR_1, "Error synchronizing the operation: %d\n", VAR_19);
        VAR_20 = VAR_0;
        goto fail;
    }

    VAR_20 = FUNC_3(VAR_16, VAR_11);
    if (VAR_20 < 0)
        goto fail;

    VAR_16->width = VAR_15->w;
    VAR_16->height = VAR_15->h;
    VAR_16->interlaced_frame = 0;

    VAR_16->pts = FUNC_6(VAR_16->pts, VAR_14->time_base, VAR_15->time_base);
    if (VAR_16->pts == VAR_13->last_pts)
        VAR_16->pts++;
    VAR_13->last_pts = VAR_16->pts;

    VAR_20 = FUNC_8(VAR_15, VAR_16);
    if (VAR_20 < 0)
        return VAR_20;

    return VAR_21 ? VAR_9 : 0;
fail:
    FUNC_4(&VAR_16);
    return VAR_20;
}
