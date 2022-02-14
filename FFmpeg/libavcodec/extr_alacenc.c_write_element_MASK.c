
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef enum AlacRawDataBlockType { ____Placeholder_AlacRawDataBlockType } AlacRawDataBlockType ;
struct TYPE_13__ {int rice_modifier; } ;
struct TYPE_15__ {int frame_size; int extra_bits; int** predictor_buf; int** sample_buf; int interlacing_shift; int interlacing_leftweight; TYPE_3__* lpc; TYPE_2__ rc; TYPE_1__* avctx; scalar_t__ write_sample_size; scalar_t__ verbatim; int pbctx; } ;
struct TYPE_14__ {int lpc_quant; int lpc_order; int const* lpc_coeff; } ;
struct TYPE_12__ {scalar_t__ sample_fmt; int bits_per_raw_sample; } ;
typedef int PutBitContext ;
typedef TYPE_4__ AlacEncodeContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int,int const**) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int const) ;
 int FUNC_7 (TYPE_4__*,int,int) ;

__attribute__((used)) static void FUNC_8(AlacEncodeContext *VAR_2,
                          enum AlacRawDataBlockType VAR_3, int VAR_4,
                          const uint8_t *VAR_5, const uint8_t *VAR_6)
{
    const uint8_t *VAR_7[2] = { VAR_5, VAR_6 };
    int VAR_8, VAR_9, VAR_10;
    int VAR_11 = 0;
    PutBitContext *VAR_12 = &VAR_2->pbctx;

    VAR_10 = VAR_3 == VAR_1 ? 2 : 1;

    if (VAR_2->verbatim) {
        FUNC_7(VAR_2, VAR_3, VAR_4);

        if (VAR_2->avctx->sample_fmt == VAR_0) {
            int VAR_13 = 32 - VAR_2->avctx->bits_per_raw_sample;
            const int32_t *VAR_14[2] = { (const int32_t *)VAR_5,
                                              (const int32_t *)VAR_6 };
            for (VAR_8 = 0; VAR_8 < VAR_2->frame_size; VAR_8++)
                for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
                    FUNC_6(VAR_12, VAR_2->avctx->bits_per_raw_sample,
                              VAR_14[VAR_9][VAR_8] >> VAR_13);
        } else {
            const int16_t *VAR_15[2] = { (const int16_t *)VAR_5,
                                              (const int16_t *)VAR_6 };
            for (VAR_8 = 0; VAR_8 < VAR_2->frame_size; VAR_8++)
                for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
                    FUNC_6(VAR_12, VAR_2->avctx->bits_per_raw_sample,
                              VAR_15[VAR_9][VAR_8]);
        }
    } else {
        VAR_2->write_sample_size = VAR_2->avctx->bits_per_raw_sample - VAR_2->extra_bits +
                               VAR_10 - 1;

        FUNC_4(VAR_2, VAR_10, VAR_7);
        FUNC_7(VAR_2, VAR_3, VAR_4);


        if (VAR_2->extra_bits) {
            uint32_t VAR_16 = (1 << VAR_2->extra_bits) - 1;
            for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
                int32_t *VAR_17 = VAR_2->predictor_buf[VAR_9];
                int32_t *VAR_18 = VAR_2->sample_buf[VAR_9];
                for (VAR_8 = 0; VAR_8 < VAR_2->frame_size; VAR_8++) {
                    VAR_17[VAR_8] = VAR_18[VAR_8] & VAR_16;
                    VAR_18[VAR_8] >>= VAR_2->extra_bits;
                }
            }
        }

        if (VAR_10 == 2)
            FUNC_2(VAR_2);
        else
            VAR_2->interlacing_shift = VAR_2->interlacing_leftweight = 0;
        FUNC_5(VAR_12, 8, VAR_2->interlacing_shift);
        FUNC_5(VAR_12, 8, VAR_2->interlacing_leftweight);

        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            FUNC_3(VAR_2, VAR_8);

            FUNC_5(VAR_12, 4, VAR_11);
            FUNC_5(VAR_12, 4, VAR_2->lpc[VAR_8].lpc_quant);

            FUNC_5(VAR_12, 3, VAR_2->rc.rice_modifier);
            FUNC_5(VAR_12, 5, VAR_2->lpc[VAR_8].lpc_order);

            for (VAR_9 = 0; VAR_9 < VAR_2->lpc[VAR_8].lpc_order; VAR_9++)
                FUNC_6(VAR_12, 16, VAR_2->lpc[VAR_8].lpc_coeff[VAR_9]);
        }


        if (VAR_2->extra_bits) {
            for (VAR_8 = 0; VAR_8 < VAR_2->frame_size; VAR_8++) {
                for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
                    FUNC_5(VAR_12, VAR_2->extra_bits, VAR_2->predictor_buf[VAR_9][VAR_8]);
                }
            }
        }


        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            FUNC_1(VAR_2, VAR_8);


            if (VAR_11 == 15) {

                int32_t *VAR_19 = VAR_2->predictor_buf[VAR_8];
                for (VAR_9 = VAR_2->frame_size - 1; VAR_9 > 0; VAR_9--)
                    VAR_19[VAR_9] -= VAR_19[VAR_9 - 1];
            }
            FUNC_0(VAR_2, VAR_8);
        }
    }
}
