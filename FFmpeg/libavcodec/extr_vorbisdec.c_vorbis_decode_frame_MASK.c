
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int audio_channels; int* blocksize; int first_frame; int modes; scalar_t__ channel_residues; int audio_samplerate; int gb; } ;
typedef TYPE_1__ vorbis_context ;
typedef int uint8_t ;
struct TYPE_18__ {int channels; int sample_rate; int channel_layout; TYPE_1__* priv_data; } ;
struct TYPE_17__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_16__ {int* data; int size; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int** VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,float**) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_5, void *VAR_6,
                               int *VAR_7, AVPacket *VAR_8)
{
    const uint8_t *VAR_9 = VAR_8->data;
    int VAR_10 = VAR_8->size;
    vorbis_context *VAR_11 = VAR_5->priv_data;
    AVFrame *VAR_12 = VAR_6;
    GetBitContext *VAR_13 = &VAR_11->gb;
    float *VAR_14[255];
    int VAR_15, VAR_16, VAR_17;

    FUNC_2(((void*)0), "packet length %d \n", VAR_10);

    if (*VAR_9 == 1 && VAR_10 > 7) {
        if ((VAR_17 = FUNC_5(VAR_13, VAR_9 + 1, VAR_10 - 1)) < 0)
            return VAR_17;

        FUNC_6(VAR_11);
        if ((VAR_17 = FUNC_8(VAR_11))) {
            FUNC_1(VAR_5, VAR_2, "Id header corrupt.\n");
            FUNC_6(VAR_11);
            return VAR_17;
        }

        if (VAR_11->audio_channels > 8)
            VAR_5->channel_layout = 0;
        else
            VAR_5->channel_layout = VAR_4[VAR_11->audio_channels - 1];

        VAR_5->channels = VAR_11->audio_channels;
        VAR_5->sample_rate = VAR_11->audio_samplerate;
        return VAR_10;
    }

    if (*VAR_9 == 3 && VAR_10 > 7) {
        FUNC_1(VAR_5, VAR_1, "Ignoring comment header\n");
        return VAR_10;
    }

    if (*VAR_9 == 5 && VAR_10 > 7 && VAR_11->channel_residues && !VAR_11->modes) {
        if ((VAR_17 = FUNC_5(VAR_13, VAR_9 + 1, VAR_10 - 1)) < 0)
            return VAR_17;

        if ((VAR_17 = FUNC_9(VAR_11))) {
            FUNC_1(VAR_5, VAR_2, "Setup header corrupt.\n");
            FUNC_6(VAR_11);
            return VAR_17;
        }
        return VAR_10;
    }

    if (!VAR_11->channel_residues || !VAR_11->modes) {
        FUNC_1(VAR_5, VAR_2, "Data packet before valid headers\n");
        return VAR_0;
    }


    VAR_12->nb_samples = VAR_11->blocksize[1] / 2;
    if ((VAR_17 = FUNC_3(VAR_5, VAR_12, 0)) < 0)
        return VAR_17;

    if (VAR_11->audio_channels > 8) {
        for (VAR_15 = 0; VAR_15 < VAR_11->audio_channels; VAR_15++)
            VAR_14[VAR_15] = (float *)VAR_12->extended_data[VAR_15];
    } else {
        for (VAR_15 = 0; VAR_15 < VAR_11->audio_channels; VAR_15++) {
            int VAR_18 = VAR_3[VAR_11->audio_channels - 1][VAR_15];
            VAR_14[VAR_18] = (float *)VAR_12->extended_data[VAR_15];
        }
    }

    if ((VAR_17 = FUNC_5(VAR_13, VAR_9, VAR_10)) < 0)
        return VAR_17;

    if ((VAR_16 = FUNC_7(VAR_11, VAR_14)) <= 0)
        return VAR_16;

    if (!VAR_11->first_frame) {
        VAR_11->first_frame = 1;
        *VAR_7 = 0;
        FUNC_0(VAR_12);
        return VAR_10;
    }

    FUNC_2(((void*)0), "parsed %d bytes %d bits, returned %d samples (*ch*bits) \n",
            FUNC_4(VAR_13) / 8, FUNC_4(VAR_13) % 8, VAR_16);

    VAR_12->nb_samples = VAR_16;
    *VAR_7 = 1;

    return VAR_10;
}
