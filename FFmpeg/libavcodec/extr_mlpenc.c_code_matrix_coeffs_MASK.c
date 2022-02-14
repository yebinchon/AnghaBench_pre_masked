
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int** coeff; int* fbits; } ;
struct TYPE_7__ {TYPE_1__ matrix_params; } ;
struct TYPE_6__ {unsigned int num_channels; TYPE_3__* cur_decoding_params; } ;
typedef TYPE_1__ MatrixParams ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ DecodingParams ;



__attribute__((used)) static void FUNC_0(MLPEncodeContext *VAR_0, unsigned int VAR_1)
{
    DecodingParams *VAR_2 = VAR_0->cur_decoding_params;
    MatrixParams *VAR_3 = &VAR_2->matrix_params;
    int32_t VAR_4 = 0;
    unsigned int VAR_5;
    unsigned int VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_0->num_channels; VAR_5++) {
        int32_t VAR_7 = VAR_3->coeff[VAR_1][VAR_5];
        VAR_4 |= VAR_7;
    }

    for (VAR_6 = 0; VAR_6 < 14 && !(VAR_4 & (1<<VAR_6)); VAR_6++);

    VAR_3->fbits [VAR_1] = 14 - VAR_6;
}
