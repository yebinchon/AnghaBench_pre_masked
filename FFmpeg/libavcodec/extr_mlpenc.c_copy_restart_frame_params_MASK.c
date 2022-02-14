
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int * shift; } ;
struct TYPE_12__ {int * shift; } ;
struct TYPE_11__ {TYPE_6__ matrix_params; int * quant_step_size; } ;
struct TYPE_10__ {unsigned int number_of_subblocks; unsigned int num_substreams; int * cur_channel_params; TYPE_2__* cur_decoding_params; TYPE_1__* avctx; int * seq_channel_params; TYPE_4__* seq_decoding_params; } ;
struct TYPE_9__ {TYPE_7__ matrix_params; int * quant_step_size; } ;
struct TYPE_8__ {unsigned int channels; } ;
typedef TYPE_3__ MLPEncodeContext ;
typedef TYPE_4__ DecodingParams ;
typedef int ChannelParams ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_1,
                                      unsigned int VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->number_of_subblocks; VAR_3++) {
        DecodingParams *VAR_4 = VAR_1->seq_decoding_params + VAR_3*(VAR_1->num_substreams) + VAR_2;
        unsigned int VAR_5;

        FUNC_1(&VAR_4->matrix_params, &VAR_1->cur_decoding_params->matrix_params);

        for (VAR_5 = 0; VAR_5 < VAR_1->avctx->channels; VAR_5++) {
            ChannelParams *VAR_6 = VAR_1->seq_channel_params + VAR_3*(VAR_1->avctx->channels) + VAR_5;
            unsigned int VAR_7;

            VAR_4->quant_step_size[VAR_5] = VAR_1->cur_decoding_params->quant_step_size[VAR_5];
            VAR_4->matrix_params.shift[VAR_5] = VAR_1->cur_decoding_params->matrix_params.shift[VAR_5];

            if (VAR_3)
                for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
                    FUNC_0(VAR_6, &VAR_1->cur_channel_params[VAR_5], VAR_7);
        }
    }
}
