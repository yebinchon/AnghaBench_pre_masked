
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* f; } ;
struct TYPE_9__ {int* block_index; int b8_stride; int mb_y; int mb_x; int mb_stride; int mb_height; int const chroma_x_shift; scalar_t__ pict_type; scalar_t__ picture_structure; int const chroma_y_shift; scalar_t__* dest; TYPE_3__* avctx; TYPE_2__ current_picture; } ;
struct TYPE_8__ {int bits_per_raw_sample; int lowres; scalar_t__ draw_horiz_band; } ;
struct TYPE_6__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_4__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(MpegEncContext *VAR_3){
    const int VAR_4 = VAR_3->current_picture.f->linesize[0];
    const int VAR_5 = VAR_3->current_picture.f->linesize[1];
    const int VAR_6 = (4 + (VAR_3->avctx->bits_per_raw_sample > 8)) - VAR_3->avctx->lowres;
    const int VAR_7 = 4 - VAR_3->avctx->lowres;

    VAR_3->block_index[0]= VAR_3->b8_stride*(VAR_3->mb_y*2 ) - 2 + VAR_3->mb_x*2;
    VAR_3->block_index[1]= VAR_3->b8_stride*(VAR_3->mb_y*2 ) - 1 + VAR_3->mb_x*2;
    VAR_3->block_index[2]= VAR_3->b8_stride*(VAR_3->mb_y*2 + 1) - 2 + VAR_3->mb_x*2;
    VAR_3->block_index[3]= VAR_3->b8_stride*(VAR_3->mb_y*2 + 1) - 1 + VAR_3->mb_x*2;
    VAR_3->block_index[4]= VAR_3->mb_stride*(VAR_3->mb_y + 1) + VAR_3->b8_stride*VAR_3->mb_height*2 + VAR_3->mb_x - 1;
    VAR_3->block_index[5]= VAR_3->mb_stride*(VAR_3->mb_y + VAR_3->mb_height + 2) + VAR_3->b8_stride*VAR_3->mb_height*2 + VAR_3->mb_x - 1;


    VAR_3->dest[0] = VAR_3->current_picture.f->data[0] + (int)((VAR_3->mb_x - 1U) << VAR_6);
    VAR_3->dest[1] = VAR_3->current_picture.f->data[1] + (int)((VAR_3->mb_x - 1U) << (VAR_6 - VAR_3->chroma_x_shift));
    VAR_3->dest[2] = VAR_3->current_picture.f->data[2] + (int)((VAR_3->mb_x - 1U) << (VAR_6 - VAR_3->chroma_x_shift));

    if(!(VAR_3->pict_type==VAR_0 && VAR_3->avctx->draw_horiz_band && VAR_3->picture_structure==VAR_2))
    {
        if(VAR_3->picture_structure==VAR_2){
        VAR_3->dest[0] += VAR_3->mb_y * VAR_4 << VAR_7;
        VAR_3->dest[1] += VAR_3->mb_y * VAR_5 << (VAR_7 - VAR_3->chroma_y_shift);
        VAR_3->dest[2] += VAR_3->mb_y * VAR_5 << (VAR_7 - VAR_3->chroma_y_shift);
        }else{
            VAR_3->dest[0] += (VAR_3->mb_y>>1) * VAR_4 << VAR_7;
            VAR_3->dest[1] += (VAR_3->mb_y>>1) * VAR_5 << (VAR_7 - VAR_3->chroma_y_shift);
            VAR_3->dest[2] += (VAR_3->mb_y>>1) * VAR_5 << (VAR_7 - VAR_3->chroma_y_shift);
            FUNC_0((VAR_3->mb_y&1) == (VAR_3->picture_structure == VAR_1));
        }
    }
}
