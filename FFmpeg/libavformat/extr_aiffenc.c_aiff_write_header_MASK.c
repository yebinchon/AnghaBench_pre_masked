
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {int audio_stream_idx; void* ssnd; void* frames; void* form; } ;
struct TYPE_11__ {scalar_t__ codec_type; scalar_t__ codec_tag; int block_align; int channels; int bits_per_coded_sample; int extradata_size; int sample_rate; int extradata; int codec_id; scalar_t__ channel_layout; } ;
struct TYPE_10__ {int nb_streams; TYPE_1__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_9__ {TYPE_3__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;
typedef TYPE_4__ AIFFOutputContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (TYPE_1__*,int,int,int ) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (TYPE_2__*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_4)
{
    AIFFOutputContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    AVCodecParameters *VAR_7;
    uint64_t VAR_8;
    int VAR_9, VAR_10 = 0;

    VAR_5->audio_stream_idx = -1;
    for (VAR_9 = 0; VAR_9 < VAR_4->nb_streams; VAR_9++) {
        AVStream *VAR_11 = VAR_4->streams[VAR_9];
        if (VAR_5->audio_stream_idx < 0 && VAR_11->codecpar->codec_type == VAR_0) {
            VAR_5->audio_stream_idx = VAR_9;
        } else if (VAR_11->codecpar->codec_type != VAR_1) {
            FUNC_5(VAR_4, VAR_2, "AIFF allows only one audio stream and a picture.\n");
            return FUNC_0(VAR_3);
        }
    }
    if (VAR_5->audio_stream_idx < 0) {
        FUNC_5(VAR_4, VAR_2, "No audio stream present.\n");
        return FUNC_0(VAR_3);
    }

    VAR_7 = VAR_4->streams[VAR_5->audio_stream_idx]->codecpar;


    if (!VAR_7->codec_tag)
        return FUNC_0(VAR_3);
    if (VAR_7->codec_tag != FUNC_1('N','O','N','E'))
        VAR_10 = 1;


    FUNC_15(VAR_6, "FORM");
    VAR_5->form = FUNC_7(VAR_6);
    FUNC_9(VAR_6, 0);
    FUNC_15(VAR_6, VAR_10 ? "AIFC" : "AIFF");

    if (VAR_10) {
        if (!VAR_7->block_align) {
            FUNC_5(VAR_4, VAR_2, "block align not set\n");
            return FUNC_0(VAR_3);
        }

        FUNC_15(VAR_6, "FVER");
        FUNC_9(VAR_6, 4);
        FUNC_9(VAR_6, 0xA2805140);
    }

    if (VAR_7->channels > 2 && VAR_7->channel_layout) {
        FUNC_15(VAR_6, "CHAN");
        FUNC_9(VAR_6, 12);
        FUNC_14(VAR_6, VAR_7->channel_layout);
    }

    FUNC_16(VAR_4, "title", FUNC_1('N', 'A', 'M', 'E'));
    FUNC_16(VAR_4, "author", FUNC_1('A', 'U', 'T', 'H'));
    FUNC_16(VAR_4, "copyright", FUNC_1('(', 'c', ')', ' '));
    FUNC_16(VAR_4, "comment", FUNC_1('A', 'N', 'N', 'O'));


    FUNC_15(VAR_6, "COMM");
    FUNC_9(VAR_6, VAR_10 ? 24 : 18);
    FUNC_8(VAR_6, VAR_7->channels);

    VAR_5->frames = FUNC_7(VAR_6);
    FUNC_9(VAR_6, 0);

    if (!VAR_7->bits_per_coded_sample)
        VAR_7->bits_per_coded_sample = FUNC_4(VAR_7->codec_id);
    if (!VAR_7->bits_per_coded_sample) {
        FUNC_5(VAR_4, VAR_2, "could not compute bits per sample\n");
        return FUNC_0(VAR_3);
    }
    if (!VAR_7->block_align)
        VAR_7->block_align = (VAR_7->bits_per_coded_sample * VAR_7->channels) >> 3;

    FUNC_8(VAR_6, VAR_7->bits_per_coded_sample);

    VAR_8 = FUNC_3(VAR_7->sample_rate);
    FUNC_8(VAR_6, (VAR_8 >> 52) + (16383 - 1023));
    FUNC_10(VAR_6, FUNC_2(1) << 63 | VAR_8 << 11);

    if (VAR_10) {
        FUNC_11(VAR_6, VAR_7->codec_tag);
        FUNC_8(VAR_6, 0);
    }

    if ( (VAR_7->codec_tag == FUNC_1('Q','D','M','2')
        || VAR_7->codec_tag == FUNC_1('Q','c','l','p')) && VAR_7->extradata_size) {
        FUNC_15(VAR_6, "wave");
        FUNC_9(VAR_6, VAR_7->extradata_size);
        FUNC_12(VAR_6, VAR_7->extradata, VAR_7->extradata_size);
    }


    FUNC_15(VAR_6, "SSND");
    VAR_5->ssnd = FUNC_7(VAR_6);
    FUNC_9(VAR_6, 0);
    FUNC_9(VAR_6, 0);
    FUNC_9(VAR_6, 0);

    FUNC_13(VAR_4->streams[VAR_5->audio_stream_idx], 64, 1,
                        VAR_4->streams[VAR_5->audio_stream_idx]->codecpar->sample_rate);


    FUNC_6(VAR_6);

    return 0;
}
