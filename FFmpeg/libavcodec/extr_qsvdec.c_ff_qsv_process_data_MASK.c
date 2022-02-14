
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ Width; scalar_t__ Height; int FourCC; } ;
struct TYPE_24__ {TYPE_1__ FrameInfo; } ;
struct TYPE_25__ {TYPE_2__ mfx; int member_0; } ;
typedef TYPE_3__ mfxVideoParam ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_28__ {int coded_width; int coded_height; int pix_fmt; } ;
struct TYPE_27__ {int member_0; int size; } ;
struct TYPE_26__ {scalar_t__ orig_pix_fmt; int reinit_flag; int initialized; scalar_t__ buffered_count; } ;
typedef TYPE_4__ QSVContext ;
typedef TYPE_5__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*,int *,int*,TYPE_5__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*,TYPE_5__*,int,TYPE_3__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*,int,TYPE_3__*) ;

int FUNC_5(AVCodecContext *VAR_2, QSVContext *VAR_3,
                        AVFrame *VAR_4, int *VAR_5, AVPacket *VAR_6)
{
    int VAR_7;
    mfxVideoParam VAR_8 = { 0 };
    enum AVPixelFormat VAR_9 = VAR_1;

    if (!VAR_6->size)
        return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);






    if (VAR_3->orig_pix_fmt != VAR_0)
        VAR_9 = VAR_3->orig_pix_fmt;
    if (!VAR_2->coded_width)
        VAR_2->coded_width = 1280;
    if (!VAR_2->coded_height)
        VAR_2->coded_height = 720;

    VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_9, &VAR_8);

    if (VAR_7 >= 0 && (VAR_3->orig_pix_fmt != FUNC_0(VAR_8.mfx.FrameInfo.FourCC) ||
        VAR_2->coded_width != VAR_8.mfx.FrameInfo.Width ||
        VAR_2->coded_height != VAR_8.mfx.FrameInfo.Height)) {
        AVPacket VAR_10 = {0};

        if (VAR_3->buffered_count) {
            VAR_3->reinit_flag = 1;

            VAR_3->buffered_count--;
            return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_10);
        }
        VAR_3->reinit_flag = 0;

        VAR_3->orig_pix_fmt = VAR_2->pix_fmt = VAR_9 = FUNC_0(VAR_8.mfx.FrameInfo.FourCC);

        VAR_2->coded_width = VAR_8.mfx.FrameInfo.Width;
        VAR_2->coded_height = VAR_8.mfx.FrameInfo.Height;

        VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_9, &VAR_8);
        if (VAR_7 < 0)
            goto reinit_fail;
        VAR_3->initialized = 0;
    }

    if (!VAR_3->initialized) {
        VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_8);
        if (VAR_7 < 0)
            goto reinit_fail;
        VAR_3->initialized = 1;
    }

    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

reinit_fail:
    VAR_3->orig_pix_fmt = VAR_2->pix_fmt = VAR_0;
    return VAR_7;
}
