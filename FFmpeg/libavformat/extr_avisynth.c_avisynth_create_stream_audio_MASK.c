
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_13__ {TYPE_1__* codecpar; int duration; } ;
struct TYPE_12__ {int error; TYPE_2__* vi; } ;
struct TYPE_11__ {int sample_type; int audio_samples_per_second; int num_audio_samples; int nchannels; } ;
struct TYPE_10__ {int codec_id; int channels; int sample_rate; int codec_type; } ;
typedef TYPE_3__ AviSynthContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (TYPE_4__*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_8, AVStream *VAR_9)
{
    AviSynthContext *VAR_10 = VAR_8->priv_data;

    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->sample_rate = VAR_10->vi->audio_samples_per_second;
    VAR_9->codecpar->channels = VAR_10->vi->nchannels;
    VAR_9->duration = VAR_10->vi->num_audio_samples;
    FUNC_1(VAR_9, 64, 1, VAR_10->vi->audio_samples_per_second);

    switch (VAR_10->vi->sample_type) {
    case 128:
        VAR_9->codecpar->codec_id = VAR_6;
        break;
    case 131:
        VAR_9->codecpar->codec_id = VAR_3;
        break;
    case 130:
        VAR_9->codecpar->codec_id = VAR_4;
        break;
    case 129:
        VAR_9->codecpar->codec_id = VAR_5;
        break;
    case 132:
        VAR_9->codecpar->codec_id = VAR_2;
        break;
    default:
        FUNC_0(VAR_8, VAR_7,
               "unknown AviSynth sample type %d\n", VAR_10->vi->sample_type);
        VAR_10->error = 1;
        return VAR_0;
    }
    return 0;
}
