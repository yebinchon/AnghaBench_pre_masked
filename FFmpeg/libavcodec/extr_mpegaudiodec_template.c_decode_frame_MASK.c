
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int channels; int sample_rate; int frame_size; int bit_rate; int channel_layout; TYPE_2__* priv_data; } ;
struct TYPE_11__ {char* data; int size; } ;
struct TYPE_10__ {int frame_size; int nb_channels; int sample_rate; TYPE_1__* frame; int bit_rate; } ;
struct TYPE_9__ {int nb_samples; } ;
typedef int MPADecodeHeader ;
typedef TYPE_2__ MPADecodeContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int *,char const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext * VAR_6, void *VAR_7, int *VAR_8,
                        AVPacket *VAR_9)
{
    const uint8_t *VAR_10 = VAR_9->data;
    int VAR_11 = VAR_9->size;
    MPADecodeContext *VAR_12 = VAR_6->priv_data;
    uint32_t VAR_13;
    int VAR_14;

    int VAR_15 = 0;
    while(VAR_11 && !*VAR_10){
        VAR_10++;
        VAR_11--;
        VAR_15++;
    }

    if (VAR_11 < VAR_5)
        return VAR_0;

    VAR_13 = FUNC_0(VAR_10);
    if (VAR_13>>8 == FUNC_0("TAG")>>8) {
        FUNC_1(VAR_6, VAR_3, "discarding ID3 tag\n");
        return VAR_11 + VAR_15;
    }
    VAR_14 = FUNC_2((MPADecodeHeader *)VAR_12, VAR_13);
    if (VAR_14 < 0) {
        FUNC_1(VAR_6, VAR_4, "Header missing\n");
        return VAR_0;
    } else if (VAR_14 == 1) {

        VAR_12->frame_size = -1;
        return VAR_0;
    }

    VAR_6->channels = VAR_12->nb_channels;
    VAR_6->channel_layout = VAR_12->nb_channels == 1 ? VAR_1 : VAR_2;
    if (!VAR_6->bit_rate)
        VAR_6->bit_rate = VAR_12->bit_rate;

    if (VAR_12->frame_size <= 0) {
        FUNC_1(VAR_6, VAR_4, "incomplete frame\n");
        return VAR_0;
    } else if (VAR_12->frame_size < VAR_11) {
        FUNC_1(VAR_6, VAR_3, "incorrect frame size - multiple frames in buffer?\n");
        VAR_11= VAR_12->frame_size;
    }

    VAR_12->frame = VAR_7;

    VAR_14 = FUNC_3(VAR_12, ((void*)0), VAR_10, VAR_11);
    if (VAR_14 >= 0) {
        VAR_12->frame->nb_samples = VAR_6->frame_size;
        *VAR_8 = 1;
        VAR_6->sample_rate = VAR_12->sample_rate;

    } else {
        FUNC_1(VAR_6, VAR_4, "Error while decoding MPEG audio frame.\n");





        *VAR_8 = 0;
        if (VAR_11 == VAR_9->size || VAR_14 != VAR_0)
            return VAR_14;
    }
    VAR_12->frame_size = 0;
    return VAR_11 + VAR_15;
}
