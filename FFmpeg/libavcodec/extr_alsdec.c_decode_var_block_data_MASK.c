
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_8__ {unsigned int block_length; int* opt_order; int* quant_cof; int* lpc_cof; int* raw_samples; int* ltp_lag; int* ltp_gain; int* prev_raw_samples; int* raw_other; int* shift_lsbs; scalar_t__* store_prev_samples; scalar_t__ js_blocks; scalar_t__ ra_block; scalar_t__* use_ltp; } ;
struct TYPE_6__ {int max_order; } ;
struct TYPE_7__ {int* lpc_cof_reversed_buffer; TYPE_1__ sconf; } ;
typedef TYPE_1__ ALSSpecificConfig ;
typedef TYPE_2__ ALSDecContext ;
typedef TYPE_3__ ALSBlockData ;


 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (unsigned int,int*,int*) ;

__attribute__((used)) static int FUNC_5(ALSDecContext *VAR_0, ALSBlockData *VAR_1)
{
    ALSSpecificConfig *VAR_2 = &VAR_0->sconf;
    unsigned int VAR_3 = VAR_1->block_length;
    unsigned int VAR_4 = 0;
    unsigned int VAR_5;
    int VAR_6 = *VAR_1->opt_order;
    int VAR_7;
    int64_t VAR_8;
    int32_t *VAR_9 = VAR_1->quant_cof;
    int32_t *VAR_10 = VAR_1->lpc_cof;
    int32_t *VAR_11 = VAR_1->raw_samples;
    int32_t *VAR_12 = VAR_1->raw_samples + VAR_1->block_length;
    int32_t *VAR_13 = VAR_0->lpc_cof_reversed_buffer;


    if (*VAR_1->use_ltp) {
        int VAR_14;

        for (VAR_14 = FUNC_0(*VAR_1->ltp_lag - 2, 0); VAR_14 < VAR_3; VAR_14++) {
            int VAR_15 = VAR_14 - *VAR_1->ltp_lag;
            int VAR_16 = FUNC_0(0, VAR_15 - 2);
            int VAR_17 = VAR_15 + 3;
            int VAR_18 = 5 - (VAR_17 - VAR_16);
            int VAR_19;

            VAR_8 = 1 << 6;

            for (VAR_19 = VAR_16; VAR_19 < VAR_17; VAR_19++, VAR_18++)
                VAR_8 += (uint64_t)FUNC_2(VAR_1->ltp_gain[VAR_18], VAR_11[VAR_19]);

            VAR_11[VAR_14] += VAR_8 >> 7;
        }
    }


    if (VAR_1->ra_block) {
        for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_6, VAR_3); VAR_4++) {
            VAR_8 = 1 << 19;

            for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
                VAR_8 += (uint64_t)FUNC_2(VAR_10[VAR_7], VAR_11[-(VAR_7 + 1)]);

            *VAR_11++ -= VAR_8 >> 20;
            FUNC_4(VAR_4, VAR_9, VAR_10);
        }
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
            FUNC_4(VAR_5, VAR_9, VAR_10);


        if (*VAR_1->store_prev_samples)
            FUNC_3(VAR_1->prev_raw_samples, VAR_11 - VAR_2->max_order,
                   sizeof(*VAR_1->prev_raw_samples) * VAR_2->max_order);


        if (VAR_1->js_blocks && VAR_1->raw_other) {
            uint32_t *VAR_20, *VAR_21;

            if (VAR_1->raw_other > VAR_11) {
                VAR_20 = VAR_11;
                VAR_21 = VAR_1->raw_other;
            } else {
                VAR_20 = VAR_1->raw_other;
                VAR_21 = VAR_11;
            }

            for (VAR_7 = -1; VAR_7 >= -VAR_2->max_order; VAR_7--)
                VAR_11[VAR_7] = VAR_21[VAR_7] - VAR_20[VAR_7];
        }


        if (*VAR_1->shift_lsbs)
            for (VAR_7 = -1; VAR_7 >= -VAR_2->max_order; VAR_7--)
                VAR_11[VAR_7] >>= *VAR_1->shift_lsbs;
    }


    VAR_10 = VAR_10 + VAR_6;

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        VAR_13[VAR_7] = VAR_10[-(VAR_7 + 1)];


    VAR_11 = VAR_1->raw_samples + VAR_4;
    VAR_10 = VAR_13 + VAR_6;

    for (; VAR_11 < VAR_12; VAR_11++) {
        VAR_8 = 1 << 19;

        for (VAR_7 = -VAR_6; VAR_7 < 0; VAR_7++)
            VAR_8 += (uint64_t)FUNC_2(VAR_10[VAR_7], VAR_11[VAR_7]);

        *VAR_11 -= VAR_8 >> 20;
    }

    VAR_11 = VAR_1->raw_samples;


    if (*VAR_1->store_prev_samples)
        FUNC_3(VAR_11 - VAR_2->max_order, VAR_1->prev_raw_samples,
               sizeof(*VAR_11) * VAR_2->max_order);

    return 0;
}
