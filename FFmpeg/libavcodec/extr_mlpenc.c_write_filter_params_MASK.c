
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int order; int shift; int coeff_bits; int coeff_shift; } ;
struct TYPE_6__ {TYPE_1__* cur_channel_params; } ;
struct TYPE_5__ {int** coeff; TYPE_3__* filter_params; } ;
typedef int PutBitContext ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ FilterParams ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_0, PutBitContext *VAR_1,
                                unsigned int VAR_2, unsigned int VAR_3)
{
    FilterParams *VAR_4 = &VAR_0->cur_channel_params[VAR_2].filter_params[VAR_3];

    FUNC_0(VAR_1, 4, VAR_4->order);

    if (VAR_4->order > 0) {
        int VAR_5;
        int32_t *VAR_6 = VAR_0->cur_channel_params[VAR_2].coeff[VAR_3];

        FUNC_0(VAR_1, 4, VAR_4->shift );
        FUNC_0(VAR_1, 5, VAR_4->coeff_bits );
        FUNC_0(VAR_1, 3, VAR_4->coeff_shift);

        for (VAR_5 = 0; VAR_5 < VAR_4->order; VAR_5++) {
            FUNC_1(VAR_1, VAR_4->coeff_bits, VAR_6[VAR_5] >> VAR_4->coeff_shift);
        }


        FUNC_0(VAR_1, 1, 0);
    }
}
