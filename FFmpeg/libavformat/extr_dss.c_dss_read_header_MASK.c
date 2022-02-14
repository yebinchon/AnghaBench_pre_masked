
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_13__ {int dss_header_size; int dss_sp_buf; scalar_t__ swap; scalar_t__ counter; void* audio_codec; } ;
struct TYPE_12__ {int sample_rate; int channels; int channel_layout; int codec_type; int codec_id; } ;
typedef TYPE_2__ DSSDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_4__*,char*,void*) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_4__*,int ,char*) ;
 int FUNC_8 (TYPE_4__*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_18)
{
    DSSDemuxContext *VAR_19 = VAR_18->priv_data;
    AVIOContext *VAR_20 = VAR_18->pb;
    AVStream *VAR_21;
    int VAR_22, VAR_23;

    VAR_21 = FUNC_2(VAR_18, ((void*)0));
    if (!VAR_21)
        return FUNC_0(VAR_16);

    VAR_23 = FUNC_3(VAR_20);
    VAR_19->dss_header_size = VAR_23 * VAR_8;

    VAR_22 = FUNC_8(VAR_18, VAR_12,
                                   VAR_7, "author");
    if (VAR_22)
        return VAR_22;

    VAR_22 = FUNC_7(VAR_18, VAR_14, "date");
    if (VAR_22)
        return VAR_22;

    VAR_22 = FUNC_8(VAR_18, VAR_13,
                                   VAR_9, "comment");
    if (VAR_22)
        return VAR_22;

    FUNC_4(VAR_20, VAR_11, VAR_17);
    VAR_19->audio_codec = FUNC_3(VAR_20);

    if (VAR_19->audio_codec == VAR_5) {
        VAR_21->codecpar->codec_id = VAR_3;
        VAR_21->codecpar->sample_rate = 11025;
    } else if (VAR_19->audio_codec == VAR_6) {
        VAR_21->codecpar->codec_id = VAR_4;
        VAR_21->codecpar->sample_rate = 8000;
    } else {
        FUNC_5(VAR_18, "Support for codec %x in DSS",
                              VAR_19->audio_codec);
        return VAR_0;
    }

    VAR_21->codecpar->codec_type = VAR_1;
    VAR_21->codecpar->channel_layout = VAR_2;
    VAR_21->codecpar->channels = 1;

    FUNC_6(VAR_21, 64, 1, VAR_21->codecpar->sample_rate);
    VAR_21->start_time = 0;



    if (FUNC_4(VAR_20, VAR_19->dss_header_size, VAR_17) != VAR_19->dss_header_size)
        return FUNC_0(VAR_15);

    VAR_19->counter = 0;
    VAR_19->swap = 0;

    VAR_19->dss_sp_buf = FUNC_1(VAR_10 + 1);
    if (!VAR_19->dss_sp_buf)
        return FUNC_0(VAR_16);

    return 0;
}
