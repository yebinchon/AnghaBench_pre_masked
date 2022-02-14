
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* f; } ;
struct TYPE_9__ {scalar_t__ pict_type; scalar_t__ picture_structure; scalar_t__ codec_id; scalar_t__ out_format; scalar_t__ encoding; scalar_t__ noise_reduction; scalar_t__ dct_error_sum; int dct_unquantize_mpeg1_inter; int dct_unquantize_inter; int dct_unquantize_mpeg1_intra; int dct_unquantize_intra; int dct_unquantize_h263_inter; int dct_unquantize_h263_intra; int dct_unquantize_mpeg2_inter; int dct_unquantize_mpeg2_intra; scalar_t__ mpeg_quant; TYPE_5__ next_picture; TYPE_5__ last_picture; TYPE_5__ current_picture; TYPE_5__* next_picture_ptr; int avctx; TYPE_5__* last_picture_ptr; TYPE_5__* current_picture_ptr; int droppable; } ;
struct TYPE_8__ {scalar_t__ pict_type; int key_frame; int* data; int* linesize; scalar_t__* buf; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(MpegEncContext *VAR_7)
{
    int VAR_8;


    if (VAR_7->pict_type != VAR_1 && VAR_7->last_picture_ptr &&
        VAR_7->last_picture_ptr != VAR_7->next_picture_ptr &&
        VAR_7->last_picture_ptr->f->buf[0]) {
        FUNC_2(VAR_7->avctx, VAR_7->last_picture_ptr);
    }

    VAR_7->current_picture_ptr->f->pict_type = VAR_7->pict_type;
    VAR_7->current_picture_ptr->f->key_frame = VAR_7->pict_type == VAR_2;

    FUNC_2(VAR_7->avctx, &VAR_7->current_picture);
    if ((VAR_8 = FUNC_1(VAR_7->avctx, &VAR_7->current_picture,
                                   VAR_7->current_picture_ptr)) < 0)
        return VAR_8;

    if (VAR_7->pict_type != VAR_1) {
        VAR_7->last_picture_ptr = VAR_7->next_picture_ptr;
        if (!VAR_7->droppable)
            VAR_7->next_picture_ptr = VAR_7->current_picture_ptr;
    }

    if (VAR_7->last_picture_ptr) {
        FUNC_2(VAR_7->avctx, &VAR_7->last_picture);
        if (VAR_7->last_picture_ptr->f->buf[0] &&
            (VAR_8 = FUNC_1(VAR_7->avctx, &VAR_7->last_picture,
                                       VAR_7->last_picture_ptr)) < 0)
            return VAR_8;
    }
    if (VAR_7->next_picture_ptr) {
        FUNC_2(VAR_7->avctx, &VAR_7->next_picture);
        if (VAR_7->next_picture_ptr->f->buf[0] &&
            (VAR_8 = FUNC_1(VAR_7->avctx, &VAR_7->next_picture,
                                       VAR_7->next_picture_ptr)) < 0)
            return VAR_8;
    }

    if (VAR_7->picture_structure!= VAR_6) {
        int VAR_9;
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            if (VAR_7->picture_structure == VAR_5) {
                VAR_7->current_picture.f->data[VAR_9] +=
                    VAR_7->current_picture.f->linesize[VAR_9];
            }
            VAR_7->current_picture.f->linesize[VAR_9] *= 2;
            VAR_7->last_picture.f->linesize[VAR_9] *= 2;
            VAR_7->next_picture.f->linesize[VAR_9] *= 2;
        }
    }

    if (VAR_7->mpeg_quant || VAR_7->codec_id == VAR_0) {
        VAR_7->dct_unquantize_intra = VAR_7->dct_unquantize_mpeg2_intra;
        VAR_7->dct_unquantize_inter = VAR_7->dct_unquantize_mpeg2_inter;
    } else if (VAR_7->out_format == VAR_4 || VAR_7->out_format == VAR_3) {
        VAR_7->dct_unquantize_intra = VAR_7->dct_unquantize_h263_intra;
        VAR_7->dct_unquantize_inter = VAR_7->dct_unquantize_h263_inter;
    } else {
        VAR_7->dct_unquantize_intra = VAR_7->dct_unquantize_mpeg1_intra;
        VAR_7->dct_unquantize_inter = VAR_7->dct_unquantize_mpeg1_inter;
    }

    if (VAR_7->dct_error_sum) {
        FUNC_0(VAR_7->noise_reduction && VAR_7->encoding);
        FUNC_3(VAR_7);
    }

    return 0;
}
