
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int blocksize; } ;
struct TYPE_15__ {unsigned int num_substreams; unsigned int number_of_frames; int* frame_size; unsigned int number_of_subblocks; int sample_buffer; int num_channels; TYPE_3__* cur_decoding_params; int * best_offset; int cur_best_offset; TYPE_1__* avctx; int * cur_channel_params; int * restart_header; int * cur_restart_header; TYPE_3__* seq_decoding_params; int * seq_channel_params; } ;
struct TYPE_14__ {int channels; } ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ DecodingParams ;
typedef int ChannelParams ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(MLPEncodeContext *VAR_0)
{
    ChannelParams *VAR_1 = VAR_0->seq_channel_params;
    DecodingParams *VAR_2 = VAR_0->seq_decoding_params;
    unsigned int VAR_3;
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->num_substreams; VAR_4++) {

        VAR_0->cur_restart_header = &VAR_0->restart_header[VAR_4];
        VAR_0->cur_decoding_params = VAR_2 + 1*(VAR_0->num_substreams) + VAR_4;
        VAR_0->cur_channel_params = VAR_1 + 1*(VAR_0->avctx->channels);

        FUNC_4(VAR_0);
        FUNC_5(VAR_0);
        FUNC_6 (VAR_0);
        FUNC_7 (VAR_0);
        FUNC_3 (VAR_0);
        FUNC_0 (VAR_0);

        FUNC_1(VAR_0, VAR_4);




        for (VAR_3 = 0; VAR_3 < VAR_0->number_of_frames; VAR_3++) {
            DecodingParams *VAR_5 = VAR_2 + (VAR_3 + 1)*(VAR_0->num_substreams) + VAR_4;
            VAR_5->blocksize = VAR_0->frame_size[VAR_3];
        }




        (VAR_2 + VAR_4)->blocksize = 8;
        (VAR_2 + 1*(VAR_0->num_substreams) + VAR_4)->blocksize -= 8;

        for (VAR_3 = 0; VAR_3 < VAR_0->number_of_subblocks; VAR_3++) {
                VAR_0->cur_decoding_params = VAR_2 + VAR_3*(VAR_0->num_substreams) + VAR_4;
                VAR_0->cur_channel_params = VAR_1 + VAR_3*(VAR_0->avctx->channels);
                VAR_0->cur_best_offset = VAR_0->best_offset[VAR_3];
                FUNC_2(VAR_0);
                VAR_0->sample_buffer += VAR_0->cur_decoding_params->blocksize * VAR_0->num_channels;
        }

        FUNC_8(VAR_0);
    }
}
