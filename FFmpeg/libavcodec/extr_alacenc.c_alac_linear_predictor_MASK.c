
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int** predictor_buf; int** sample_buf; int frame_size; int write_sample_size; TYPE_1__* lpc; } ;
struct TYPE_4__ {int lpc_order; int lpc_quant; int* lpc_coeff; } ;
typedef TYPE_1__ AlacLPCContext ;
typedef TYPE_2__ AlacEncodeContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(AlacEncodeContext *VAR_0, int VAR_1)
{
    int VAR_2;
    AlacLPCContext VAR_3 = VAR_0->lpc[VAR_1];
    int32_t *VAR_4 = VAR_0->predictor_buf[VAR_1];

    if (VAR_3.lpc_order == 31) {
        VAR_4[0] = VAR_0->sample_buf[VAR_1][0];

        for (VAR_2 = 1; VAR_2 < VAR_0->frame_size; VAR_2++) {
            VAR_4[VAR_2] = VAR_0->sample_buf[VAR_1][VAR_2 ] -
                          VAR_0->sample_buf[VAR_1][VAR_2 - 1];
        }

        return;
    }



    if (VAR_3.lpc_order > 0) {
        int32_t *VAR_5 = VAR_0->sample_buf[VAR_1];


        VAR_4[0] = VAR_5[0];
        for (VAR_2 = 1; VAR_2 <= VAR_3.lpc_order; VAR_2++)
            VAR_4[VAR_2] = FUNC_1(VAR_5[VAR_2] - VAR_5[VAR_2-1], VAR_0->write_sample_size);


        for (VAR_2 = VAR_3.lpc_order + 1; VAR_2 < VAR_0->frame_size; VAR_2++) {
            int VAR_6 = 1 << (VAR_3.lpc_quant - 1), VAR_7, VAR_8;

            for (VAR_8 = 0; VAR_8 < VAR_3.lpc_order; VAR_8++) {
                VAR_6 += (VAR_5[VAR_3.lpc_order-VAR_8] - VAR_5[0]) *
                       VAR_3.lpc_coeff[VAR_8];
            }

            VAR_6 >>= VAR_3.lpc_quant;
            VAR_6 += VAR_5[0];
            VAR_4[VAR_2] = FUNC_1(VAR_5[VAR_3.lpc_order+1] - VAR_6,
                                      VAR_0->write_sample_size);
            VAR_7 = VAR_4[VAR_2];

            if (VAR_7) {
                int VAR_9 = VAR_3.lpc_order - 1;
                int VAR_10 = (VAR_7 < 0);

                while (VAR_9 >= 0 && (VAR_10 ? (VAR_7 < 0) : (VAR_7 > 0))) {
                    int VAR_11 = VAR_5[0] - VAR_5[VAR_3.lpc_order - VAR_9];
                    int VAR_12 = (VAR_11 ? FUNC_0(VAR_11) : 0);

                    if (VAR_10)
                        VAR_12 *= -1;

                    VAR_3.lpc_coeff[VAR_9] -= VAR_12;
                    VAR_11 *= VAR_12;
                    VAR_7 -= (VAR_11 >> VAR_3.lpc_quant) * (VAR_3.lpc_order - VAR_9);
                    VAR_9--;
                }
            }
            VAR_5++;
        }
    }
}
