
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef long long int64_t ;
struct TYPE_15__ {TYPE_1__* iformat; int metadata; int * pb; } ;
struct TYPE_14__ {TYPE_2__* codecpar; } ;
struct TYPE_13__ {int sample_rate; int channels; long long bit_rate; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_12__ {int raw_codec_id; } ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int,int) ;
 int FUNC_3 (char*,int,int ) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_4__*,char*,int) ;
 int FUNC_11 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    AVStream *VAR_8;
    int VAR_9;
    uint32_t VAR_10, VAR_11, VAR_12;
    char VAR_13[VAR_3];

    VAR_8 = FUNC_4(VAR_6, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_4);

    FUNC_8(VAR_7, 8);
    VAR_9 = FUNC_5(VAR_7);
    FUNC_2(VAR_6, VAR_2, "version: %i.%i\n", VAR_9 >> 4, VAR_9 & 0xF);
    FUNC_8(VAR_7, 11);

    if (VAR_9 < 0x10) {
        VAR_10 = 0x80;
        VAR_11 = 0x800;
        FUNC_8(VAR_7, 8);
    } else {
        VAR_10 = FUNC_6(VAR_7);
        VAR_11 = FUNC_6(VAR_7);
    }

    FUNC_8(VAR_7, 4);
    FUNC_3(VAR_13, FUNC_6(VAR_7), 0);
    FUNC_1(&VAR_6->metadata, "playback_time", VAR_13, 0);

    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_6->iformat->raw_codec_id;
    VAR_8->codecpar->sample_rate = FUNC_6(VAR_7) / 8;
    FUNC_8(VAR_7, 4);
    VAR_8->codecpar->channels = FUNC_5(VAR_7) & 0xF;
    VAR_8->codecpar->bit_rate = (int64_t)VAR_8->codecpar->channels * VAR_8->codecpar->sample_rate * 8LL;
    if (!VAR_8->codecpar->channels)
        return VAR_0;

    FUNC_8(VAR_7, 3);
    VAR_12 = FUNC_6(VAR_7);
    if (!(VAR_12 & 1)) {
        int VAR_14;
        for (VAR_14 = 1; VAR_14 < 32; VAR_14++)
            if ((VAR_12 >> VAR_14) & 1)
                VAR_8->codecpar->channel_layout |= FUNC_11(VAR_6, VAR_14);
    }

    FUNC_8(VAR_7, 16);
    if (FUNC_6(VAR_7))
       FUNC_9(VAR_6, "emphasis");

    if (FUNC_7(VAR_7, VAR_10, VAR_5) >= 0) {
        FUNC_10(VAR_6, "title", 128);
        FUNC_10(VAR_6, "composer", 128);
        FUNC_10(VAR_6, "song_writer", 128);
        FUNC_10(VAR_6, "artist", 128);
        FUNC_10(VAR_6, "album", 128);
        FUNC_10(VAR_6, "genre", 32);
        FUNC_10(VAR_6, "date", 32);
        FUNC_10(VAR_6, "location", 32);
        FUNC_10(VAR_6, "comment", 512);
        FUNC_10(VAR_6, "user", 512);
    }

    return FUNC_7(VAR_7, VAR_11, VAR_5);
}
