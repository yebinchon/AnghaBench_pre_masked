
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {scalar_t__ huff_lsbs; } ;
struct TYPE_11__ {unsigned int num_substreams; int restart_intervals; int sequence_size; int* seq_offset; unsigned int* seq_size; unsigned int number_of_frames; scalar_t__* max_output_bits; int major_filter_state_subblock; scalar_t__ major_cur_subblock_index; int number_of_subblocks; int major_number_of_subblocks; int * cur_channel_params; int * prev_channel_params; int * cur_decoding_params; int * prev_decoding_params; int ** major_params_changed; int ** major_channel_params; int ** major_decoding_params; TYPE_2__* restart_header; TYPE_2__* cur_restart_header; TYPE_1__* avctx; scalar_t__ channel_params; scalar_t__ decoding_params; } ;
struct TYPE_10__ {scalar_t__ max_output_bits; scalar_t__ max_huff_lsbs; } ;
struct TYPE_9__ {int channels; } ;
typedef TYPE_2__ RestartHeader ;
typedef TYPE_3__ MLPEncodeContext ;
typedef TYPE_4__ DecodingParams ;
typedef TYPE_4__ ChannelParams ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_3)
{
    RestartHeader *VAR_4 = VAR_3->cur_restart_header;
    unsigned int VAR_5;
    unsigned int VAR_6;
    uint8_t VAR_7 = 0;
    uint8_t VAR_8 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_3->num_substreams; VAR_6++) {
        DecodingParams *VAR_9 = (DecodingParams *) VAR_3->decoding_params+
                                 (VAR_3->restart_intervals - 1)*(VAR_3->sequence_size)*(VAR_3->avctx->channels) +
                                 (VAR_3->seq_offset[VAR_3->restart_intervals - 1])*(VAR_3->avctx->channels);

        ChannelParams *VAR_10 = (ChannelParams *) VAR_3->channel_params +
                                (VAR_3->restart_intervals - 1)*(VAR_3->sequence_size)*(VAR_3->avctx->channels) +
                                (VAR_3->seq_offset[VAR_3->restart_intervals - 1])*(VAR_3->avctx->channels);
        unsigned int VAR_11;
        for (VAR_5 = 0; VAR_5 < VAR_3->seq_size[VAR_3->restart_intervals-1]; VAR_5++) {
            FUNC_1(&VAR_3->major_decoding_params[VAR_5][VAR_6], VAR_9 + VAR_5*(VAR_3->num_substreams) + VAR_6, sizeof(DecodingParams));
            for (VAR_11 = 0; VAR_11 < VAR_3->avctx->channels; VAR_11++) {
                uint8_t VAR_12 = (VAR_10 + VAR_5*(VAR_3->avctx->channels) + VAR_11)->huff_lsbs;
                if (VAR_7 < VAR_12)
                    VAR_7 = VAR_12;
                FUNC_1(&VAR_3->major_channel_params[VAR_5][VAR_11],
                       (VAR_10 + VAR_5*(VAR_3->avctx->channels) + VAR_11),
                       sizeof(ChannelParams));
            }
        }
    }

    VAR_4->max_huff_lsbs = VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_3->number_of_frames; VAR_5++)
        if (VAR_8 < VAR_3->max_output_bits[VAR_5])
            VAR_8 = VAR_3->max_output_bits[VAR_5];
    VAR_4->max_output_bits = VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_3->num_substreams; VAR_6++) {

        VAR_3->cur_restart_header = &VAR_3->restart_header[VAR_6];

        VAR_3->prev_decoding_params = &VAR_2[VAR_6];
        VAR_3->prev_channel_params = VAR_1;

        for (VAR_5 = 0; VAR_5 < VAR_0 + 1; VAR_5++) {
                VAR_3->cur_decoding_params = &VAR_3->major_decoding_params[VAR_5][VAR_6];
                VAR_3->cur_channel_params = VAR_3->major_channel_params[VAR_5];

                VAR_3->major_params_changed[VAR_5][VAR_6] = FUNC_0(VAR_3);

                VAR_3->prev_decoding_params = VAR_3->cur_decoding_params;
                VAR_3->prev_channel_params = VAR_3->cur_channel_params;
        }
    }

    VAR_3->major_number_of_subblocks = VAR_3->number_of_subblocks;
    VAR_3->major_filter_state_subblock = 1;
    VAR_3->major_cur_subblock_index = 0;
}
