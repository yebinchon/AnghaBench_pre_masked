
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_12__ {int adpcm; int channels; int sample_rate; int bits; int stream_index; scalar_t__ audio_pts; } ;
struct TYPE_11__ {int id; TYPE_1__* codecpar; int index; } ;
struct TYPE_10__ {int track_count; TYPE_5__* tracks; } ;
struct TYPE_9__ {int channels; int sample_rate; int bits_per_coded_sample; int bit_rate; int block_align; int codec_id; scalar_t__ codec_tag; int codec_type; } ;
typedef TYPE_2__ FourxmDemuxContext ;
typedef int AudioTrack ;
typedef TYPE_3__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int ,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_5__**,int,int) ;
 TYPE_3__* FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_12,
                      FourxmDemuxContext *VAR_13, uint8_t *VAR_14, int VAR_15,
                      int VAR_16)
{
    AVStream *VAR_17;
    int VAR_18;

    if (VAR_15 != VAR_11 || VAR_16 < VAR_15 + 8)
        return VAR_0;

    VAR_18 = FUNC_1(VAR_14 + 8);
    if ((unsigned)VAR_18 >= VAR_10 / sizeof(AudioTrack) - 1) {
        FUNC_2(VAR_12, VAR_5, "current_track too large\n");
        return VAR_0;
    }

    if (VAR_18 + 1 > VAR_13->track_count) {
        if (FUNC_3(&VAR_13->tracks, VAR_18 + 1, sizeof(AudioTrack)))
            return FUNC_0(VAR_6);
        FUNC_6(&VAR_13->tracks[VAR_13->track_count], 0,
               sizeof(AudioTrack) * (VAR_18 + 1 - VAR_13->track_count));
        VAR_13->track_count = VAR_18 + 1;
    }
    VAR_13->tracks[VAR_18].adpcm = FUNC_1(VAR_14 + 12);
    VAR_13->tracks[VAR_18].channels = FUNC_1(VAR_14 + 36);
    VAR_13->tracks[VAR_18].sample_rate = FUNC_1(VAR_14 + 40);
    VAR_13->tracks[VAR_18].bits = FUNC_1(VAR_14 + 44);
    VAR_13->tracks[VAR_18].audio_pts = 0;

    if (VAR_13->tracks[VAR_18].channels <= 0 ||
        VAR_13->tracks[VAR_18].channels > VAR_7 ||
        VAR_13->tracks[VAR_18].sample_rate <= 0 ||
        VAR_13->tracks[VAR_18].bits <= 0 ||
        VAR_13->tracks[VAR_18].bits > VAR_9 / VAR_7) {
        FUNC_2(VAR_12, VAR_5, "audio header invalid\n");
        return VAR_0;
    }
    if (!VAR_13->tracks[VAR_18].adpcm && VAR_13->tracks[VAR_18].bits<8) {
        FUNC_2(VAR_12, VAR_5, "bits unspecified for non ADPCM\n");
        return VAR_0;
    }

    if (VAR_13->tracks[VAR_18].sample_rate > VAR_8 / VAR_13->tracks[VAR_18].bits / VAR_13->tracks[VAR_18].channels) {
        FUNC_2(VAR_12, VAR_5, "Overflow during bit rate calculation %d * %d * %d\n",
               VAR_13->tracks[VAR_18].sample_rate, VAR_13->tracks[VAR_18].bits, VAR_13->tracks[VAR_18].channels);
        return VAR_0;
    }


    VAR_17 = FUNC_4(VAR_12, ((void*)0));
    if (!VAR_17)
        return FUNC_0(VAR_6);

    VAR_17->id = VAR_18;
    FUNC_5(VAR_17, 60, 1, VAR_13->tracks[VAR_18].sample_rate);

    VAR_13->tracks[VAR_18].stream_index = VAR_17->index;

    VAR_17->codecpar->codec_type = VAR_1;
    VAR_17->codecpar->codec_tag = 0;
    VAR_17->codecpar->channels = VAR_13->tracks[VAR_18].channels;
    VAR_17->codecpar->sample_rate = VAR_13->tracks[VAR_18].sample_rate;
    VAR_17->codecpar->bits_per_coded_sample = VAR_13->tracks[VAR_18].bits;
    VAR_17->codecpar->bit_rate = (int64_t)VAR_17->codecpar->channels *
                                          VAR_17->codecpar->sample_rate *
                                          VAR_17->codecpar->bits_per_coded_sample;
    VAR_17->codecpar->block_align = VAR_17->codecpar->channels *
                                          VAR_17->codecpar->bits_per_coded_sample;

    if (VAR_13->tracks[VAR_18].adpcm){
        VAR_17->codecpar->codec_id = VAR_2;
    } else if (VAR_17->codecpar->bits_per_coded_sample == 8) {
        VAR_17->codecpar->codec_id = VAR_4;
    } else
        VAR_17->codecpar->codec_id = VAR_3;

    return 0;
}
