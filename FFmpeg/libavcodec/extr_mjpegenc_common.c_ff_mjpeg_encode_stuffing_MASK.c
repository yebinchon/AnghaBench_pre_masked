
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int active_thread_type; } ;
struct TYPE_10__ {int uni_chroma_ac_vlc_len; int uni_ac_vlc_len; int huff_size_ac_chrominance; int huff_size_ac_luminance; } ;
struct TYPE_9__ {int mb_y; scalar_t__ huffman; int esc_pos; int mb_height; int* last_dc; int intra_dc_precision; TYPE_5__* avctx; int pb; int chroma_intra_matrix; int intra_matrix; int pred; int intra_scantable; int intra_chroma_ac_vlc_last_length; int intra_chroma_ac_vlc_length; int intra_ac_vlc_last_length; int intra_ac_vlc_length; TYPE_2__* mjpeg_ctx; int mb_x; } ;
typedef int PutBitContext ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ MJpegContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_5__*,int *,int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;

int FUNC_9(MpegEncContext *VAR_4)
{
    int VAR_5;
    PutBitContext *VAR_6 = &VAR_4->pb;
    int VAR_7 = VAR_4->mb_y - !VAR_4->mb_x;
    int VAR_8;
    MJpegContext *VAR_9;

    VAR_9 = VAR_4->mjpeg_ctx;

    if (VAR_4->huffman == VAR_2) {
        FUNC_2(VAR_9);



        FUNC_1(VAR_9->huff_size_ac_luminance, VAR_9->uni_ac_vlc_len);
        FUNC_1(VAR_9->huff_size_ac_chrominance, VAR_9->uni_chroma_ac_vlc_len);
        VAR_4->intra_ac_vlc_length =
        VAR_4->intra_ac_vlc_last_length = VAR_9->uni_ac_vlc_len;
        VAR_4->intra_chroma_ac_vlc_length =
        VAR_4->intra_chroma_ac_vlc_last_length = VAR_9->uni_chroma_ac_vlc_len;

        FUNC_4(VAR_4->avctx, &VAR_4->pb, &VAR_4->intra_scantable,
                                       VAR_4->pred, VAR_4->intra_matrix, VAR_4->chroma_intra_matrix);
        FUNC_3(VAR_4);
    }

    VAR_8 = FUNC_6(VAR_4, FUNC_7(&VAR_4->pb) / 8 + 100,
                                            FUNC_7(&VAR_4->pb) / 4 + 1000);

    if (VAR_8 < 0) {
        FUNC_0(VAR_4->avctx, VAR_0, "Buffer reallocation failed\n");
        goto fail;
    }

    FUNC_5(VAR_6, VAR_4->esc_pos);

    if((VAR_4->avctx->active_thread_type & VAR_1) && VAR_7 < VAR_4->mb_height)
        FUNC_8(VAR_6, VAR_3 + (VAR_7&7));
    VAR_4->esc_pos = FUNC_7(VAR_6) >> 3;
fail:

    for(VAR_5=0; VAR_5<3; VAR_5++)
        VAR_4->last_dc[VAR_5] = 128 << VAR_4->intra_dc_precision;

    return VAR_8;
}
