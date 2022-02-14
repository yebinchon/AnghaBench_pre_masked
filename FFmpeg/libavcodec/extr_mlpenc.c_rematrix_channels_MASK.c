
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_7__ {unsigned int count; int* shift; unsigned int* outch; int** forco; } ;
struct TYPE_9__ {TYPE_2__ matrix_params; } ;
struct TYPE_8__ {int* sample_buffer; unsigned int num_channels; unsigned int number_of_samples; TYPE_1__* avctx; TYPE_4__* cur_decoding_params; } ;
struct TYPE_6__ {scalar_t__ sample_fmt; } ;
typedef TYPE_2__ MatrixParams ;
typedef TYPE_3__ MLPEncodeContext ;
typedef TYPE_4__ DecodingParams ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(MLPEncodeContext *VAR_1)
{
    DecodingParams *VAR_2 = VAR_1->cur_decoding_params;
    MatrixParams *VAR_3 = &VAR_2->matrix_params;
    int32_t *VAR_4 = VAR_1->sample_buffer;
    unsigned int VAR_5, VAR_6, VAR_7;

    VAR_7 = VAR_1->num_channels;

    for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
        unsigned int VAR_8 = (VAR_1->avctx->sample_fmt == VAR_0 ? 8 : 0) - VAR_3->shift[VAR_5];
        int32_t VAR_9 = FUNC_0(VAR_8);
        unsigned int VAR_10 = VAR_3->outch[VAR_5];

        VAR_4 = VAR_1->sample_buffer;
        for (VAR_6 = 0; VAR_6 < VAR_1->number_of_samples; VAR_6++) {
            unsigned int VAR_11;
            int64_t VAR_12 = 0;

            for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
                int32_t VAR_13 = *(VAR_4 + VAR_11);
                VAR_12 += (int64_t) VAR_13 * VAR_3->forco[VAR_5][VAR_11];
            }
            VAR_4[VAR_10] = (VAR_12 >> 14) & VAR_9;

            VAR_4 += VAR_1->num_channels;
        }
    }
}
