
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {int format; int height; int width; int linesize; int data; } ;
struct TYPE_5__ {TYPE_3__* axis_frame; int format; int axis_h; int width; int ctx; int axisfile; } ;
typedef TYPE_1__ ShowCQTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int **,int*,int*,int*,int*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int **,int*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_7(ShowCQTContext *VAR_1)
{
    uint8_t *VAR_2[4] = { ((void*)0) };
    int VAR_3[4];
    enum AVPixelFormat VAR_4;
    int VAR_5, VAR_6, VAR_7;

    if ((VAR_7 = FUNC_5(VAR_2, VAR_3, &VAR_5, &VAR_6, &VAR_4,
                             VAR_1->axisfile, VAR_1->ctx)) < 0)
        goto error;

    VAR_7 = FUNC_0(VAR_0);
    if (!(VAR_1->axis_frame = FUNC_1()))
        goto error;

    if ((VAR_7 = FUNC_6(VAR_1->axis_frame->data, VAR_1->axis_frame->linesize, VAR_1->width, VAR_1->axis_h,
                              FUNC_4(VAR_1->format), VAR_2, VAR_3, VAR_5, VAR_6,
                              VAR_4, VAR_1->ctx)) < 0)
        goto error;

    VAR_1->axis_frame->width = VAR_1->width;
    VAR_1->axis_frame->height = VAR_1->axis_h;
    VAR_1->axis_frame->format = FUNC_4(VAR_1->format);
    FUNC_3(VAR_2);
    return 0;

error:
    FUNC_2(&VAR_1->axis_frame);
    FUNC_3(VAR_2);
    return VAR_7;
}
