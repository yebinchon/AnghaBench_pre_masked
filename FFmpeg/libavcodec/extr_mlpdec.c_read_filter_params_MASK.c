
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int order; int* state; void* shift; } ;
struct TYPE_8__ {int avctx; int ** filter_changed; TYPE_2__* substream; } ;
struct TYPE_7__ {TYPE_1__* channel_params; } ;
struct TYPE_6__ {int** coeff; TYPE_4__* filter_params; } ;
typedef TYPE_2__ SubStream ;
typedef TYPE_3__ MLPDecodeContext ;
typedef int GetBitContext ;
typedef TYPE_4__ FilterParams ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(MLPDecodeContext *VAR_5, GetBitContext *VAR_6,
                              unsigned int VAR_7, unsigned int VAR_8,
                              unsigned int VAR_9)
{
    SubStream *VAR_10 = &VAR_5->substream[VAR_7];
    FilterParams *VAR_11 = &VAR_10->channel_params[VAR_8].filter_params[VAR_9];
    const int VAR_12 = VAR_9 ? VAR_4 : VAR_3;
    const char VAR_13 = VAR_9 ? 'I' : 'F';
    int VAR_14, VAR_15;


    FUNC_0(VAR_9 < 2);

    if (VAR_5->filter_changed[VAR_8][VAR_9]++ > 1) {
        FUNC_1(VAR_5->avctx, VAR_1, "Filters may change only once per access unit.\n");
        return VAR_0;
    }

    VAR_15 = FUNC_2(VAR_6, 4);
    if (VAR_15 > VAR_12) {
        FUNC_1(VAR_5->avctx, VAR_1,
               "%cIR filter order %d is greater than maximum %d.\n",
               VAR_13, VAR_15, VAR_12);
        return VAR_0;
    }
    VAR_11->order = VAR_15;

    if (VAR_15 > 0) {
        int32_t *VAR_16 = VAR_10->channel_params[VAR_8].coeff[VAR_9];
        int VAR_17, VAR_18;

        VAR_11->shift = FUNC_2(VAR_6, 4);

        VAR_17 = FUNC_2(VAR_6, 5);
        VAR_18 = FUNC_2(VAR_6, 3);
        if (VAR_17 < 1 || VAR_17 > 16) {
            FUNC_1(VAR_5->avctx, VAR_1,
                   "%cIR filter coeff_bits must be between 1 and 16.\n",
                   VAR_13);
            return VAR_0;
        }
        if (VAR_17 + VAR_18 > 16) {
            FUNC_1(VAR_5->avctx, VAR_1,
                   "Sum of coeff_bits and coeff_shift for %cIR filter must be 16 or less.\n",
                   VAR_13);
            return VAR_0;
        }

        for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
            VAR_16[VAR_14] = FUNC_4(VAR_6, VAR_17) * (1 << VAR_18);

        if (FUNC_3(VAR_6)) {
            int VAR_19, VAR_20;

            if (VAR_9 == VAR_2) {
                FUNC_1(VAR_5->avctx, VAR_1,
                       "FIR filter has state data specified.\n");
                return VAR_0;
            }

            VAR_19 = FUNC_2(VAR_6, 4);
            VAR_20 = FUNC_2(VAR_6, 4);



            for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
                VAR_11->state[VAR_14] = VAR_19 ? FUNC_4(VAR_6, VAR_19) * (1 << VAR_20) : 0;
        }
    }

    return 0;
}
