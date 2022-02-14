
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int format; int height; int width; int linesize; int data; } ;
struct TYPE_14__ {TYPE_2__* axis_frame; int format; int axis_h; int width; int ctx; int font; int fontfile; } ;
typedef TYPE_1__ ShowCQTContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int,int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_10(ShowCQTContext *VAR_2)
{
    AVFrame *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_0(VAR_1);
    int VAR_5 = 1920, VAR_6 = 32;
    int VAR_7 = 0;

    if (!(VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_6)))
        goto fail;

    if (!(VAR_2->axis_frame = FUNC_2()))
        goto fail;

    if (FUNC_9(VAR_2, VAR_3, VAR_2->fontfile) < 0 &&
        FUNC_8(VAR_2, VAR_3, VAR_2->font) < 0 &&
        (VAR_7 = 1, VAR_4 = FUNC_7(VAR_3)) < 0)
        goto fail;

    if (VAR_7)
        VAR_5 /= 2, VAR_6 /= 2;

    if ((VAR_4 = FUNC_6(VAR_2, VAR_3, VAR_7)) < 0)
        goto fail;

    if ((VAR_4 = FUNC_5(VAR_2->axis_frame->data, VAR_2->axis_frame->linesize, VAR_2->width, VAR_2->axis_h,
                              FUNC_4(VAR_2->format), VAR_3->data, VAR_3->linesize,
                              VAR_5, VAR_6, VAR_0, VAR_2->ctx)) < 0)
        goto fail;

    FUNC_3(&VAR_3);
    VAR_2->axis_frame->width = VAR_2->width;
    VAR_2->axis_frame->height = VAR_2->axis_h;
    VAR_2->axis_frame->format = FUNC_4(VAR_2->format);
    return 0;

fail:
    FUNC_3(&VAR_3);
    FUNC_3(&VAR_2->axis_frame);
    return VAR_4;
}
