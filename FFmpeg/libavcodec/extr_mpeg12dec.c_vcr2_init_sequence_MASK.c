
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int pix_fmt; scalar_t__ has_b_frames; int coded_height; int coded_width; TYPE_4__* priv_data; } ;
struct TYPE_12__ {int* idct_permutation; } ;
struct TYPE_14__ {int low_delay; int* intra_matrix; int* chroma_intra_matrix; int* inter_matrix; int* chroma_inter_matrix; int progressive_sequence; int progressive_frame; int frame_pred_frame_dct; int chroma_format; scalar_t__ codec_tag; int swap_uv; int height; int width; TYPE_2__* avctx; int codec_id; scalar_t__ first_field; int picture_structure; TYPE_1__ idsp; int out_format; } ;
struct TYPE_15__ {int mpeg_enc_ctx_allocated; int save_progressive_seq; int save_height; int save_width; TYPE_3__ mpeg_enc_ctx; } ;
struct TYPE_13__ {int codec_id; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ Mpeg1Context ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_6)
{
    Mpeg1Context *VAR_7 = VAR_6->priv_data;
    MpegEncContext *VAR_8 = &VAR_7->mpeg_enc_ctx;
    int VAR_9, VAR_10, VAR_11;


    VAR_8->out_format = VAR_2;
    if (VAR_7->mpeg_enc_ctx_allocated) {
        FUNC_1(VAR_8);
        VAR_7->mpeg_enc_ctx_allocated = 0;
    }
    VAR_8->width = VAR_6->coded_width;
    VAR_8->height = VAR_6->coded_height;
    VAR_6->has_b_frames = 0;
    VAR_8->low_delay = 1;

    VAR_6->pix_fmt = FUNC_4(VAR_6);
    FUNC_5(VAR_6);

    FUNC_3(VAR_8);
    if ((VAR_11 = FUNC_2(VAR_8)) < 0)
        return VAR_11;
    VAR_7->mpeg_enc_ctx_allocated = 1;

    for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
        int VAR_12 = VAR_8->idsp.idct_permutation[VAR_9];
        VAR_10 = VAR_4[VAR_9];
        VAR_8->intra_matrix[VAR_12] = VAR_10;
        VAR_8->chroma_intra_matrix[VAR_12] = VAR_10;

        VAR_10 = VAR_5[VAR_9];
        VAR_8->inter_matrix[VAR_12] = VAR_10;
        VAR_8->chroma_inter_matrix[VAR_12] = VAR_10;
    }

    VAR_8->progressive_sequence = 1;
    VAR_8->progressive_frame = 1;
    VAR_8->picture_structure = VAR_3;
    VAR_8->first_field = 0;
    VAR_8->frame_pred_frame_dct = 1;
    VAR_8->chroma_format = 1;
    if (VAR_8->codec_tag == FUNC_0("BW10")) {
        VAR_8->codec_id = VAR_8->avctx->codec_id = VAR_0;
    } else {
        VAR_8->swap_uv = 1;
        VAR_8->codec_id = VAR_8->avctx->codec_id = VAR_1;
    }
    VAR_7->save_width = VAR_8->width;
    VAR_7->save_height = VAR_8->height;
    VAR_7->save_progressive_seq = VAR_8->progressive_sequence;
    return 0;
}
