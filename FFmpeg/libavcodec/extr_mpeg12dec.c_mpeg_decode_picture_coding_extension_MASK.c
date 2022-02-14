
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int idct_permutation; } ;
struct TYPE_9__ {TYPE_2__* f; } ;
struct TYPE_10__ {int** mpeg_f_code; scalar_t__ pict_type; void* progressive_frame; int avctx; void* frame_pred_frame_dct; void* alternate_scan; void* intra_vlc_format; void* concealment_motion_vectors; void* repeat_first_field; void* top_field_first; void* picture_structure; void* intra_dc_precision; int intra_scantable; TYPE_1__ idsp; int inter_scantable; int gb; void* chroma_420_type; void* q_scale_type; TYPE_3__ current_picture; scalar_t__* full_pel; } ;
struct TYPE_11__ {scalar_t__ mpeg_enc_ctx_allocated; TYPE_4__ mpeg_enc_ctx; } ;
struct TYPE_8__ {scalar_t__ pict_type; int key_frame; } ;
typedef TYPE_4__ MpegEncContext ;
typedef TYPE_5__ Mpeg1Context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,void*) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_5 ;
 void* FUNC_3 (int *,int) ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(Mpeg1Context *VAR_6)
{
    MpegEncContext *VAR_7 = &VAR_6->mpeg_enc_ctx;

    VAR_7->full_pel[0] = VAR_7->full_pel[1] = 0;
    VAR_7->mpeg_f_code[0][0] = FUNC_3(&VAR_7->gb, 4);
    VAR_7->mpeg_f_code[0][1] = FUNC_3(&VAR_7->gb, 4);
    VAR_7->mpeg_f_code[1][0] = FUNC_3(&VAR_7->gb, 4);
    VAR_7->mpeg_f_code[1][1] = FUNC_3(&VAR_7->gb, 4);
    if (!VAR_7->pict_type && VAR_6->mpeg_enc_ctx_allocated) {
        FUNC_0(VAR_7->avctx, VAR_0,
               "Missing picture start code, guessing missing values\n");
        if (VAR_7->mpeg_f_code[1][0] == 15 && VAR_7->mpeg_f_code[1][1] == 15) {
            if (VAR_7->mpeg_f_code[0][0] == 15 && VAR_7->mpeg_f_code[0][1] == 15)
                VAR_7->pict_type = VAR_2;
            else
                VAR_7->pict_type = VAR_3;
        } else
            VAR_7->pict_type = VAR_1;
        VAR_7->current_picture.f->pict_type = VAR_7->pict_type;
        VAR_7->current_picture.f->key_frame = VAR_7->pict_type == VAR_2;
    }
    VAR_7->mpeg_f_code[0][0] += !VAR_7->mpeg_f_code[0][0];
    VAR_7->mpeg_f_code[0][1] += !VAR_7->mpeg_f_code[0][1];
    VAR_7->mpeg_f_code[1][0] += !VAR_7->mpeg_f_code[1][0];
    VAR_7->mpeg_f_code[1][1] += !VAR_7->mpeg_f_code[1][1];

    VAR_7->intra_dc_precision = FUNC_3(&VAR_7->gb, 2);
    VAR_7->picture_structure = FUNC_3(&VAR_7->gb, 2);
    VAR_7->top_field_first = FUNC_4(&VAR_7->gb);
    VAR_7->frame_pred_frame_dct = FUNC_4(&VAR_7->gb);
    VAR_7->concealment_motion_vectors = FUNC_4(&VAR_7->gb);
    VAR_7->q_scale_type = FUNC_4(&VAR_7->gb);
    VAR_7->intra_vlc_format = FUNC_4(&VAR_7->gb);
    VAR_7->alternate_scan = FUNC_4(&VAR_7->gb);
    VAR_7->repeat_first_field = FUNC_4(&VAR_7->gb);
    VAR_7->chroma_420_type = FUNC_4(&VAR_7->gb);
    VAR_7->progressive_frame = FUNC_4(&VAR_7->gb);

    if (VAR_7->alternate_scan) {
        FUNC_2(VAR_7->idsp.idct_permutation, &VAR_7->inter_scantable, VAR_4);
        FUNC_2(VAR_7->idsp.idct_permutation, &VAR_7->intra_scantable, VAR_4);
    } else {
        FUNC_2(VAR_7->idsp.idct_permutation, &VAR_7->inter_scantable, VAR_5);
        FUNC_2(VAR_7->idsp.idct_permutation, &VAR_7->intra_scantable, VAR_5);
    }


    FUNC_1(VAR_7->avctx, "intra_dc_precision=%d\n", VAR_7->intra_dc_precision);
    FUNC_1(VAR_7->avctx, "picture_structure=%d\n", VAR_7->picture_structure);
    FUNC_1(VAR_7->avctx, "top field first=%d\n", VAR_7->top_field_first);
    FUNC_1(VAR_7->avctx, "repeat first field=%d\n", VAR_7->repeat_first_field);
    FUNC_1(VAR_7->avctx, "conceal=%d\n", VAR_7->concealment_motion_vectors);
    FUNC_1(VAR_7->avctx, "intra_vlc_format=%d\n", VAR_7->intra_vlc_format);
    FUNC_1(VAR_7->avctx, "alternate_scan=%d\n", VAR_7->alternate_scan);
    FUNC_1(VAR_7->avctx, "frame_pred_frame_dct=%d\n", VAR_7->frame_pred_frame_dct);
    FUNC_1(VAR_7->avctx, "progressive_frame=%d\n", VAR_7->progressive_frame);
}
