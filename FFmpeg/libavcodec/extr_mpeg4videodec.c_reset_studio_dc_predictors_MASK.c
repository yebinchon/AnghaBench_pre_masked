
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* last_dc; int dct_precision; int intra_dc_precision; TYPE_1__* avctx; } ;
struct TYPE_4__ {int bits_per_raw_sample; } ;
typedef TYPE_2__ MpegEncContext ;



__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_0)
{

    VAR_0->last_dc[0] =
    VAR_0->last_dc[1] =
    VAR_0->last_dc[2] = 1 << (VAR_0->avctx->bits_per_raw_sample + VAR_0->dct_precision + VAR_0->intra_dc_precision - 1);
}
