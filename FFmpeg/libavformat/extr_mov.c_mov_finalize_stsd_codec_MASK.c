
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_10__ {int fc; int dv_demux; int dv_fctx; } ;
struct TYPE_9__ {int time_scale; int dv_audio_container; int samples_per_frame; int bytes_per_frame; } ;
struct TYPE_8__ {scalar_t__ codec_type; int sample_rate; int codec_id; int channels; int block_align; int extradata_size; int extradata; int codec_tag; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char,char,char,char) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_5, AVIOContext *VAR_6,
                                   AVStream *VAR_7, MOVStreamContext *VAR_8)
{
    if (VAR_7->codecpar->codec_type == VAR_0 &&
        !VAR_7->codecpar->sample_rate && VAR_8->time_scale > 1)
        VAR_7->codecpar->sample_rate = VAR_8->time_scale;


    switch (VAR_7->codecpar->codec_id) {
    case 132:
        VAR_7->codecpar->channels = 1;

        if (VAR_7->codecpar->codec_tag != FUNC_3('Q','c','l','p'))
            VAR_7->codecpar->sample_rate = 8000;

        VAR_8->samples_per_frame = 160;
        if (!VAR_8->bytes_per_frame)
            VAR_8->bytes_per_frame = 35;
        break;
    case 143:
        VAR_7->codecpar->channels = 1;

        VAR_7->codecpar->sample_rate = 8000;
        break;
    case 142:
        VAR_7->codecpar->channels = 1;
        VAR_7->codecpar->sample_rate = 16000;
        break;
    case 135:
    case 134:

        VAR_7->codecpar->codec_type = VAR_0;
        break;
    case 139:
    case 145:
    case 146:
    case 138:
    case 137:
    case 136:
    case 131:
        VAR_7->codecpar->block_align = VAR_8->bytes_per_frame;
        break;
    case 144:
        if (VAR_7->codecpar->extradata_size == 36) {
            VAR_7->codecpar->channels = FUNC_2 (VAR_7->codecpar->extradata + 21);
            VAR_7->codecpar->sample_rate = FUNC_1(VAR_7->codecpar->extradata + 32);
        }
        break;
    case 147:
    case 140:
    case 133:
    case 130:
    case 129:
    case 128:
        VAR_7->need_parsing = VAR_1;
        break;
    default:
        break;
    }
    return 0;
}
