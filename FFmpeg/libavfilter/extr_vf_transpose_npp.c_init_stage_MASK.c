
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_20__ {int width; int height; } ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_18__ {void* height; void* width; int sw_format; int format; } ;
struct TYPE_17__ {TYPE_4__* frames_ctx; TYPE_1__* planes_out; TYPE_8__* frame; int out_fmt; TYPE_14__* planes_in; int in_fmt; } ;
struct TYPE_16__ {int width; int height; } ;
struct TYPE_15__ {int width; int height; } ;
typedef TYPE_2__ NPPTransposeStageContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_14__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_8__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_8__*,int ) ;
 int FUNC_8 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_9(NPPTransposeStageContext *VAR_2, AVBufferRef *VAR_3)
{
    AVBufferRef *VAR_4 = ((void*)0);
    AVHWFramesContext *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;

    FUNC_8(VAR_2->in_fmt, &VAR_6, &VAR_7);
    FUNC_8(VAR_2->out_fmt, &VAR_8, &VAR_9);

    if (!VAR_2->planes_out[0].width) {
        VAR_2->planes_out[0].width = VAR_2->planes_in[0].width;
        VAR_2->planes_out[0].height = VAR_2->planes_in[0].height;
    }

    for (VAR_11 = 1; VAR_11 < FUNC_2(VAR_2->planes_in); VAR_11++) {
        VAR_2->planes_in[VAR_11].width = VAR_2->planes_in[0].width >> VAR_6;
        VAR_2->planes_in[VAR_11].height = VAR_2->planes_in[0].height >> VAR_7;
        VAR_2->planes_out[VAR_11].width = VAR_2->planes_out[0].width >> VAR_8;
        VAR_2->planes_out[VAR_11].height = VAR_2->planes_out[0].height >> VAR_9;
    }

    VAR_4 = FUNC_5(VAR_3);
    if (!VAR_4)
        return FUNC_0(VAR_1);
    VAR_5 = (AVHWFramesContext*)VAR_4->data;

    VAR_5->format = VAR_0;
    VAR_5->sw_format = VAR_2->out_fmt;
    VAR_5->width = FUNC_1(VAR_2->planes_out[0].width, 32);
    VAR_5->height = FUNC_1(VAR_2->planes_out[0].height, 32);

    VAR_10 = FUNC_6(VAR_4);
    if (VAR_10 < 0)
        goto fail;

    FUNC_4(VAR_2->frame);
    VAR_10 = FUNC_7(VAR_4, VAR_2->frame, 0);
    if (VAR_10 < 0)
        goto fail;

    VAR_2->frame->width = VAR_2->planes_out[0].width;
    VAR_2->frame->height = VAR_2->planes_out[0].height;
    FUNC_3(&VAR_2->frames_ctx);
    VAR_2->frames_ctx = VAR_4;

    return 0;

fail:
    FUNC_3(&VAR_4);
    return VAR_10;
}
