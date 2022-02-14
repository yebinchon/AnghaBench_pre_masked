
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int count; int* outch; int* fbits; int** coeff; } ;
struct TYPE_7__ {TYPE_1__ matrix_params; } ;
struct TYPE_6__ {unsigned int num_channels; TYPE_3__* cur_decoding_params; } ;
typedef int PutBitContext ;
typedef TYPE_1__ MatrixParams ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ DecodingParams ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_0, PutBitContext *VAR_1)
{
    DecodingParams *VAR_2 = VAR_0->cur_decoding_params;
    MatrixParams *VAR_3 = &VAR_2->matrix_params;
    unsigned int VAR_4;

    FUNC_0(VAR_1, 4, VAR_3->count);

    for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
        unsigned int VAR_5;

        FUNC_0(VAR_1, 4, VAR_3->outch[VAR_4]);
        FUNC_0(VAR_1, 4, VAR_3->fbits[VAR_4]);
        FUNC_0(VAR_1, 1, 0 );

        for (VAR_5 = 0; VAR_5 < VAR_0->num_channels; VAR_5++) {
            int32_t VAR_6 = VAR_3->coeff[VAR_4][VAR_5];

            if (VAR_6) {
                FUNC_0(VAR_1, 1, 1);

                VAR_6 >>= 14 - VAR_3->fbits[VAR_4];

                FUNC_1(VAR_1, VAR_3->fbits[VAR_4] + 2, VAR_6);
            } else {
                FUNC_0(VAR_1, 1, 0);
            }
        }
    }
}
