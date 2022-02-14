
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int FourCC; int PicStruct; int Height; int Width; int CropH; int CropW; } ;
struct TYPE_12__ {TYPE_1__ FrameInfo; int CodecProfile; int CodecLevel; } ;
struct TYPE_13__ {TYPE_2__ mfx; } ;
typedef TYPE_3__ mfxVideoParam ;
struct TYPE_15__ {int height; int width; int pix_fmt; int hw_frames_ctx; int field_order; int profile; int level; int coded_height; int coded_width; } ;
struct TYPE_14__ {int pool; TYPE_1__ frame_info; int session; } ;
typedef TYPE_4__ QSVContext ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,int,char*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, QSVContext *VAR_2, mfxVideoParam *VAR_3)
{
    int VAR_4;

    VAR_1->width = VAR_3->mfx.FrameInfo.CropW;
    VAR_1->height = VAR_3->mfx.FrameInfo.CropH;
    VAR_1->coded_width = VAR_3->mfx.FrameInfo.Width;
    VAR_1->coded_height = VAR_3->mfx.FrameInfo.Height;
    VAR_1->level = VAR_3->mfx.CodecLevel;
    VAR_1->profile = VAR_3->mfx.CodecProfile;
    VAR_1->field_order = FUNC_5(VAR_3->mfx.FrameInfo.PicStruct);
    VAR_1->pix_fmt = FUNC_4(VAR_3->mfx.FrameInfo.FourCC);

    VAR_4 = FUNC_1(VAR_2->session, VAR_3);
    if (VAR_4 < 0)
        return FUNC_6(VAR_1, VAR_4,
                                  "Error initializing the MFX video decoder");

    VAR_2->frame_info = VAR_3->mfx.FrameInfo;

    if (!VAR_1->hw_frames_ctx)
        VAR_2->pool = FUNC_2(FUNC_3(VAR_1->pix_fmt,
                    FUNC_0(VAR_1->width, 128), FUNC_0(VAR_1->height, 64), 1), VAR_0);
    return 0;
}
