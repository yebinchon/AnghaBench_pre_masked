
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sample_mask ;
typedef int int32_t ;
struct TYPE_7__ {scalar_t__* shift; } ;
struct TYPE_9__ {scalar_t__* quant_step_size; TYPE_2__ matrix_params; } ;
struct TYPE_8__ {int number_of_samples; int * sample_buffer; TYPE_1__* cur_restart_header; TYPE_4__* cur_decoding_params; } ;
struct TYPE_6__ {unsigned int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MatrixParams ;
typedef TYPE_3__ MLPEncodeContext ;
typedef TYPE_4__ DecodingParams ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_1)
{
    DecodingParams *VAR_2 = VAR_1->cur_decoding_params;
    RestartHeader *VAR_3 = VAR_1->cur_restart_header;
    MatrixParams *VAR_4 = &VAR_2->matrix_params;
    int32_t *VAR_5 = VAR_1->sample_buffer;
    int32_t VAR_6[VAR_0];
    unsigned int VAR_7;
    int VAR_8;

    FUNC_0(VAR_6, 0x00, sizeof(VAR_6));

    for (VAR_8 = 0; VAR_8 < VAR_1->number_of_samples; VAR_8++) {
        for (VAR_7 = 0; VAR_7 <= VAR_3->max_channel; VAR_7++)
            VAR_6[VAR_7] |= *VAR_5++;

        VAR_5 += 2;
    }

    for (VAR_7 = 0; VAR_7 <= VAR_3->max_channel; VAR_7++)
        VAR_2->quant_step_size[VAR_7] = FUNC_1(VAR_6[VAR_7]) - VAR_4->shift[VAR_7];
}
