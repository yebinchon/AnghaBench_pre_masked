
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {scalar_t__ pt; scalar_t__ codec_id; scalar_t__ clock_rate; scalar_t__ audio_channels; } ;
struct TYPE_9__ {scalar_t__ codec_id; int sample_rate; int channels; scalar_t__ codec_type; } ;
struct TYPE_8__ {scalar_t__ priv_data; TYPE_1__* oformat; } ;
struct TYPE_7__ {scalar_t__ priv_class; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int ,scalar_t__*) ;
 TYPE_4__* VAR_4 ;

int FUNC_2(AVFormatContext *VAR_5,
                            AVCodecParameters *VAR_6, int VAR_7)
{
    int VAR_8;
    const AVOutputFormat *VAR_9 = VAR_5 ? VAR_5->oformat : ((void*)0);


    if (VAR_9 && VAR_9->priv_class && VAR_5->priv_data) {
        int64_t VAR_10;
        if (FUNC_1(VAR_5->priv_data, "payload_type", 0, &VAR_10) >= 0 &&
            VAR_10 >= 0)
            return (int)VAR_10;
    }


    for (VAR_8 = 0; VAR_4[VAR_8].pt >= 0; ++VAR_8)
        if (VAR_4[VAR_8].codec_id == VAR_6->codec_id) {
            if (VAR_6->codec_id == VAR_2 && (!VAR_5 || !VAR_5->oformat ||
                !VAR_5->oformat->priv_class || !VAR_5->priv_data ||
                !FUNC_0(VAR_5->priv_data, "rtpflags", "rfc2190")))
                continue;


            if (VAR_6->codec_id == VAR_1 &&
                VAR_6->sample_rate == 16000 && VAR_6->channels == 1)
                return VAR_4[VAR_8].pt;
            if (VAR_6->codec_type == VAR_0 &&
                ((VAR_4[VAR_8].clock_rate > 0 &&
                  VAR_6->sample_rate != VAR_4[VAR_8].clock_rate) ||
                 (VAR_4[VAR_8].audio_channels > 0 &&
                  VAR_6->channels != VAR_4[VAR_8].audio_channels)))
                continue;
            return VAR_4[VAR_8].pt;
        }

    if (VAR_7 < 0)
        VAR_7 = VAR_6->codec_type == VAR_0;


    return VAR_3 + VAR_7;
}
