
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* put_pixels_clamped ) (int *,scalar_t__,int) ;} ;
struct TYPE_8__ {TYPE_2__* pic; int * block; TYPE_1__ idsp; int chroma_dc_quant; int * left_dc; int * top_dc; int ac_quant; int luma_dc_quant; int gb; } ;
struct TYPE_7__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_3__ CLVContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(CLVContext *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5[6], VAR_6;

    for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
        VAR_5[VAR_4] = FUNC_2(&VAR_1->gb);

    VAR_6 = VAR_2 * 16 + VAR_3 * 16 * VAR_1->pic->linesize[0];
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (FUNC_1(VAR_1, VAR_1->block, VAR_5[VAR_4], VAR_1->ac_quant) < 0)
            return VAR_0;
        if (!VAR_2 && !(VAR_4 & 1)) {
            VAR_1->block[0] += VAR_1->top_dc[0];
            VAR_1->top_dc[0] = VAR_1->block[0];
        } else {
            VAR_1->block[0] += VAR_1->left_dc[(VAR_4 & 2) >> 1];
        }
        VAR_1->left_dc[(VAR_4 & 2) >> 1] = VAR_1->block[0];
        VAR_1->block[0] *= VAR_1->luma_dc_quant;
        FUNC_0(VAR_1->block);
        if (VAR_4 == 2)
            VAR_6 += VAR_1->pic->linesize[0] * 8;
        VAR_1->idsp.put_pixels_clamped(VAR_1->block,
                                   VAR_1->pic->data[0] + VAR_6 + (VAR_4 & 1) * 8,
                                   VAR_1->pic->linesize[0]);
    }

    VAR_6 = VAR_2 * 8 + VAR_3 * 8 * VAR_1->pic->linesize[1];
    for (VAR_4 = 1; VAR_4 < 3; VAR_4++) {
        if (FUNC_1(VAR_1, VAR_1->block, VAR_5[VAR_4 + 3], VAR_1->ac_quant) < 0)
            return VAR_0;
        if (!VAR_2) {
            VAR_1->block[0] += VAR_1->top_dc[VAR_4];
            VAR_1->top_dc[VAR_4] = VAR_1->block[0];
        } else {
            VAR_1->block[0] += VAR_1->left_dc[VAR_4 + 1];
        }
        VAR_1->left_dc[VAR_4 + 1] = VAR_1->block[0];
        VAR_1->block[0] *= VAR_1->chroma_dc_quant;
        FUNC_0(VAR_1->block);
        VAR_1->idsp.put_pixels_clamped(VAR_1->block, VAR_1->pic->data[VAR_4] + VAR_6,
                                   VAR_1->pic->linesize[VAR_4]);
    }

    return 0;
}
