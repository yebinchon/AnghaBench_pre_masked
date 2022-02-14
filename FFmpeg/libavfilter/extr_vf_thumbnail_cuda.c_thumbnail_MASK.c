
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cu_func_ushort2; int cu_func_ushort; int cu_func_uchar; int cu_func_uchar2; } ;
typedef TYPE_2__ ThumbnailCudaContext ;
struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {int width; int height; int * linesize; int * data; TYPE_1__* hw_frames_ctx; } ;
struct TYPE_11__ {int sw_format; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;






 int FUNC_0 (TYPE_5__*,int ,int,int*,int ,int,int,int ,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_1, int *VAR_2, AVFrame *VAR_3)
{
    AVHWFramesContext *VAR_4 = (AVHWFramesContext*)VAR_3->hw_frames_ctx->data;
    ThumbnailCudaContext *VAR_5 = VAR_1->priv;

    switch (VAR_4->sw_format) {
    case 133:
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2, VAR_3->data[0], VAR_3->width, VAR_3->height, VAR_3->linesize[0], 1);
        FUNC_0(VAR_1, VAR_5->cu_func_uchar2, 2,
            VAR_2 + 256, VAR_3->data[1], VAR_3->width / 2, VAR_3->height / 2, VAR_3->linesize[1], 1);
        break;
    case 130:
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2, VAR_3->data[0], VAR_3->width, VAR_3->height, VAR_3->linesize[0], 1);
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2 + 256, VAR_3->data[1], VAR_3->width / 2, VAR_3->height / 2, VAR_3->linesize[1], 1);
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2 + 512, VAR_3->data[2], VAR_3->width / 2, VAR_3->height / 2, VAR_3->linesize[2], 1);
        break;
    case 129:
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2, VAR_3->data[0], VAR_3->width, VAR_3->height, VAR_3->linesize[0], 1);
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2 + 256, VAR_3->data[1], VAR_3->width, VAR_3->height, VAR_3->linesize[1], 1);
        FUNC_0(VAR_1, VAR_5->cu_func_uchar, 1,
            VAR_2 + 512, VAR_3->data[2], VAR_3->width, VAR_3->height, VAR_3->linesize[2], 1);
        break;
    case 132:
    case 131:
        FUNC_0(VAR_1, VAR_5->cu_func_ushort, 1,
            VAR_2, VAR_3->data[0], VAR_3->width, VAR_3->height, VAR_3->linesize[0], 2);
        FUNC_0(VAR_1, VAR_5->cu_func_ushort2, 2,
            VAR_2 + 256, VAR_3->data[1], VAR_3->width / 2, VAR_3->height / 2, VAR_3->linesize[1], 2);
        break;
    case 128:
        FUNC_0(VAR_1, VAR_5->cu_func_ushort2, 1,
            VAR_2, VAR_3->data[0], VAR_3->width, VAR_3->height, VAR_3->linesize[0], 2);
        FUNC_0(VAR_1, VAR_5->cu_func_ushort2, 1,
            VAR_2 + 256, VAR_3->data[1], VAR_3->width, VAR_3->height, VAR_3->linesize[1], 2);
        FUNC_0(VAR_1, VAR_5->cu_func_ushort2, 1,
            VAR_2 + 512, VAR_3->data[2], VAR_3->width, VAR_3->height, VAR_3->linesize[2], 2);
        break;
    default:
        return VAR_0;
    }

    return 0;
}
