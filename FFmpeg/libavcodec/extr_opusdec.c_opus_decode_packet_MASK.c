
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_23__ {int channels; TYPE_4__* priv_data; } ;
struct TYPE_22__ {int nb_samples; float*** extended_data; int* linesize; } ;
struct TYPE_21__ {int size; int * data; } ;
struct TYPE_20__ {int stream_idx; int channel_idx; size_t copy_idx; scalar_t__ silence; scalar_t__ copy; } ;
struct TYPE_19__ {int nb_streams; float** out; int* out_size; int* decoded_samples; int gain; TYPE_1__* fdsp; scalar_t__ gain_i; TYPE_5__* channel_maps; int * sync_buffers; TYPE_2__* streams; } ;
struct TYPE_18__ {int frame_count; int frame_duration; scalar_t__ packet_size; int data_size; int config; } ;
struct TYPE_17__ {TYPE_3__ packet; void* silk_samplerate; scalar_t__ delayed_samples; int ** out; } ;
struct TYPE_16__ {int (* vector_fmul_scalar ) (float*,float*,int ,int ) ;} ;
typedef TYPE_2__ OpusStreamContext ;
typedef TYPE_3__ OpusPacket ;
typedef TYPE_4__ OpusContext ;
typedef TYPE_5__ ChannelMap ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (float*) ;
 int VAR_3 ;
 int FUNC_4 (int ,void**,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void**,int) ;
 int FUNC_7 (TYPE_8__*,int ,char*,...) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_3__*,int const*,int,int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (float**,float**,int) ;
 int FUNC_12 (float**,int ,int) ;
 int FUNC_13 (TYPE_2__*,int const*,int ,float**,int,int) ;
 int FUNC_14 (float*,float*,int ,int ) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_4, void *VAR_5,
                              int *VAR_6, AVPacket *VAR_7)
{
    OpusContext *VAR_8 = VAR_4->priv_data;
    AVFrame *VAR_9 = VAR_5;
    const uint8_t *VAR_10 = VAR_7->data;
    int VAR_11 = VAR_7->size;
    int VAR_12 = 0;
    int VAR_13 = VAR_3;
    int VAR_14 = 0;
    int VAR_15, VAR_16;


    for (VAR_15 = 0; VAR_15 < VAR_8->nb_streams; VAR_15++) {
        OpusStreamContext *VAR_17 = &VAR_8->streams[VAR_15];
        VAR_17->out[0] =
        VAR_17->out[1] = ((void*)0);
        VAR_14 = FUNC_1(VAR_14,
                                VAR_17->delayed_samples + FUNC_5(VAR_8->sync_buffers[VAR_15]));
    }


    if (VAR_10) {
        OpusPacket *VAR_18 = &VAR_8->streams[0].packet;
        VAR_16 = FUNC_9(VAR_18, VAR_10, VAR_11, VAR_8->nb_streams > 1);
        if (VAR_16 < 0) {
            FUNC_7(VAR_4, VAR_2, "Error parsing the packet header.\n");
            return VAR_16;
        }
        VAR_12 += VAR_18->frame_count * VAR_18->frame_duration;
        VAR_8->streams[0].silk_samplerate = FUNC_10(VAR_18->config);
    }

    VAR_9->nb_samples = VAR_12 + VAR_14;


    if (!VAR_9->nb_samples) {
        *VAR_6 = 0;
        return 0;
    }


    VAR_16 = FUNC_8(VAR_4, VAR_9, 0);
    if (VAR_16 < 0)
        return VAR_16;
    VAR_9->nb_samples = 0;

    FUNC_12(VAR_8->out, 0, VAR_8->nb_streams * 2 * sizeof(*VAR_8->out));
    for (VAR_15 = 0; VAR_15 < VAR_4->channels; VAR_15++) {
        ChannelMap *VAR_19 = &VAR_8->channel_maps[VAR_15];
        if (!VAR_19->copy)
            VAR_8->out[2 * VAR_19->stream_idx + VAR_19->channel_idx] = (float*)VAR_9->extended_data[VAR_15];
    }


    for (VAR_15 = 0; VAR_15 < VAR_8->nb_streams; VAR_15++) {
        float **VAR_20 = VAR_8->out + 2 * VAR_15;
        int VAR_21 = FUNC_5(VAR_8->sync_buffers[VAR_15]);

        float VAR_22[32];
        int VAR_23 = (!VAR_20[0]) | ((!VAR_20[1]) << 1);

        if (!VAR_20[0])
            VAR_20[0] = VAR_22;
        if (!VAR_20[1])
            VAR_20[1] = VAR_22;
        if (VAR_23 && VAR_21 > FUNC_3(VAR_22))
            return VAR_0;

        VAR_16 = FUNC_4(VAR_8->sync_buffers[VAR_15], (void**)VAR_20, VAR_21);
        if (VAR_16 < 0)
            return VAR_16;

        if (VAR_23 & 1)
            VAR_20[0] = ((void*)0);
        else
            VAR_20[0] += VAR_16;
        if (VAR_23 & 2)
            VAR_20[1] = ((void*)0);
        else
            VAR_20[1] += VAR_16;

        VAR_8->out_size[VAR_15] = VAR_9->linesize[0] - VAR_16 * sizeof(float);
    }


    for (VAR_15 = 0; VAR_15 < VAR_8->nb_streams; VAR_15++) {
        OpusStreamContext *VAR_24 = &VAR_8->streams[VAR_15];

        if (VAR_15 && VAR_10) {
            VAR_16 = FUNC_9(&VAR_24->packet, VAR_10, VAR_11, VAR_15 != VAR_8->nb_streams - 1);
            if (VAR_16 < 0) {
                FUNC_7(VAR_4, VAR_2, "Error parsing the packet header.\n");
                return VAR_16;
            }
            if (VAR_12 != VAR_24->packet.frame_count * VAR_24->packet.frame_duration) {
                FUNC_7(VAR_4, VAR_2,
                       "Mismatching coded sample count in substream %d.\n", VAR_15);
                return VAR_1;
            }

            VAR_24->silk_samplerate = FUNC_10(VAR_24->packet.config);
        }

        VAR_16 = FUNC_13(&VAR_8->streams[VAR_15], VAR_10, VAR_24->packet.data_size,
                                    VAR_8->out + 2 * VAR_15, VAR_8->out_size[VAR_15], VAR_12);
        if (VAR_16 < 0)
            return VAR_16;
        VAR_8->decoded_samples[VAR_15] = VAR_16;
        VAR_13 = FUNC_2(VAR_13, VAR_16);

        VAR_10 += VAR_24->packet.packet_size;
        VAR_11 -= VAR_24->packet.packet_size;
    }


    for (VAR_15 = 0; VAR_15 < VAR_8->nb_streams; VAR_15++) {
        int VAR_25 = VAR_8->decoded_samples[VAR_15] - VAR_13;
        if (VAR_25) {
            float *VAR_26[2] = { VAR_8->out[2 * VAR_15 + 0] ? VAR_8->out[2 * VAR_15 + 0] : (float*)VAR_9->extended_data[0],
                              VAR_8->out[2 * VAR_15 + 1] ? VAR_8->out[2 * VAR_15 + 1] : (float*)VAR_9->extended_data[0] };
            VAR_26[0] += VAR_13;
            VAR_26[1] += VAR_13;
            VAR_16 = FUNC_6(VAR_8->sync_buffers[VAR_15], (void**)VAR_26, VAR_25);
            if (VAR_16 < 0)
                return VAR_16;
        }
    }

    for (VAR_15 = 0; VAR_15 < VAR_4->channels; VAR_15++) {
        ChannelMap *VAR_27 = &VAR_8->channel_maps[VAR_15];


        if (VAR_27->copy) {
            FUNC_11(VAR_9->extended_data[VAR_15],
                   VAR_9->extended_data[VAR_27->copy_idx],
                   VAR_9->linesize[0]);
        } else if (VAR_27->silence) {
            FUNC_12(VAR_9->extended_data[VAR_15], 0, VAR_9->linesize[0]);
        }

        if (VAR_8->gain_i && VAR_13 > 0) {
            VAR_8->fdsp->vector_fmul_scalar((float*)VAR_9->extended_data[VAR_15],
                                       (float*)VAR_9->extended_data[VAR_15],
                                       VAR_8->gain, FUNC_0(VAR_13, 8));
        }
    }

    VAR_9->nb_samples = VAR_13;
    *VAR_6 = !!VAR_13;

    return VAR_7->size;
}
