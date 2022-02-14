
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int yac_qi; int ydc_delta; int y2dc_delta; int y2ac_delta; int uvdc_delta; int uvac_delta; } ;
struct TYPE_6__ {int* base_quant; int absolute_vals; scalar_t__ enabled; } ;
struct TYPE_9__ {TYPE_3__* qmat; TYPE_2__ quant; TYPE_1__ segmentation; int c; } ;
typedef TYPE_4__ VP8Context ;
typedef int VP56RangeCoder ;
struct TYPE_8__ {int* luma_qmul; int* luma_dc_qmul; int* chroma_qmul; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 size_t FUNC_2 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(VP8Context *VAR_2)
{
    VP56RangeCoder *VAR_3 = &VAR_2->c;
    int VAR_4, VAR_5;

    VAR_2->quant.yac_qi = FUNC_4(VAR_3, 7);
    VAR_2->quant.ydc_delta = FUNC_3(VAR_3, 4);
    VAR_2->quant.y2dc_delta = FUNC_3(VAR_3, 4);
    VAR_2->quant.y2ac_delta = FUNC_3(VAR_3, 4);
    VAR_2->quant.uvdc_delta = FUNC_3(VAR_3, 4);
    VAR_2->quant.uvac_delta = FUNC_3(VAR_3, 4);

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (VAR_2->segmentation.enabled) {
            VAR_5 = VAR_2->segmentation.base_quant[VAR_4];
            if (!VAR_2->segmentation.absolute_vals)
                VAR_5 += VAR_2->quant.yac_qi;
        } else
            VAR_5 = VAR_2->quant.yac_qi;

        VAR_2->qmat[VAR_4].luma_qmul[0] = VAR_1[FUNC_2(VAR_5 + VAR_2->quant.ydc_delta, 7)];
        VAR_2->qmat[VAR_4].luma_qmul[1] = VAR_0[FUNC_2(VAR_5, 7)];
        VAR_2->qmat[VAR_4].luma_dc_qmul[0] = VAR_1[FUNC_2(VAR_5 + VAR_2->quant.y2dc_delta, 7)] * 2;

        VAR_2->qmat[VAR_4].luma_dc_qmul[1] = VAR_0[FUNC_2(VAR_5 + VAR_2->quant.y2ac_delta, 7)] * 101581 >> 16;
        VAR_2->qmat[VAR_4].chroma_qmul[0] = VAR_1[FUNC_2(VAR_5 + VAR_2->quant.uvdc_delta, 7)];
        VAR_2->qmat[VAR_4].chroma_qmul[1] = VAR_0[FUNC_2(VAR_5 + VAR_2->quant.uvac_delta, 7)];

        VAR_2->qmat[VAR_4].luma_dc_qmul[1] = FUNC_0(VAR_2->qmat[VAR_4].luma_dc_qmul[1], 8);
        VAR_2->qmat[VAR_4].chroma_qmul[0] = FUNC_1(VAR_2->qmat[VAR_4].chroma_qmul[0], 132);
    }
}
