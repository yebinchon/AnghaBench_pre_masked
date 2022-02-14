
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lmin; int lmax; TYPE_1__* avctx; } ;
struct TYPE_4__ {int i_quant_offset; int i_quant_factor; int b_quant_offset; int b_quant_factor; } ;
typedef TYPE_2__ MpegEncContext ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static void FUNC_3(int *VAR_1, int *VAR_2, MpegEncContext *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_3->lmin;
    int VAR_6 = VAR_3->lmax;

    FUNC_1(VAR_5 <= VAR_6);

    switch (VAR_4) {
    case 129:
        VAR_5 = (int)(VAR_5 * FUNC_0(VAR_3->avctx->b_quant_factor) + VAR_3->avctx->b_quant_offset + 0.5);
        VAR_6 = (int)(VAR_6 * FUNC_0(VAR_3->avctx->b_quant_factor) + VAR_3->avctx->b_quant_offset + 0.5);
        break;
    case 128:
        VAR_5 = (int)(VAR_5 * FUNC_0(VAR_3->avctx->i_quant_factor) + VAR_3->avctx->i_quant_offset + 0.5);
        VAR_6 = (int)(VAR_6 * FUNC_0(VAR_3->avctx->i_quant_factor) + VAR_3->avctx->i_quant_offset + 0.5);
        break;
    }

    VAR_5 = FUNC_2(VAR_5, 1, VAR_0);
    VAR_6 = FUNC_2(VAR_6, 1, VAR_0);

    if (VAR_6 < VAR_5)
        VAR_6 = VAR_5;

    *VAR_1 = VAR_5;
    *VAR_2 = VAR_6;
}
