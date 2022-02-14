
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int encoder_str ;
struct TYPE_28__ {int const sample_rate; int channels; int bit_rate; } ;
struct TYPE_27__ {char* value; } ;
struct TYPE_26__ {TYPE_4__* pb; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_25__ {int seekable; } ;
struct TYPE_24__ {size_t audio_stream_idx; int xing_offset; int size; int want; int xing_frame_size; char* xing_frame; int audio_size; int xing_frame_offset; scalar_t__ pos; scalar_t__ seen; int write_xing; } ;
struct TYPE_23__ {int lsf; int nb_channels; int frame_size; } ;
struct TYPE_22__ {int metadata; TYPE_7__* codecpar; } ;
typedef TYPE_2__ MPADecodeHeader ;
typedef TYPE_3__ MP3Context ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVDictionaryEntry ;
typedef TYPE_7__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 TYPE_6__* FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 int FUNC_6 (TYPE_4__*,char**) ;
 int FUNC_7 (TYPE_4__**) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,char) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*,char*,int) ;
 int*** VAR_7 ;
 int* VAR_8 ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_4__*,int ,int) ;
 int FUNC_16 (TYPE_4__*,char*) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 int** VAR_9 ;

__attribute__((used)) static int FUNC_20(AVFormatContext *VAR_10)
{
    MP3Context *VAR_11 = VAR_10->priv_data;
    AVCodecParameters *VAR_12 = VAR_10->streams[VAR_11->audio_stream_idx]->codecpar;
    AVDictionaryEntry *VAR_13 = FUNC_4(VAR_10->streams[VAR_11->audio_stream_idx]->metadata, "encoder", ((void*)0), 0);
    AVIOContext *VAR_14;
    int32_t VAR_15;
    MPADecodeHeader VAR_16;
    int VAR_17, VAR_18, VAR_19;
    int VAR_20;
    int VAR_21 = -1;
    int VAR_22 = VAR_2;
    int VAR_23;
    int VAR_24 = 0;
    int VAR_25;

    if (!(VAR_10->pb->seekable & VAR_0) || !VAR_11->write_xing)
        return 0;

    for (VAR_18 = 0; VAR_18 < FUNC_2(VAR_8); VAR_18++) {
        const uint16_t VAR_26 = VAR_8[VAR_18];

        if (VAR_12->sample_rate == VAR_26) VAR_24 = 0x3;
        else if (VAR_12->sample_rate == VAR_26 / 2) VAR_24 = 0x2;
        else if (VAR_12->sample_rate == VAR_26 / 4) VAR_24 = 0x0;
        else continue;

        VAR_17 = VAR_18;
        break;
    }
    if (VAR_18 == FUNC_2(VAR_8)) {
        FUNC_5(VAR_10, VAR_1, "Unsupported sample rate, not writing Xing header.\n");
        return -1;
    }

    switch (VAR_12->channels) {
    case 1: VAR_19 = VAR_3; break;
    case 2: VAR_19 = VAR_4; break;
    default: FUNC_5(VAR_10, VAR_1, "Unsupported number of channels, "
                    "not writing Xing header.\n");
             return -1;
    }


    VAR_15 = 0xffU << 24;
    VAR_15 |= (0x7 << 5 | VAR_24 << 3 | 0x1 << 1 | 0x1) << 16;
    VAR_15 |= (VAR_17 << 2) << 8;
    VAR_15 |= VAR_19 << 6;

    for (VAR_20 = 1; VAR_20 < 15; VAR_20++) {
        int VAR_27 = 1000 * VAR_7[VAR_24 != 3][3 - 1][VAR_20];
        int VAR_28 = FUNC_0(VAR_27 - VAR_12->bit_rate);

        if (VAR_28 < VAR_22) {
            VAR_22 = VAR_28;
            VAR_21 = VAR_20;
        }
    }
    FUNC_3(VAR_21 >= 0);

    for (VAR_20 = VAR_21; ; VAR_20++) {
        int32_t VAR_29 = VAR_20 << (4 + 8);
        if (15 == VAR_20)
            return -1;
        VAR_15 |= VAR_29;

        VAR_23 = FUNC_14(&VAR_16, VAR_15);
        FUNC_3(VAR_23 >= 0);
        VAR_11->xing_offset = VAR_9[VAR_16.lsf == 1][VAR_16.nb_channels == 1] + 4;
        VAR_25 = VAR_11->xing_offset + VAR_5;

        if (VAR_25 <= VAR_16.frame_size)
            break;

        VAR_15 &= ~VAR_29;
    }

    VAR_23 = FUNC_7(&VAR_14);
    if (VAR_23 < 0)
        return VAR_23;

    FUNC_12(VAR_14, VAR_15);

    FUNC_15(VAR_14, 0, VAR_11->xing_offset - 4);
    FUNC_16(VAR_14, "Xing");
    FUNC_12(VAR_14, 0x01 | 0x02 | 0x04 | 0x08);

    VAR_11->size = VAR_16.frame_size;
    VAR_11->want=1;
    VAR_11->seen=0;
    VAR_11->pos=0;

    FUNC_12(VAR_14, 0);
    FUNC_12(VAR_14, 0);


    for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++)
        FUNC_9(VAR_14, (uint8_t)(255 * VAR_18 / VAR_6));



    FUNC_12(VAR_14, 0);


    if (VAR_13) {
        uint8_t VAR_30[9] = { 0 };
        if ( FUNC_19(VAR_13->value) > sizeof(VAR_30)
            && !FUNC_18("Lavc libmp3lame", VAR_13->value)) {
            FUNC_17(VAR_30, "Lavf lame", 9);
        } else
            FUNC_17(VAR_30, VAR_13->value, FUNC_1(FUNC_19(VAR_13->value), sizeof(VAR_30)));

        FUNC_13(VAR_14, VAR_30, sizeof(VAR_30));
    } else
        FUNC_13(VAR_14, "Lavf\0\0\0\0\0", 9);

    FUNC_9(VAR_14, 0);
    FUNC_9(VAR_14, 0);
    FUNC_15(VAR_14, 0, 8);
    FUNC_9(VAR_14, 0);
    FUNC_9(VAR_14, 0);
    FUNC_11(VAR_14, 0);

    FUNC_9(VAR_14, 0);
    FUNC_9(VAR_14, 0);
    FUNC_10(VAR_14, 0);


    FUNC_12(VAR_14, 0);
    FUNC_10(VAR_14, 0);
    FUNC_10(VAR_14, 0);

    FUNC_15(VAR_14, 0, VAR_16.frame_size - VAR_25);

    VAR_11->xing_frame_size = FUNC_6(VAR_14, &VAR_11->xing_frame);
    VAR_11->xing_frame_offset = FUNC_8(VAR_10->pb);
    FUNC_13(VAR_10->pb, VAR_11->xing_frame, VAR_11->xing_frame_size);

    VAR_11->audio_size = VAR_11->xing_frame_size;

    return 0;
}
