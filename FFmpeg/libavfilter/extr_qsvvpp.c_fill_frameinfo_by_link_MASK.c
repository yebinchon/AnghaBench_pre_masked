
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_20__ {int BitDepthLuma; int BitDepthChroma; int Shift; int AspectRatioW; int AspectRatioH; int FrameRateExtD; int FrameRateExtN; int CropH; int CropW; int ChromaFormat; int FourCC; int PicStruct; void* Height; void* Width; scalar_t__ CropY; scalar_t__ CropX; } ;
typedef TYPE_6__ mfxFrameInfo ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_23__ {TYPE_7__* hwctx; } ;
struct TYPE_22__ {scalar_t__ log2_chroma_w; scalar_t__ log2_chroma_h; TYPE_3__* comp; } ;
struct TYPE_21__ {TYPE_2__* surfaces; } ;
struct TYPE_19__ {int num; int den; } ;
struct TYPE_18__ {int den; int num; } ;
struct TYPE_17__ {int depth; } ;
struct TYPE_16__ {TYPE_6__ Info; } ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ format; TYPE_5__ sample_aspect_ratio; TYPE_4__ frame_rate; int h; int w; TYPE_1__* hw_frames_ctx; } ;
typedef TYPE_7__ AVQSVFramesContext ;
typedef TYPE_8__ AVPixFmtDescriptor ;
typedef TYPE_9__ AVHWFramesContext ;
typedef TYPE_10__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__* FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(mfxFrameInfo *VAR_7, AVFilterLink *VAR_8)
{
    enum AVPixelFormat VAR_9;
    AVHWFramesContext *VAR_10;
    AVQSVFramesContext *VAR_11;
    const AVPixFmtDescriptor *VAR_12;

    if (VAR_8->format == VAR_1) {
        if (!VAR_8->hw_frames_ctx)
            return FUNC_0(VAR_2);

        VAR_10 = (AVHWFramesContext *)VAR_8->hw_frames_ctx->data;
        VAR_11 = VAR_10->hwctx;
        *VAR_7 = VAR_11->surfaces[0].Info;
    } else {
        VAR_9 = VAR_8->format;
        VAR_12 = FUNC_2(VAR_9);
        if (!VAR_12)
            return VAR_0;

        VAR_7->CropX = 0;
        VAR_7->CropY = 0;
        VAR_7->Width = FUNC_1(VAR_8->w, 32);
        VAR_7->Height = FUNC_1(VAR_8->h, 32);
        VAR_7->PicStruct = VAR_6;
        VAR_7->FourCC = FUNC_3(VAR_9);
        VAR_7->BitDepthLuma = VAR_12->comp[0].depth;
        VAR_7->BitDepthChroma = VAR_12->comp[0].depth;
        VAR_7->Shift = VAR_12->comp[0].depth > 8;
        if (VAR_12->log2_chroma_w && VAR_12->log2_chroma_h)
            VAR_7->ChromaFormat = VAR_3;
        else if (VAR_12->log2_chroma_w)
            VAR_7->ChromaFormat = VAR_4;
        else
            VAR_7->ChromaFormat = VAR_5;
    }

    VAR_7->CropW = VAR_8->w;
    VAR_7->CropH = VAR_8->h;
    VAR_7->FrameRateExtN = VAR_8->frame_rate.num;
    VAR_7->FrameRateExtD = VAR_8->frame_rate.den;
    VAR_7->AspectRatioW = VAR_8->sample_aspect_ratio.num ? VAR_8->sample_aspect_ratio.num : 1;
    VAR_7->AspectRatioH = VAR_8->sample_aspect_ratio.den ? VAR_8->sample_aspect_ratio.den : 1;

    return 0;
}
