
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int f; } ;
struct TYPE_7__ {int f; } ;
struct MpegEncContext {int picture_structure; scalar_t__ pict_type; int mb_height; int alternate_scan; int** mpeg_f_code; int intra_dc_precision; int top_field_first; int frame_pred_frame_dct; int concealment_motion_vectors; int q_scale_type; int intra_vlc_format; int repeat_first_field; int chroma_420_type; int progressive_frame; int chroma_format; int first_field; scalar_t__ mb_width; TYPE_2__ next_picture; TYPE_1__ last_picture; TYPE_3__* current_picture_ptr; } ;
struct TYPE_10__ {int wForwardRefPictureIndex; int wBackwardRefPictureIndex; int wPicHeightInMBminus1; int bMacroblockWidthMinus1; int bMacroblockHeightMinus1; int bBlockWidthMinus1; int bBlockHeightMinus1; int bBPPminus1; int bPicStructure; int bSecondField; int bPicIntra; int bPicBackwardPrediction; int bPicScanFixed; int bPicScanMethod; int wBitstreamFcodes; int wBitstreamPCEelements; scalar_t__ bBitstreamConcealmentMethod; scalar_t__ bBitstreamConcealmentNeed; scalar_t__ bReservedBits; scalar_t__ bMV_RPS; scalar_t__ bPicBinPB; scalar_t__ bPicOBMC; scalar_t__ bPic4MVallowed; scalar_t__ bPicDeblockConfined; scalar_t__ bPicDeblocked; scalar_t__ bPicExtrapolation; scalar_t__ bPicOverflowBlocks; scalar_t__ bPicSpatialResid8; scalar_t__ bRcontrol; scalar_t__ bPicReadbackRequests; int bChromaFormat; scalar_t__ bMVprecisionAndChromaRelation; scalar_t__ bBidirectionalAveragingMode; scalar_t__ wPicWidthInMBminus1; scalar_t__ wDeblockedPictureIndex; void* wDecodedPictureIndex; } ;
struct TYPE_9__ {int f; } ;
typedef TYPE_3__ Picture ;
typedef TYPE_4__ DXVA_PictureParameters ;
typedef int AVDXVAContext ;
typedef int AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_3,
                                    AVDXVAContext *VAR_4,
                                    const struct MpegEncContext *VAR_5,
                                    DXVA_PictureParameters *VAR_6)
{
    const Picture *VAR_7 = VAR_5->current_picture_ptr;
    int VAR_8 = VAR_5->picture_structure != VAR_2;

    FUNC_1(VAR_6, 0, sizeof(*VAR_6));
    VAR_6->wDecodedPictureIndex = FUNC_0(VAR_3, VAR_4, VAR_7->f);
    VAR_6->wDeblockedPictureIndex = 0;
    if (VAR_5->pict_type != VAR_1)
        VAR_6->wForwardRefPictureIndex = FUNC_0(VAR_3, VAR_4, VAR_5->last_picture.f);
    else
        VAR_6->wForwardRefPictureIndex = 0xffff;
    if (VAR_5->pict_type == VAR_0)
        VAR_6->wBackwardRefPictureIndex = FUNC_0(VAR_3, VAR_4, VAR_5->next_picture.f);
    else
        VAR_6->wBackwardRefPictureIndex = 0xffff;
    VAR_6->wPicWidthInMBminus1 = VAR_5->mb_width - 1;
    VAR_6->wPicHeightInMBminus1 = (VAR_5->mb_height >> VAR_8) - 1;
    VAR_6->bMacroblockWidthMinus1 = 15;
    VAR_6->bMacroblockHeightMinus1 = 15;
    VAR_6->bBlockWidthMinus1 = 7;
    VAR_6->bBlockHeightMinus1 = 7;
    VAR_6->bBPPminus1 = 7;
    VAR_6->bPicStructure = VAR_5->picture_structure;
    VAR_6->bSecondField = VAR_8 && !VAR_5->first_field;
    VAR_6->bPicIntra = VAR_5->pict_type == VAR_1;
    VAR_6->bPicBackwardPrediction = VAR_5->pict_type == VAR_0;
    VAR_6->bBidirectionalAveragingMode = 0;
    VAR_6->bMVprecisionAndChromaRelation= 0;
    VAR_6->bChromaFormat = VAR_5->chroma_format;
    VAR_6->bPicScanFixed = 1;
    VAR_6->bPicScanMethod = VAR_5->alternate_scan ? 1 : 0;
    VAR_6->bPicReadbackRequests = 0;
    VAR_6->bRcontrol = 0;
    VAR_6->bPicSpatialResid8 = 0;
    VAR_6->bPicOverflowBlocks = 0;
    VAR_6->bPicExtrapolation = 0;
    VAR_6->bPicDeblocked = 0;
    VAR_6->bPicDeblockConfined = 0;
    VAR_6->bPic4MVallowed = 0;
    VAR_6->bPicOBMC = 0;
    VAR_6->bPicBinPB = 0;
    VAR_6->bMV_RPS = 0;
    VAR_6->bReservedBits = 0;
    VAR_6->wBitstreamFcodes = (VAR_5->mpeg_f_code[0][0] << 12) |
                                       (VAR_5->mpeg_f_code[0][1] << 8) |
                                       (VAR_5->mpeg_f_code[1][0] << 4) |
                                       (VAR_5->mpeg_f_code[1][1] );
    VAR_6->wBitstreamPCEelements = (VAR_5->intra_dc_precision << 14) |
                                       (VAR_5->picture_structure << 12) |
                                       (VAR_5->top_field_first << 11) |
                                       (VAR_5->frame_pred_frame_dct << 10) |
                                       (VAR_5->concealment_motion_vectors << 9) |
                                       (VAR_5->q_scale_type << 8) |
                                       (VAR_5->intra_vlc_format << 7) |
                                       (VAR_5->alternate_scan << 6) |
                                       (VAR_5->repeat_first_field << 5) |
                                       (VAR_5->chroma_420_type << 4) |
                                       (VAR_5->progressive_frame << 3);
    VAR_6->bBitstreamConcealmentNeed = 0;
    VAR_6->bBitstreamConcealmentMethod = 0;
}
