
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int channels; int sample_rate; int frame_size; void* sample_fmt; } ;
struct TYPE_5__ {int duration; } ;
typedef TYPE_1__ AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;


 void* VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;

__attribute__((used)) static int FUNC_0(AVCodecParserContext *VAR_6, AVCodecContext *VAR_7,
                            const uint8_t *VAR_8, size_t VAR_9)
{
    static const int VAR_10[4] = { 16000, 32000, 44100, 48000 };
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18;

    if (VAR_9 < 3)
        return -1;

    if (VAR_8[0] == VAR_1 && VAR_8[1] == 0 && VAR_8[2] == 0) {
        VAR_7->channels = 1;
        VAR_7->sample_fmt = VAR_0;
        VAR_7->sample_rate = 16000;
        VAR_7->frame_size = 120;
        VAR_6->duration = VAR_7->frame_size;
        return 57;
    }

    if (VAR_8[0] != VAR_5)
        return -2;

    VAR_11 = (VAR_8[1] >> 6) & 0x03;
    VAR_12 = (((VAR_8[1] >> 4) & 0x03) + 1) << 2;
    VAR_13 = (VAR_8[1] >> 2) & 0x03;
    VAR_14 = (((VAR_8[1] >> 0) & 0x01) + 1) << 2;
    VAR_15 = VAR_8[2];

    VAR_16 = VAR_13 == VAR_4 ? 1 : 2;
    VAR_17 = VAR_13 == VAR_3;

    VAR_18 = 4 + (VAR_14 * VAR_16) / 2
             + ((((VAR_13 == VAR_2) + 1) * VAR_12 * VAR_15
                 + (VAR_17 * VAR_14)) + 7) / 8;

    VAR_7->channels = VAR_16;
    VAR_7->sample_fmt = VAR_0;
    VAR_7->sample_rate = VAR_10[VAR_11];
    VAR_7->frame_size = VAR_14 * VAR_12;
    VAR_6->duration = VAR_7->frame_size;
    return VAR_18;
}
