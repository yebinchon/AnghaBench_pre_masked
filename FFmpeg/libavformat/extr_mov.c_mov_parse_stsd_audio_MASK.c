
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint16_t ;
struct TYPE_17__ {int value; } ;
struct TYPE_16__ {TYPE_1__* codecpar; int need_parsing; } ;
struct TYPE_15__ {int isom; TYPE_10__* fc; } ;
struct TYPE_14__ {int audio_cid; scalar_t__ stsd_version; int samples_per_frame; int bytes_per_frame; scalar_t__ format; int sample_size; } ;
struct TYPE_13__ {int channels; int bits_per_coded_sample; int sample_rate; scalar_t__ codec_tag; int codec_id; } ;
struct TYPE_12__ {int metadata; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 TYPE_5__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_10__*,int ,char*,int,...) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 void* FUNC_9 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,char*) ;

__attribute__((used)) static void FUNC_11(MOVContext *VAR_7, AVIOContext *VAR_8,
                                 AVStream *VAR_9, MOVStreamContext *VAR_10)
{
    int VAR_11, VAR_12;
    uint16_t VAR_13 = FUNC_5(VAR_8);
    AVDictionaryEntry *VAR_14 = FUNC_1(VAR_7->fc->metadata, "compatible_brands", ((void*)0), VAR_5);

    FUNC_5(VAR_8);
    FUNC_6(VAR_8);

    VAR_9->codecpar->channels = FUNC_5(VAR_8);
    VAR_9->codecpar->bits_per_coded_sample = FUNC_5(VAR_8);
    FUNC_4(VAR_7->fc, VAR_6, "audio channels %d\n", VAR_9->codecpar->channels);

    VAR_10->audio_cid = FUNC_5(VAR_8);
    FUNC_5(VAR_8);

    VAR_9->codecpar->sample_rate = ((FUNC_6(VAR_8) >> 16));


    FUNC_4(VAR_7->fc, VAR_6, "version =%d, isom =%d\n", VAR_13, VAR_7->isom);
    if (!VAR_7->isom ||
        (VAR_14 && FUNC_10(VAR_14->value, "qt  ")) ||
        (VAR_10->stsd_version == 0 && VAR_13 > 0)) {
        if (VAR_13 == 1) {
            VAR_10->samples_per_frame = FUNC_6(VAR_8);
            FUNC_6(VAR_8);
            VAR_10->bytes_per_frame = FUNC_6(VAR_8);
            FUNC_6(VAR_8);
        } else if (VAR_13 == 2) {
            FUNC_6(VAR_8);
            VAR_9->codecpar->sample_rate = FUNC_3(FUNC_7(VAR_8));
            VAR_9->codecpar->channels = FUNC_6(VAR_8);
            FUNC_6(VAR_8);
            VAR_9->codecpar->bits_per_coded_sample = FUNC_6(VAR_8);

            VAR_12 = FUNC_6(VAR_8);
            VAR_10->bytes_per_frame = FUNC_6(VAR_8);
            VAR_10->samples_per_frame = FUNC_6(VAR_8);
            if (VAR_9->codecpar->codec_tag == FUNC_0('l','p','c','m'))
                VAR_9->codecpar->codec_id =
                    FUNC_8(VAR_9->codecpar->bits_per_coded_sample,
                                             VAR_12);
        }
        if (VAR_13 == 0 || (VAR_13 == 1 && VAR_10->audio_cid != -2)) {

            switch (VAR_9->codecpar->codec_id) {
            case 133:
            case 132:
                VAR_9->need_parsing = VAR_0;
                break;
            }
        }
    }

    if (VAR_10->format == 0) {
        if (VAR_9->codecpar->bits_per_coded_sample == 8)
            VAR_9->codecpar->codec_id = FUNC_9(VAR_9, FUNC_0('r','a','w',' '));
        else if (VAR_9->codecpar->bits_per_coded_sample == 16)
            VAR_9->codecpar->codec_id = FUNC_9(VAR_9, FUNC_0('t','w','o','s'));
    }

    switch (VAR_9->codecpar->codec_id) {
    case 129:
    case 128:
        if (VAR_9->codecpar->bits_per_coded_sample == 16)
            VAR_9->codecpar->codec_id = 131;
        break;
    case 130:
    case 131:
        if (VAR_9->codecpar->bits_per_coded_sample == 8)
            VAR_9->codecpar->codec_id = 129;
        else if (VAR_9->codecpar->bits_per_coded_sample == 24)
            VAR_9->codecpar->codec_id =
                VAR_9->codecpar->codec_id == 131 ?
                VAR_1 : VAR_2;
        else if (VAR_9->codecpar->bits_per_coded_sample == 32)
             VAR_9->codecpar->codec_id =
                VAR_9->codecpar->codec_id == 131 ?
                VAR_3 : VAR_4;
        break;

    case 135:
        VAR_10->samples_per_frame = 6;
        VAR_10->bytes_per_frame = 2 * VAR_9->codecpar->channels;
        break;
    case 134:
        VAR_10->samples_per_frame = 6;
        VAR_10->bytes_per_frame = 1 * VAR_9->codecpar->channels;
        break;
    case 137:
        VAR_10->samples_per_frame = 64;
        VAR_10->bytes_per_frame = 34 * VAR_9->codecpar->channels;
        break;
    case 136:
        VAR_10->samples_per_frame = 160;
        VAR_10->bytes_per_frame = 33;
        break;
    default:
        break;
    }

    VAR_11 = FUNC_2(VAR_9->codecpar->codec_id);
    if (VAR_11) {
        VAR_9->codecpar->bits_per_coded_sample = VAR_11;
        VAR_10->sample_size = (VAR_11 >> 3) * VAR_9->codecpar->channels;
    }
}
