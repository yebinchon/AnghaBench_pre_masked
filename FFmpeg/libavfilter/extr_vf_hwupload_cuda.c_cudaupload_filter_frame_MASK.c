
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__** outputs; } ;
struct TYPE_17__ {int h; int w; TYPE_3__* dst; } ;
struct TYPE_16__ {int height; int width; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];

    AVFrame *VAR_6 = ((void*)0);
    int VAR_7;

    VAR_6 = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        VAR_7 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_6->width = VAR_3->width;
    VAR_6->height = VAR_3->height;

    VAR_7 = FUNC_3(VAR_6, VAR_3, 0);
    if (VAR_7 < 0) {
        FUNC_4(VAR_4, VAR_0, "Error transferring data to the GPU\n");
        goto fail;
    }

    VAR_7 = FUNC_1(VAR_6, VAR_3);
    if (VAR_7 < 0)
        goto fail;

    FUNC_2(&VAR_3);

    return FUNC_5(VAR_4->outputs[0], VAR_6);
fail:
    FUNC_2(&VAR_3);
    FUNC_2(&VAR_6);
    return VAR_7;
}
