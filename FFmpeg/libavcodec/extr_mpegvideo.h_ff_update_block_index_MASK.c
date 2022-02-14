
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* dest; int chroma_x_shift; scalar_t__* block_index; TYPE_1__* avctx; } ;
struct TYPE_4__ {int bits_per_raw_sample; int lowres; } ;
typedef TYPE_2__ MpegEncContext ;



__attribute__((used)) static inline void FUNC_0(MpegEncContext *VAR_0){
    const int VAR_1 = 1 + (VAR_0->avctx->bits_per_raw_sample > 8);
    const int VAR_2= (8*VAR_1) >> VAR_0->avctx->lowres;

    VAR_0->block_index[0]+=2;
    VAR_0->block_index[1]+=2;
    VAR_0->block_index[2]+=2;
    VAR_0->block_index[3]+=2;
    VAR_0->block_index[4]++;
    VAR_0->block_index[5]++;
    VAR_0->dest[0]+= 2*VAR_2;
    VAR_0->dest[1]+= (2 >> VAR_0->chroma_x_shift) * VAR_2;
    VAR_0->dest[2]+= (2 >> VAR_0->chroma_x_shift) * VAR_2;
}
