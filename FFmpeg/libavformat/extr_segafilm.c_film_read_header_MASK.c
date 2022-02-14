
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int film_sample ;
struct TYPE_17__ {int nb_streams; TYPE_3__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_16__ {size_t index; unsigned int duration; TYPE_1__* codecpar; int need_parsing; } ;
struct TYPE_15__ {int version; scalar_t__ audio_type; int audio_samplerate; int audio_channels; int audio_bits; scalar_t__ video_type; size_t video_stream_index; size_t audio_stream_index; int base_clock; int sample_count; scalar_t__ current_sample; TYPE_10__* sample_table; } ;
struct TYPE_14__ {scalar_t__ codec_type; scalar_t__ codec_id; int codec_tag; int width; int height; unsigned char channels; int sample_rate; int bits_per_coded_sample; int block_align; int bit_rate; int format; } ;
struct TYPE_13__ {unsigned int sample_offset; int sample_size; size_t stream; unsigned int pts; int keyframe; } ;
typedef TYPE_2__ FilmDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (TYPE_3__*,unsigned int,int,int,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*,unsigned char) ;
 TYPE_10__* FUNC_5 (int,int) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (TYPE_3__*,int,int,int) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_22)
{
    FilmDemuxContext *VAR_23 = VAR_22->priv_data;
    AVIOContext *VAR_24 = VAR_22->pb;
    AVStream *VAR_25;
    unsigned char VAR_26[256];
    int VAR_27, VAR_28;
    unsigned int VAR_29;
    unsigned int VAR_30;
    unsigned int VAR_31;

    VAR_23->sample_table = ((void*)0);


    if (FUNC_7(VAR_24, VAR_26, 16) != 16)
        return FUNC_0(VAR_15);
    VAR_29 = FUNC_2(&VAR_26[4]);
    VAR_23->version = FUNC_2(&VAR_26[8]);


    if (VAR_23->version == 0) {

        if (FUNC_7(VAR_24, VAR_26, 20) != 20)
            return FUNC_0(VAR_15);

        VAR_23->audio_type = VAR_9;
        VAR_23->audio_samplerate = 22050;
        VAR_23->audio_channels = 1;
        VAR_23->audio_bits = 8;
    } else {

        if (FUNC_7(VAR_24, VAR_26, 32) != 32)
            return FUNC_0(VAR_15);
        VAR_23->audio_samplerate = FUNC_1(&VAR_26[24]);
        VAR_23->audio_channels = VAR_26[21];
        VAR_23->audio_bits = VAR_26[22];
        if (VAR_26[23] == 2 && VAR_23->audio_channels > 0)
            VAR_23->audio_type = VAR_5;
        else if (VAR_23->audio_channels > 0) {
            if (VAR_23->audio_bits == 8)
                VAR_23->audio_type = VAR_10;
            else if (VAR_23->audio_bits == 16)
                VAR_23->audio_type = VAR_8;
            else
                VAR_23->audio_type = VAR_7;
        } else
            VAR_23->audio_type = VAR_7;
    }

    if (FUNC_2(&VAR_26[0]) != VAR_17)
        return VAR_0;

    if (FUNC_2(&VAR_26[8]) == VAR_14) {
        VAR_23->video_type = VAR_6;
    } else if (FUNC_2(&VAR_26[8]) == VAR_19) {
        VAR_23->video_type = VAR_11;
    } else {
        VAR_23->video_type = VAR_7;
    }


    if (VAR_23->video_type) {
        VAR_25 = FUNC_6(VAR_22, ((void*)0));
        if (!VAR_25)
            return FUNC_0(VAR_16);
        VAR_23->video_stream_index = VAR_25->index;
        VAR_25->codecpar->codec_type = VAR_3;
        VAR_25->codecpar->codec_id = VAR_23->video_type;
        VAR_25->codecpar->codec_tag = 0;
        VAR_25->codecpar->width = FUNC_2(&VAR_26[16]);
        VAR_25->codecpar->height = FUNC_2(&VAR_26[12]);

        if (VAR_23->video_type == VAR_11) {
            if (VAR_26[20] == 24) {
                VAR_25->codecpar->format = VAR_13;
            } else {
                FUNC_4(VAR_22, VAR_12, "raw video is using unhandled %dbpp\n", VAR_26[20]);
                return -1;
            }
        }
    }

    if (VAR_23->audio_type) {
        VAR_25 = FUNC_6(VAR_22, ((void*)0));
        if (!VAR_25)
            return FUNC_0(VAR_16);
        VAR_23->audio_stream_index = VAR_25->index;
        VAR_25->codecpar->codec_type = VAR_2;
        VAR_25->codecpar->codec_id = VAR_23->audio_type;
        VAR_25->codecpar->codec_tag = 1;
        VAR_25->codecpar->channels = VAR_23->audio_channels;
        VAR_25->codecpar->sample_rate = VAR_23->audio_samplerate;

        if (VAR_23->audio_type == VAR_5) {
            VAR_25->codecpar->bits_per_coded_sample = 18 * 8 / 32;
            VAR_25->codecpar->block_align = VAR_25->codecpar->channels * 18;
            VAR_25->need_parsing = VAR_4;
        } else {
            VAR_25->codecpar->bits_per_coded_sample = VAR_23->audio_bits;
            VAR_25->codecpar->block_align = VAR_25->codecpar->channels *
                VAR_25->codecpar->bits_per_coded_sample / 8;
        }

        VAR_25->codecpar->bit_rate = VAR_25->codecpar->channels * VAR_25->codecpar->sample_rate *
            VAR_25->codecpar->bits_per_coded_sample;
    }


    if (FUNC_7(VAR_24, VAR_26, 16) != 16)
        return FUNC_0(VAR_15);
    if (FUNC_2(&VAR_26[0]) != VAR_20)
        return VAR_0;
    VAR_23->base_clock = FUNC_2(&VAR_26[8]);
    VAR_23->sample_count = FUNC_2(&VAR_26[12]);
    if(VAR_23->sample_count >= VAR_21 / sizeof(film_sample))
        return -1;
    VAR_23->sample_table = FUNC_5(VAR_23->sample_count, sizeof(film_sample));
    if (!VAR_23->sample_table)
        return FUNC_0(VAR_16);

    for (VAR_27 = 0; VAR_27 < VAR_22->nb_streams; VAR_27++) {
        VAR_25 = VAR_22->streams[VAR_27];
        if (VAR_25->codecpar->codec_type == VAR_3)
            FUNC_8(VAR_25, 33, 1, VAR_23->base_clock);
        else
            FUNC_8(VAR_25, 64, 1, VAR_23->audio_samplerate);
    }

    VAR_30 = VAR_31 = 0;
    for (VAR_27 = 0; VAR_27 < VAR_23->sample_count; VAR_27++) {

        if (FUNC_7(VAR_24, VAR_26, 16) != 16) {
            VAR_28 = FUNC_0(VAR_15);
            goto fail;
        }
        VAR_23->sample_table[VAR_27].sample_offset =
            VAR_29 + FUNC_2(&VAR_26[0]);
        VAR_23->sample_table[VAR_27].sample_size = FUNC_2(&VAR_26[4]);
        if (VAR_23->sample_table[VAR_27].sample_size > VAR_18 / 4) {
            VAR_28 = VAR_0;
            goto fail;
        }
        if (FUNC_2(&VAR_26[8]) == 0xFFFFFFFF) {
            VAR_23->sample_table[VAR_27].stream = VAR_23->audio_stream_index;
            VAR_23->sample_table[VAR_27].pts = VAR_30;

            if (VAR_23->audio_type == VAR_5)
                VAR_30 += (VAR_23->sample_table[VAR_27].sample_size * 32 /
                    (18 * VAR_23->audio_channels));
            else if (VAR_23->audio_type != VAR_7)
                VAR_30 += (VAR_23->sample_table[VAR_27].sample_size /
                    (VAR_23->audio_channels * VAR_23->audio_bits / 8));
        } else {
            VAR_23->sample_table[VAR_27].stream = VAR_23->video_stream_index;
            VAR_23->sample_table[VAR_27].pts = FUNC_2(&VAR_26[8]) & 0x7FFFFFFF;
            VAR_23->sample_table[VAR_27].keyframe = (VAR_26[8] & 0x80) ? 0 : VAR_1;
            VAR_31++;
            if (VAR_23->video_type)
                FUNC_3(VAR_22->streams[VAR_23->video_stream_index],
                                   VAR_23->sample_table[VAR_27].sample_offset,
                                   VAR_23->sample_table[VAR_27].pts,
                                   VAR_23->sample_table[VAR_27].sample_size, 0,
                                   VAR_23->sample_table[VAR_27].keyframe);
        }
    }

    if (VAR_23->audio_type)
        VAR_22->streams[VAR_23->audio_stream_index]->duration = VAR_30;

    if (VAR_23->video_type)
        VAR_22->streams[VAR_23->video_stream_index]->duration = VAR_31;

    VAR_23->current_sample = 0;

    return 0;
fail:
    FUNC_9(VAR_22);
    return VAR_28;
}
