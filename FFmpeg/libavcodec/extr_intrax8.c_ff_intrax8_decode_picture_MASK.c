
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int dquant; int quant; int qsum; int loopfilter; int mb_x; int mb_y; int divide_quant_dc_luma; int quant_dc_chroma; int divide_quant_dc_chroma; int mb_height; int mb_width; int* dest; int frame; int avctx; int * gb; int use_quant_matrix; } ;
struct TYPE_11__ {int* qscale_table; int f; } ;
typedef TYPE_1__ Picture ;
typedef TYPE_2__ IntraX8Context ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;

int FUNC_8(IntraX8Context *VAR_1, Picture *VAR_2,
                              GetBitContext *VAR_3, int *VAR_4, int *VAR_5,
                              int VAR_6, int VAR_7,
                              int VAR_8, int VAR_9)
{
    int VAR_10;

    VAR_1->gb = VAR_3;
    VAR_1->dquant = VAR_6;
    VAR_1->quant = VAR_6 >> 1;
    VAR_1->qsum = VAR_7;
    VAR_1->frame = VAR_2->f;
    VAR_1->loopfilter = VAR_8;
    VAR_1->use_quant_matrix = FUNC_1(VAR_1->gb);

    VAR_1->mb_x = *VAR_4;
    VAR_1->mb_y = *VAR_5;

    VAR_1->divide_quant_dc_luma = ((1 << 16) + (VAR_1->quant >> 1)) / VAR_1->quant;
    if (VAR_1->quant < 5) {
        VAR_1->quant_dc_chroma = VAR_1->quant;
        VAR_1->divide_quant_dc_chroma = VAR_1->divide_quant_dc_luma;
    } else {
        VAR_1->quant_dc_chroma = VAR_1->quant + ((VAR_1->quant + 3) >> 3);
        VAR_1->divide_quant_dc_chroma = ((1 << 16) + (VAR_1->quant_dc_chroma >> 1)) / VAR_1->quant_dc_chroma;
    }
    FUNC_6(VAR_1);

    for (VAR_1->mb_y = 0; VAR_1->mb_y < VAR_1->mb_height * 2; VAR_1->mb_y++) {
        FUNC_5(VAR_1, VAR_1->frame);
        VAR_10 = (VAR_1->mb_y >> 1) * (VAR_1->mb_width + 1);
        for (VAR_1->mb_x = 0; VAR_1->mb_x < VAR_1->mb_width * 2; VAR_1->mb_x++) {
            FUNC_3(VAR_1);
            if (FUNC_7(VAR_1, 0))
                goto error;
            if (FUNC_2(VAR_1, 0))
                goto error;

            if (VAR_1->mb_x & VAR_1->mb_y & 1) {
                FUNC_4(VAR_1);



                FUNC_7(VAR_1, 1);
                if (FUNC_2(VAR_1, 1))
                    goto error;

                FUNC_7(VAR_1, 2);
                if (FUNC_2(VAR_1, 2))
                    goto error;

                VAR_1->dest[1] += 8;
                VAR_1->dest[2] += 8;

                VAR_2->qscale_table[VAR_10] = VAR_1->quant;
                VAR_10++;
            }
            VAR_1->dest[0] += 8;
        }
        if (VAR_1->mb_y & 1)
            FUNC_0(VAR_1->avctx, VAR_1->frame, VAR_1->frame,
                               (VAR_1->mb_y - 1) * 8, 16,
                               VAR_0, 0, VAR_9);
    }

error:
    *VAR_4 = VAR_1->mb_x;
    *VAR_5 = VAR_1->mb_y;

    return 0;
}
