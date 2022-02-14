
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int * priv; TYPE_2__** outputs; } ;
struct TYPE_16__ {scalar_t__ format; int h; int w; TYPE_3__* dst; } ;
struct TYPE_15__ {scalar_t__ format; int height; int width; } ;
typedef int HWUploadContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    HWUploadContext *VAR_6 = VAR_4->priv;
    AVFrame *VAR_7 = ((void*)0);
    int VAR_8;

    if (VAR_3->format == VAR_5->format)
        return FUNC_5(VAR_5, VAR_3);

    VAR_7 = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_7) {
        FUNC_4(VAR_6, VAR_0, "Failed to allocate frame to upload to.\n");
        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_7->width = VAR_3->width;
    VAR_7->height = VAR_3->height;

    VAR_8 = FUNC_3(VAR_7, VAR_3, 0);
    if (VAR_8 < 0) {
        FUNC_4(VAR_6, VAR_0, "Failed to upload frame: %d.\n", VAR_8);
        goto fail;
    }

    VAR_8 = FUNC_1(VAR_7, VAR_3);
    if (VAR_8 < 0)
        goto fail;

    FUNC_2(&VAR_3);

    return FUNC_5(VAR_5, VAR_7);

fail:
    FUNC_2(&VAR_3);
    FUNC_2(&VAR_7);
    return VAR_8;
}
