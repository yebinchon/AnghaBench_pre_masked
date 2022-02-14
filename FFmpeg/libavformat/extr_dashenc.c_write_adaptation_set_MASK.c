
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int bandwidth_str ;
struct TYPE_22__ {int value; } ;
struct TYPE_21__ {int nb_streams; TYPE_6__** streams; TYPE_4__* priv_data; } ;
struct TYPE_15__ {int num; int den; } ;
struct TYPE_20__ {TYPE_2__* codecpar; TYPE_1__ avg_frame_rate; } ;
struct TYPE_14__ {int den; scalar_t__ num; } ;
struct TYPE_19__ {scalar_t__ media_type; scalar_t__ descriptor; int metadata; TYPE_13__ max_frame_rate; int min_frame_rate; int ambiguous_frame_rate; int id; } ;
struct TYPE_18__ {TYPE_3__* streams; TYPE_5__* as; } ;
struct TYPE_17__ {int as_idx; scalar_t__ bit_rate; int codec_str; int format_name; } ;
struct TYPE_16__ {int channels; int sample_rate; int height; int width; } ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ DASHContext ;
typedef TYPE_5__ AdaptationSet ;
typedef TYPE_6__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;
typedef TYPE_8__ AVDictionaryEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_13__) ;
 TYPE_8__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_3__*,int *,TYPE_7__*,int,int) ;
 int FUNC_4 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVIOContext *VAR_2, int VAR_3,
                                int VAR_4)
{
    DASHContext *VAR_5 = VAR_1->priv_data;
    AdaptationSet *VAR_6 = &VAR_5->as[VAR_3];
    AVDictionaryEntry *VAR_7, *VAR_8;
    int VAR_9;

    FUNC_2(VAR_2, "\t\t<AdaptationSet id=\"%s\" contentType=\"%s\" segmentAlignment=\"true\" bitstreamSwitching=\"true\"",
                VAR_6->id, VAR_6->media_type == VAR_0 ? "video" : "audio");
    if (VAR_6->media_type == VAR_0 && VAR_6->max_frame_rate.num && !VAR_6->ambiguous_frame_rate && FUNC_0(VAR_6->min_frame_rate, VAR_6->max_frame_rate) < 0)
        FUNC_2(VAR_2, " maxFrameRate=\"%d/%d\"", VAR_6->max_frame_rate.num, VAR_6->max_frame_rate.den);
    VAR_7 = FUNC_1(VAR_6->metadata, "language", ((void*)0), 0);
    if (VAR_7)
        FUNC_2(VAR_2, " lang=\"%s\"", VAR_7->value);
    FUNC_2(VAR_2, ">\n");

    VAR_8 = FUNC_1(VAR_6->metadata, "role", ((void*)0), 0);
    if (VAR_8)
        FUNC_2(VAR_2, "\t\t\t<Role schemeIdUri=\"urn:mpeg:dash:role:2011\" value=\"%s\"/>\n", VAR_8->value);
    if (VAR_6->descriptor)
        FUNC_2(VAR_2, "\t\t\t%s\n", VAR_6->descriptor);
    for (VAR_9 = 0; VAR_9 < VAR_1->nb_streams; VAR_9++) {
        OutputStream *VAR_10 = &VAR_5->streams[VAR_9];
        char VAR_11[64] = {'\0'};

        if (VAR_10->as_idx - 1 != VAR_3)
            continue;

        if (VAR_10->bit_rate > 0)
            FUNC_4(VAR_11, sizeof(VAR_11), " bandwidth=\"%d\"",
                     VAR_10->bit_rate);

        if (VAR_6->media_type == VAR_0) {
            AVStream *VAR_12 = VAR_1->streams[VAR_9];
            FUNC_2(VAR_2, "\t\t\t<Representation id=\"%d\" mimeType=\"video/%s\" codecs=\"%s\"%s width=\"%d\" height=\"%d\"",
                VAR_9, VAR_10->format_name, VAR_10->codec_str, VAR_11, VAR_1->streams[VAR_9]->codecpar->width, VAR_1->streams[VAR_9]->codecpar->height);
            if (VAR_12->avg_frame_rate.num)
                FUNC_2(VAR_2, " frameRate=\"%d/%d\"", VAR_12->avg_frame_rate.num, VAR_12->avg_frame_rate.den);
            FUNC_2(VAR_2, ">\n");
        } else {
            FUNC_2(VAR_2, "\t\t\t<Representation id=\"%d\" mimeType=\"audio/%s\" codecs=\"%s\"%s audioSamplingRate=\"%d\">\n",
                VAR_9, VAR_10->format_name, VAR_10->codec_str, VAR_11, VAR_1->streams[VAR_9]->codecpar->sample_rate);
            FUNC_2(VAR_2, "\t\t\t\t<AudioChannelConfiguration schemeIdUri=\"urn:mpeg:dash:23003:3:audio_channel_configuration:2011\" value=\"%d\" />\n",
                VAR_1->streams[VAR_9]->codecpar->channels);
        }
        FUNC_3(VAR_10, VAR_2, VAR_1, VAR_9, VAR_4);
        FUNC_2(VAR_2, "\t\t\t</Representation>\n");
    }
    FUNC_2(VAR_2, "\t\t</AdaptationSet>\n");

    return 0;
}
