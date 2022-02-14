
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits_per_coded_sample; int codec_id; int sample_rate; int channels; int codec_tag; } ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_22, AVCodecParameters *VAR_23)
{
    int VAR_24 = (VAR_23->bits_per_coded_sample == 16) ? VAR_19
                                                   : VAR_20;

    if (VAR_23->codec_id == VAR_0)
        return VAR_4 | VAR_17 |
               VAR_19 | VAR_21;
    else if (VAR_23->codec_id == VAR_1) {
        if (VAR_23->sample_rate != 16000) {
            FUNC_1(VAR_22, VAR_2,
                   "FLV only supports wideband (16kHz) Speex audio\n");
            return FUNC_0(VAR_3);
        }
        if (VAR_23->channels != 1) {
            FUNC_1(VAR_22, VAR_2, "FLV only supports mono Speex audio\n");
            return FUNC_0(VAR_3);
        }
        return VAR_14 | VAR_15 | VAR_19;
    } else {
        switch (VAR_23->sample_rate) {
        case 48000:

            if (VAR_23->codec_id == 134) {
                VAR_24 |= VAR_17;
                break;
            } else {
                goto error;
            }
        case 44100:
            VAR_24 |= VAR_17;
            break;
        case 22050:
            VAR_24 |= VAR_16;
            break;
        case 11025:
            VAR_24 |= VAR_15;
            break;
        case 16000:
        case 8000:
        case 5512:
            if (VAR_23->codec_id != 134) {
                VAR_24 |= VAR_18;
                break;
            }
        default:
error:
            FUNC_1(VAR_22, VAR_2,
                   "FLV does not support sample rate %d, "
                   "choose from (44100, 22050, 11025)\n", VAR_23->sample_rate);
            return FUNC_0(VAR_3);
        }
    }

    if (VAR_23->channels > 1)
        VAR_24 |= VAR_21;

    switch (VAR_23->codec_id) {
    case 134:
        VAR_24 |= VAR_6 | VAR_19;
        break;
    case 128:
        VAR_24 |= VAR_10 | VAR_20;
        break;
    case 130:
        VAR_24 |= VAR_10 | VAR_19;
        break;
    case 129:
        VAR_24 |= VAR_12 | VAR_19;
        break;
    case 135:
        VAR_24 |= VAR_5 | VAR_19;
        break;
    case 133:
        if (VAR_23->sample_rate == 8000)
            VAR_24 |= VAR_9 | VAR_19;
        else if (VAR_23->sample_rate == 16000)
            VAR_24 |= VAR_8 | VAR_19;
        else
            VAR_24 |= VAR_7 | VAR_19;
        break;
    case 131:
        VAR_24 = VAR_13 | VAR_18 | VAR_19;
        break;
    case 132:
        VAR_24 = VAR_11 | VAR_18 | VAR_19;
        break;
    case 0:
        VAR_24 |= VAR_23->codec_tag << 4;
        break;
    default:
        FUNC_1(VAR_22, VAR_2, "Audio codec '%s' not compatible with FLV\n",
               FUNC_2(VAR_23->codec_id));
        return FUNC_0(VAR_3);
    }

    return VAR_24;
}
