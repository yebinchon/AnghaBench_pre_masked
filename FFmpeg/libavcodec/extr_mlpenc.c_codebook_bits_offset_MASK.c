
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_8__ {int lsb_bits; int bitcount; int max; int min; scalar_t__ offset; } ;
struct TYPE_7__ {int blocksize; scalar_t__* quant_step_size; } ;
struct TYPE_6__ {int num_channels; TYPE_2__* cur_decoding_params; scalar_t__* sample_buffer; } ;
typedef TYPE_1__ MLPEncodeContext ;
typedef TYPE_2__ DecodingParams ;
typedef TYPE_3__ BestOffset ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__*** VAR_4 ;

__attribute__((used)) static inline void FUNC_2(MLPEncodeContext *VAR_5,
                                        unsigned int VAR_6, int VAR_7,
                                        int32_t VAR_8, int32_t VAR_9,
                                        int16_t VAR_10, BestOffset *VAR_11)
{
    int32_t VAR_12 = VAR_3[VAR_7][0];
    int32_t VAR_13 = VAR_3[VAR_7][1];
    int32_t *VAR_14 = VAR_5->sample_buffer + VAR_6;
    DecodingParams *VAR_15 = VAR_5->cur_decoding_params;
    int VAR_16 = 7 + (2 - VAR_7);
    int32_t VAR_17 = VAR_10;
    int VAR_18 = 0, VAR_19 = 0;
    int VAR_20 = VAR_2, VAR_21 = VAR_2;
    int VAR_22, VAR_23;
    int VAR_24;

    VAR_8 -= VAR_10;
    VAR_9 -= VAR_10;

    while (VAR_8 < VAR_12 || VAR_9 > VAR_13) {
        VAR_18++;
        VAR_8 >>= 1;
        VAR_9 >>= 1;
    }

    VAR_22 = 1 << VAR_18;
    VAR_23 = VAR_22 - 1;

    if (VAR_7 == 2) {
        VAR_17 -= VAR_22;
        VAR_18++;
    }

    for (VAR_24 = 0; VAR_24 < VAR_15->blocksize; VAR_24++) {
        int32_t VAR_25 = *VAR_14 >> VAR_15->quant_step_size[VAR_6];
        int VAR_26, VAR_27;

        VAR_25 -= VAR_17;

        VAR_26 = VAR_25 & VAR_23;
        if (VAR_26 < VAR_20)
            VAR_20 = VAR_26;

        VAR_27 = VAR_22 - VAR_26 - 1;
        if (VAR_27 < VAR_21)
            VAR_21 = VAR_27;

        VAR_25 >>= VAR_18;

        VAR_19 += VAR_4[VAR_7][VAR_25 + VAR_16][1];

        VAR_14 += VAR_5->num_channels;
    }

    VAR_11->offset = VAR_10;
    VAR_11->lsb_bits = VAR_18;
    VAR_11->bitcount = VAR_18 * VAR_15->blocksize + VAR_19;
    VAR_11->min = FUNC_0(VAR_10 - VAR_20, VAR_1);
    VAR_11->max = FUNC_1(VAR_10 + VAR_21, VAR_0);
}
