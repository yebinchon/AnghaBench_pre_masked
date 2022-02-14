
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ ch_offset; int samples; scalar_t__ block; } ;
typedef TYPE_1__ WavpackContext ;
struct TYPE_11__ {int bits_per_raw_sample; scalar_t__ channels; int sample_fmt; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int size; int * data; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int *,int const*,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_7, void *VAR_8,
                                int *VAR_9, AVPacket *VAR_10)
{
    WavpackContext *VAR_11 = VAR_7->priv_data;
    const uint8_t *VAR_12 = VAR_10->data;
    int VAR_13 = VAR_10->size;
    AVFrame *VAR_14 = VAR_8;
    int VAR_15, VAR_16, VAR_17;

    if (VAR_10->size <= VAR_5)
        return VAR_0;

    VAR_11->block = 0;
    VAR_11->ch_offset = 0;


    VAR_11->samples = FUNC_0(VAR_12 + 20);
    VAR_17 = FUNC_0(VAR_12 + 24);
    if (VAR_11->samples <= 0 || VAR_11->samples > VAR_6) {
        FUNC_1(VAR_7, VAR_1, "Invalid number of samples: %d\n",
               VAR_11->samples);
        return VAR_0;
    }

    if (VAR_17 & 0x80) {
        VAR_7->sample_fmt = VAR_2;
    } else if ((VAR_17 & 0x03) <= 1) {
        VAR_7->sample_fmt = VAR_3;
    } else {
        VAR_7->sample_fmt = VAR_4;
        VAR_7->bits_per_raw_sample = ((VAR_17 & 0x03) + 1) << 3;
    }

    while (VAR_13 > 0) {
        if (VAR_13 <= VAR_5)
            break;
        VAR_15 = FUNC_0(VAR_12 + 4) - 12;
        VAR_12 += 20;
        VAR_13 -= 20;
        if (VAR_15 <= 0 || VAR_15 > VAR_13) {
            FUNC_1(VAR_7, VAR_1,
                   "Block %d has invalid size (size %d vs. %d bytes left)\n",
                   VAR_11->block, VAR_15, VAR_13);
            FUNC_3(VAR_7);
            return VAR_0;
        }
        if ((VAR_16 = FUNC_2(VAR_7, VAR_11->block,
                                        VAR_14, VAR_12, VAR_15)) < 0) {
            FUNC_3(VAR_7);
            return VAR_16;
        }
        VAR_11->block++;
        VAR_12 += VAR_15;
        VAR_13 -= VAR_15;
    }

    if (VAR_11->ch_offset != VAR_7->channels) {
        FUNC_1(VAR_7, VAR_1, "Not enough channels coded in a packet.\n");
        return VAR_0;
    }

    *VAR_9 = 1;

    return VAR_10->size;
}
