
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_25__ {int channels; int frame_number; scalar_t__ frame_size; TYPE_2__* priv_data; } ;
struct TYPE_24__ {int ** data; } ;
struct TYPE_23__ {unsigned int size; int duration; int pts; int data; } ;
struct TYPE_22__ {int frame_index; int max_restart_interval; scalar_t__ inout_buffer; scalar_t__ major_inout_buffer; int one_sample_buffer_size; scalar_t__ last_frame; scalar_t__ sample_buffer; scalar_t__ major_scratch_buffer; scalar_t__ write_buffer; scalar_t__* frame_size; scalar_t__ min_restart_interval; scalar_t__ next_major_frame_size; unsigned int next_major_number_of_frames; int restart_intervals; int seq_index; int starting_frame_index; unsigned int number_of_frames; unsigned int number_of_subblocks; int sequence_size; int* seq_offset; int num_substreams; unsigned int number_of_samples; unsigned int* seq_size; scalar_t__ major_frame_size; unsigned int major_number_of_frames; int afq; int * seq_decoding_params; TYPE_1__* avctx; int * seq_channel_params; scalar_t__ decoding_params; scalar_t__ channel_params; int dts; int timestamp; } ;
struct TYPE_21__ {int frame_number; int channels; } ;
typedef TYPE_2__ MLPEncodeContext ;
typedef int DecodingParams ;
typedef int ChannelParams ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *,TYPE_4__ const*) ;
 int FUNC_5 (int *,scalar_t__,int *,int *) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 unsigned int FUNC_11 (TYPE_2__*,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_2, AVPacket *VAR_3,
                            const AVFrame *VAR_4, int *VAR_5)
{
    MLPEncodeContext *VAR_6 = VAR_2->priv_data;
    unsigned int VAR_7 = 0;
    int VAR_8, VAR_9;
    uint8_t *VAR_10;

    if ((VAR_9 = FUNC_6(VAR_2, VAR_3, 87500 * VAR_2->channels, 0)) < 0)
        return VAR_9;

    if (!VAR_4)
        return 1;


    if ((VAR_9 = FUNC_4(&VAR_6->afq, VAR_4)) < 0)
        return VAR_9;

    VAR_10 = VAR_4->data[0];

    VAR_6->frame_index = VAR_2->frame_number % VAR_6->max_restart_interval;

    VAR_6->inout_buffer = VAR_6->major_inout_buffer
                      + VAR_6->frame_index * VAR_6->one_sample_buffer_size;

    if (VAR_6->last_frame == VAR_6->inout_buffer) {
        return 0;
    }

    VAR_6->sample_buffer = VAR_6->major_scratch_buffer
                       + VAR_6->frame_index * VAR_6->one_sample_buffer_size;

    VAR_6->write_buffer = VAR_6->inout_buffer;

    if (VAR_2->frame_number < VAR_6->max_restart_interval) {
        if (VAR_10) {
            goto input_and_return;
        } else {



            VAR_6->max_restart_interval = VAR_2->frame_number;
            VAR_6->frame_index = 0;

            VAR_6->sample_buffer = VAR_6->major_scratch_buffer;
            VAR_6->inout_buffer = VAR_6->major_inout_buffer;
        }
    }

    if (VAR_6->frame_size[VAR_6->frame_index] > VAR_1) {
        FUNC_1(VAR_2, VAR_0, "Invalid frame size (%d > %d)\n",
               VAR_6->frame_size[VAR_6->frame_index], VAR_1);
        return -1;
    }

    VAR_8 = !VAR_6->frame_index;

    if (VAR_8) {
        FUNC_10(VAR_6);
        if (VAR_6->min_restart_interval != VAR_6->max_restart_interval)
        FUNC_9(VAR_6);
    }

    if (VAR_6->min_restart_interval == VAR_6->max_restart_interval)
        VAR_6->write_buffer = VAR_6->sample_buffer;

    VAR_7 = FUNC_11(VAR_6, VAR_3->data, VAR_3->size, VAR_8);

    VAR_6->timestamp += VAR_6->frame_size[VAR_6->frame_index];
    VAR_6->dts += VAR_6->frame_size[VAR_6->frame_index];

input_and_return:

    if (VAR_10) {
        VAR_6->frame_size[VAR_6->frame_index] = VAR_2->frame_size;
        VAR_6->next_major_frame_size += VAR_2->frame_size;
        VAR_6->next_major_number_of_frames++;
        FUNC_7(VAR_6, VAR_10);
    } else if (!VAR_6->last_frame) {
        VAR_6->last_frame = VAR_6->inout_buffer;
    }

    VAR_8 = (VAR_6->frame_index + 1) % VAR_6->min_restart_interval;

    if (!VAR_8) {
        int VAR_11;

        for (VAR_11 = 0;
             VAR_11 < VAR_6->restart_intervals && (VAR_11 * VAR_6->min_restart_interval) <= VAR_6->avctx->frame_number;
             VAR_11++) {
            unsigned int VAR_12 = 0;
            unsigned int VAR_13;

            VAR_6->sample_buffer = VAR_6->major_scratch_buffer;
            VAR_6->inout_buffer = VAR_6->major_inout_buffer;
            VAR_6->seq_index = VAR_11;

            VAR_6->starting_frame_index = (VAR_6->avctx->frame_number - (VAR_6->avctx->frame_number % VAR_6->min_restart_interval)
                                      - (VAR_11 * VAR_6->min_restart_interval)) % VAR_6->max_restart_interval;
            VAR_6->number_of_frames = VAR_6->next_major_number_of_frames;
            VAR_6->number_of_subblocks = VAR_6->next_major_number_of_frames + 1;

            VAR_6->seq_channel_params = (ChannelParams *) VAR_6->channel_params +
                                      (VAR_6->frame_index / VAR_6->min_restart_interval)*(VAR_6->sequence_size)*(VAR_6->avctx->channels) +
                                      (VAR_6->seq_offset[VAR_11])*(VAR_6->avctx->channels);

            VAR_6->seq_decoding_params = (DecodingParams *) VAR_6->decoding_params +
                                       (VAR_6->frame_index / VAR_6->min_restart_interval)*(VAR_6->sequence_size)*(VAR_6->num_substreams) +
                                       (VAR_6->seq_offset[VAR_11])*(VAR_6->num_substreams);

            for (VAR_13 = 0; VAR_13 < VAR_6->number_of_frames; VAR_13++) {
                VAR_12 += VAR_6->frame_size[(VAR_6->starting_frame_index + VAR_13) % VAR_6->max_restart_interval];
            }
            VAR_6->number_of_samples = VAR_12;

            for (VAR_13 = 0; VAR_13 < VAR_6->seq_size[VAR_11]; VAR_13++) {
                FUNC_2(VAR_6, VAR_6->seq_channel_params + VAR_13*(VAR_6->avctx->channels));
                FUNC_3(VAR_6, VAR_6->seq_decoding_params + VAR_13*(VAR_6->num_substreams));
            }

            FUNC_8(VAR_6);

            FUNC_0(VAR_6);
        }

        if (VAR_6->frame_index == (VAR_6->max_restart_interval - 1)) {
            VAR_6->major_frame_size = VAR_6->next_major_frame_size;
            VAR_6->next_major_frame_size = 0;
            VAR_6->major_number_of_frames = VAR_6->next_major_number_of_frames;
            VAR_6->next_major_number_of_frames = 0;

            if (!VAR_6->major_frame_size)
                goto no_data_left;
        }
    }

no_data_left:

    FUNC_5(&VAR_6->afq, VAR_2->frame_size, &VAR_3->pts,
                       &VAR_3->duration);
    VAR_3->size = VAR_7;
    *VAR_5 = 1;
    return 0;
}
