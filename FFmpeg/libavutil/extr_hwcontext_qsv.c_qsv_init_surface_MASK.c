
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int BitDepthLuma; int BitDepthChroma; int Shift; int FrameRateExtN; int FrameRateExtD; int PicStruct; int CropH; void* Height; int CropW; void* Width; scalar_t__ FourCC; int ChromaFormat; } ;
struct TYPE_11__ {TYPE_2__ Info; } ;
typedef TYPE_3__ mfxFrameSurface1 ;
struct TYPE_13__ {int height; int width; int sw_format; } ;
struct TYPE_12__ {scalar_t__ log2_chroma_w; scalar_t__ log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVHWFramesContext *VAR_5, mfxFrameSurface1 *VAR_6)
{
    const AVPixFmtDescriptor *VAR_7;
    uint32_t VAR_8;

    VAR_7 = FUNC_2(VAR_5->sw_format);
    if (!VAR_7)
        return FUNC_0(VAR_0);

    VAR_8 = FUNC_3(VAR_5->sw_format);
    if (!VAR_8)
        return FUNC_0(VAR_0);

    VAR_6->Info.BitDepthLuma = VAR_7->comp[0].depth;
    VAR_6->Info.BitDepthChroma = VAR_7->comp[0].depth;
    VAR_6->Info.Shift = VAR_7->comp[0].depth > 8;

    if (VAR_7->log2_chroma_w && VAR_7->log2_chroma_h)
        VAR_6->Info.ChromaFormat = VAR_1;
    else if (VAR_7->log2_chroma_w)
        VAR_6->Info.ChromaFormat = VAR_2;
    else
        VAR_6->Info.ChromaFormat = VAR_3;

    VAR_6->Info.FourCC = VAR_8;
    VAR_6->Info.Width = FUNC_1(VAR_5->width, 16);
    VAR_6->Info.CropW = VAR_5->width;
    VAR_6->Info.Height = FUNC_1(VAR_5->height, 16);
    VAR_6->Info.CropH = VAR_5->height;
    VAR_6->Info.FrameRateExtN = 25;
    VAR_6->Info.FrameRateExtD = 1;
    VAR_6->Info.PicStruct = VAR_4;

    return 0;
}
