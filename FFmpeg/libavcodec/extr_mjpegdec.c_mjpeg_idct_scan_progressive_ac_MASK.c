
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int lowres; } ;
struct TYPE_8__ {int (* idct_put ) (int *,int,int ) ;} ;
struct TYPE_9__ {int bits; int nb_components; int* linesize; int h_max; int* h_count; int v_max; int* v_count; int width; int height; int* coefs_finished; int* block_stride; TYPE_6__* avctx; TYPE_2__ idsp; int ** blocks; scalar_t__ bottom_field; scalar_t__ interlaced; TYPE_1__* picture_ptr; scalar_t__ lossless; } ;
struct TYPE_7__ {int ** data; } ;
typedef TYPE_3__ MJpegDecodeContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,char*,int) ;
 int * VAR_1 ;
 int ** FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void FUNC_4(MJpegDecodeContext *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5;
    const int VAR_6 = 1 + (VAR_2->bits > 8);
    const int VAR_7 = VAR_2->lossless ? 1 : 8;

    for (VAR_5 = 0; VAR_5 < VAR_2->nb_components; VAR_5++) {
        uint8_t *VAR_8 = VAR_2->picture_ptr->data[VAR_5];
        int VAR_9 = VAR_2->linesize[VAR_5];
        int VAR_10 = VAR_2->h_max / VAR_2->h_count[VAR_5];
        int VAR_11 = VAR_2->v_max / VAR_2->v_count[VAR_5];
        int VAR_12 = (VAR_2->width + VAR_10 * VAR_7 - 1) / (VAR_10 * VAR_7);
        int VAR_13 = (VAR_2->height + VAR_11 * VAR_7 - 1) / (VAR_11 * VAR_7);

        if (~VAR_2->coefs_finished[VAR_5])
            FUNC_0(VAR_2->avctx, VAR_0, "component %d is incomplete\n", VAR_5);

        if (VAR_2->interlaced && VAR_2->bottom_field)
            VAR_8 += VAR_9 >> 1;

        for (VAR_4 = 0; VAR_4 < VAR_13; VAR_4++) {
            uint8_t *VAR_14 = VAR_8 + (VAR_4 * VAR_9 * 8 >> VAR_2->avctx->lowres);
            int VAR_15 = VAR_4 * VAR_2->block_stride[VAR_5];
            FUNC_1 (*VAR_1)[64] = &VAR_2->blocks[VAR_5][VAR_15];
            for (VAR_3 = 0; VAR_3 < VAR_12; VAR_3++, VAR_1++) {
                VAR_2->idsp.idct_put(VAR_14, VAR_9, *VAR_1);
                if (VAR_2->bits & 7)
                    FUNC_2(VAR_2, VAR_14, VAR_9);
                VAR_14 += VAR_6*8 >> VAR_2->avctx->lowres;
            }
        }
    }
}
