
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int channels; int sample_fmt; int sample_rate; int channel_layout; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int size; scalar_t__ data; } ;
struct TYPE_12__ {int word_bits; int word_bytes; int input_size; int key_present; int nb_programs; int multi_prog_warned; int nb_channels; size_t fr_code; int prog_conf; scalar_t__ input; } ;
typedef TYPE_1__ DBEContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_8, void *VAR_9,
                                int *VAR_10, AVPacket *VAR_11)
{
    DBEContext *VAR_12 = VAR_8->priv_data;
    int VAR_13, VAR_14, VAR_15, VAR_16;

    if (VAR_11->size < 3)
        return VAR_0;

    VAR_15 = FUNC_0(VAR_11->data);
    if ((VAR_15 & 0xfffffe) == 0x7888e) {
        VAR_12->word_bits = 24;
    } else if ((VAR_15 & 0xffffe0) == 0x788e0) {
        VAR_12->word_bits = 20;
    } else if ((VAR_15 & 0xfffe00) == 0x78e00) {
        VAR_12->word_bits = 16;
    } else {
        FUNC_1(VAR_8, VAR_4, "Invalid frame header\n");
        return VAR_0;
    }

    VAR_12->word_bytes = (VAR_12->word_bits + 7) >> 3;
    VAR_12->input = VAR_11->data + VAR_12->word_bytes;
    VAR_12->input_size = VAR_11->size / VAR_12->word_bytes - 1;
    VAR_12->key_present = VAR_15 >> (24 - VAR_12->word_bits) & 1;

    if ((VAR_16 = FUNC_4(VAR_12)) < 0)
        return VAR_16;

    if (VAR_12->nb_programs > 1 && !VAR_12->multi_prog_warned) {
        FUNC_1(VAR_8, VAR_5, "Stream has %d programs (configuration %d), "
               "channels will be output in native order.\n", VAR_12->nb_programs, VAR_12->prog_conf);
        VAR_12->multi_prog_warned = 1;
    }

    switch (VAR_12->nb_channels) {
    case 4:
        VAR_8->channel_layout = VAR_1;
        break;
    case 6:
        VAR_8->channel_layout = VAR_2;
        break;
    case 8:
        VAR_8->channel_layout = VAR_3;
        break;
    }

    VAR_8->channels = VAR_12->nb_channels;
    VAR_8->sample_rate = VAR_7[VAR_12->fr_code];
    VAR_8->sample_fmt = VAR_6;

    VAR_13 = VAR_12->nb_channels / 2;
    VAR_14 = VAR_12->nb_channels;
    if ((VAR_16 = FUNC_3(VAR_12, 0, VAR_13, 0)) < 0)
        return VAR_16;
    if ((VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14, 0)) < 0)
        return VAR_16;
    if ((VAR_16 = FUNC_5(VAR_12)) < 0)
        return VAR_16;
    if ((VAR_16 = FUNC_3(VAR_12, 0, VAR_13, 1)) < 0)
        return VAR_16;
    if ((VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14, 1)) < 0)
        return VAR_16;
    if ((VAR_16 = FUNC_6(VAR_12)) < 0)
        return VAR_16;
    if ((VAR_16 = FUNC_2(VAR_12, VAR_9)) < 0)
        return VAR_16;

    *VAR_10 = 1;
    return VAR_11->size;
}
