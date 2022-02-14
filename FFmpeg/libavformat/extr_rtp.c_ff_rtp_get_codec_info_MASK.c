
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pt; scalar_t__ codec_id; scalar_t__ audio_channels; scalar_t__ clock_rate; int codec_type; } ;
struct TYPE_4__ {scalar_t__ codec_id; scalar_t__ channels; scalar_t__ sample_rate; int codec_type; } ;
typedef TYPE_1__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_0(AVCodecParameters *VAR_2, int VAR_3)
{
    int VAR_4 = 0;

    for (VAR_4 = 0; VAR_1[VAR_4].pt >= 0; VAR_4++)
        if (VAR_1[VAR_4].pt == VAR_3) {
            if (VAR_1[VAR_4].codec_id != VAR_0) {
                VAR_2->codec_type = VAR_1[VAR_4].codec_type;
                VAR_2->codec_id = VAR_1[VAR_4].codec_id;
                if (VAR_1[VAR_4].audio_channels > 0)
                    VAR_2->channels = VAR_1[VAR_4].audio_channels;
                if (VAR_1[VAR_4].clock_rate > 0)
                    VAR_2->sample_rate = VAR_1[VAR_4].clock_rate;
                return 0;
            }
        }
    return -1;
}
