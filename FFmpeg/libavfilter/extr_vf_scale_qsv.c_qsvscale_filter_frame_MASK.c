
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int * mfxSyncPoint ;
typedef scalar_t__ mfxStatus ;
typedef int mfxFrameSurface1 ;
typedef int int64_t ;
struct TYPE_20__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_19__ {int w; int h; TYPE_5__* dst; } ;
struct TYPE_16__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_18__ {int width; int height; TYPE_1__ sample_aspect_ratio; scalar_t__* data; } ;
struct TYPE_17__ {int session; } ;
typedef TYPE_2__ QSVScaleContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int **) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (TYPE_5__*,int ,char*,...) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_6, AVFrame *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_6->dst;
    QSVScaleContext *VAR_9 = VAR_8->priv;
    AVFilterLink *VAR_10 = VAR_8->outputs[0];

    mfxSyncPoint VAR_11 = ((void*)0);
    mfxStatus VAR_12;

    AVFrame *VAR_13 = ((void*)0);
    int VAR_14 = 0;

    VAR_13 = FUNC_9(VAR_10, VAR_10->w, VAR_10->h);
    if (!VAR_13) {
        VAR_14 = FUNC_0(VAR_2);
        goto fail;
    }

    do {
        VAR_12 = FUNC_2(VAR_9->session,
                                           (mfxFrameSurface1*)VAR_7->data[3],
                                           (mfxFrameSurface1*)VAR_13->data[3],
                                           ((void*)0), &VAR_11);
        if (VAR_12 == VAR_4)
            FUNC_7(1);
    } while (VAR_12 == VAR_4);

    if (VAR_12 < 0 || !VAR_11) {
        FUNC_5(VAR_8, VAR_1, "Error during scaling\n");
        VAR_14 = VAR_0;
        goto fail;
    }

    do {
        VAR_12 = FUNC_1(VAR_9->session, VAR_11, 1000);
    } while (VAR_12 == VAR_5);
    if (VAR_12 < 0) {
        FUNC_5(VAR_8, VAR_1, "Error synchronizing the operation: %d\n", VAR_12);
        VAR_14 = VAR_0;
        goto fail;
    }

    VAR_14 = FUNC_3(VAR_13, VAR_7);
    if (VAR_14 < 0)
        goto fail;

    VAR_13->width = VAR_10->w;
    VAR_13->height = VAR_10->h;

    FUNC_6(&VAR_13->sample_aspect_ratio.num, &VAR_13->sample_aspect_ratio.den,
              (int64_t)VAR_7->sample_aspect_ratio.num * VAR_10->h * VAR_6->w,
              (int64_t)VAR_7->sample_aspect_ratio.den * VAR_10->w * VAR_6->h,
              VAR_3);

    FUNC_4(&VAR_7);
    return FUNC_8(VAR_10, VAR_13);
fail:
    FUNC_4(&VAR_7);
    FUNC_4(&VAR_13);
    return VAR_14;
}
