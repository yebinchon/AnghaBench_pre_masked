
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_31__ {int BitDepthLuma; int BitDepthChroma; int Shift; scalar_t__ FrameRateExtN; scalar_t__ FrameRateExtD; void* Height; void* Width; int ChromaFormat; int AspectRatioH; int AspectRatioW; int CropH; int CropW; scalar_t__ CropY; scalar_t__ CropX; int FourCC; } ;
struct TYPE_33__ {int CodecId; scalar_t__ CodecLevel; int Interleaved; scalar_t__ RestartInterval; int Quality; TYPE_7__ FrameInfo; int CodecProfile; } ;
struct TYPE_32__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_30__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_28__ {void* Height; void* Width; } ;
struct TYPE_29__ {TYPE_4__ Info; } ;
struct TYPE_27__ {scalar_t__ data; } ;
struct TYPE_26__ {int depth; } ;
struct TYPE_25__ {int den; int num; } ;
struct TYPE_24__ {scalar_t__ pix_fmt; int sw_pix_fmt; scalar_t__ level; int global_quality; TYPE_8__ time_base; TYPE_6__ framerate; TYPE_3__* hw_frames_ctx; int height; int width; TYPE_1__ sample_aspect_ratio; int codec_id; } ;
struct TYPE_23__ {TYPE_12__* hwctx; } ;
struct TYPE_22__ {TYPE_2__* comp; } ;
struct TYPE_21__ {TYPE_5__* surfaces; } ;
struct TYPE_19__ {TYPE_9__ mfx; } ;
struct TYPE_20__ {TYPE_10__ param; int profile; } ;
typedef TYPE_11__ QSVEncContext ;
typedef TYPE_12__ AVQSVFramesContext ;
typedef TYPE_13__ AVPixFmtDescriptor ;
typedef TYPE_14__ AVHWFramesContext ;
typedef TYPE_15__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 TYPE_13__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, QSVEncContext *VAR_4)
{
    enum AVPixelFormat VAR_5 = VAR_3->pix_fmt == VAR_1 ?
                                   VAR_3->sw_pix_fmt : VAR_3->pix_fmt;
    const AVPixFmtDescriptor *VAR_6;
    int VAR_7;

    VAR_7 = FUNC_3(VAR_3->codec_id);
    if (VAR_7 < 0)
        return VAR_0;
    VAR_4->param.mfx.CodecId = VAR_7;

    if (VAR_3->level > 0)
        VAR_4->param.mfx.CodecLevel = VAR_3->level;
    VAR_4->param.mfx.CodecProfile = VAR_4->profile;

    VAR_6 = FUNC_2(VAR_5);
    if (!VAR_6)
        return VAR_0;

    FUNC_4(VAR_5, &VAR_4->param.mfx.FrameInfo.FourCC);

    VAR_4->param.mfx.FrameInfo.CropX = 0;
    VAR_4->param.mfx.FrameInfo.CropY = 0;
    VAR_4->param.mfx.FrameInfo.CropW = VAR_3->width;
    VAR_4->param.mfx.FrameInfo.CropH = VAR_3->height;
    VAR_4->param.mfx.FrameInfo.AspectRatioW = VAR_3->sample_aspect_ratio.num;
    VAR_4->param.mfx.FrameInfo.AspectRatioH = VAR_3->sample_aspect_ratio.den;
    VAR_4->param.mfx.FrameInfo.ChromaFormat = VAR_2;
    VAR_4->param.mfx.FrameInfo.BitDepthLuma = VAR_6->comp[0].depth;
    VAR_4->param.mfx.FrameInfo.BitDepthChroma = VAR_6->comp[0].depth;
    VAR_4->param.mfx.FrameInfo.Shift = VAR_6->comp[0].depth > 8;

    VAR_4->param.mfx.FrameInfo.Width = FUNC_0(VAR_3->width, 16);
    VAR_4->param.mfx.FrameInfo.Height = FUNC_0(VAR_3->height, 16);

    if (VAR_3->hw_frames_ctx) {
        AVHWFramesContext *VAR_8 = (AVHWFramesContext *)VAR_3->hw_frames_ctx->data;
        AVQSVFramesContext *VAR_9 = VAR_8->hwctx;
        VAR_4->param.mfx.FrameInfo.Width = VAR_9->surfaces[0].Info.Width;
        VAR_4->param.mfx.FrameInfo.Height = VAR_9->surfaces[0].Info.Height;
    }

    if (VAR_3->framerate.den > 0 && VAR_3->framerate.num > 0) {
        VAR_4->param.mfx.FrameInfo.FrameRateExtN = VAR_3->framerate.num;
        VAR_4->param.mfx.FrameInfo.FrameRateExtD = VAR_3->framerate.den;
    } else {
        VAR_4->param.mfx.FrameInfo.FrameRateExtN = VAR_3->time_base.den;
        VAR_4->param.mfx.FrameInfo.FrameRateExtD = VAR_3->time_base.num;
    }

    VAR_4->param.mfx.Interleaved = 1;
    VAR_4->param.mfx.Quality = FUNC_1(VAR_3->global_quality, 1, 100);
    VAR_4->param.mfx.RestartInterval = 0;

    return 0;
}
