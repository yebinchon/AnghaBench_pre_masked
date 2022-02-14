
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ is_live; } ;
typedef TYPE_2__ WebMDashMuxContext ;
struct TYPE_13__ {char* value; } ;
struct TYPE_12__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; int metadata; } ;
struct TYPE_9__ {scalar_t__ codec_type; int codec_id; int sample_rate; int height; int width; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_8, AVStream *VAR_9, char *VAR_10,
                                int VAR_11, int VAR_12,
                                int VAR_13) {
    WebMDashMuxContext *VAR_14 = VAR_8->priv_data;
    AVDictionaryEntry *VAR_15 = FUNC_0(VAR_9->metadata, VAR_7, ((void*)0), 0);
    AVDictionaryEntry *VAR_16 = FUNC_0(VAR_9->metadata, VAR_5, ((void*)0), 0);
    AVDictionaryEntry *VAR_17 = FUNC_0(VAR_9->metadata, VAR_4, ((void*)0), 0);
    AVDictionaryEntry *VAR_18 = FUNC_0(VAR_9->metadata, VAR_6, ((void*)0), 0);
    AVDictionaryEntry *VAR_19 = FUNC_0(VAR_9->metadata, VAR_3, ((void*)0), 0);
    const char *VAR_20;
    if ((VAR_14->is_live && (!VAR_18)) ||
        (!VAR_14->is_live && (!VAR_15 || !VAR_16 || !VAR_17 || !VAR_18 || !VAR_19))) {
        return VAR_0;
    }
    FUNC_1(VAR_8->pb, "<Representation id=\"%s\"", VAR_10);

    if (VAR_14->is_live && !VAR_19) {
        VAR_20 = (VAR_9->codecpar->codec_type == VAR_1) ? "128000" : "1000000";
    } else {
        VAR_20 = VAR_19->value;
    }
    FUNC_1(VAR_8->pb, " bandwidth=\"%s\"", VAR_20);
    if (VAR_9->codecpar->codec_type == VAR_2 && VAR_11)
        FUNC_1(VAR_8->pb, " width=\"%d\"", VAR_9->codecpar->width);
    if (VAR_9->codecpar->codec_type == VAR_2 && VAR_12)
        FUNC_1(VAR_8->pb, " height=\"%d\"", VAR_9->codecpar->height);
    if (VAR_9->codecpar->codec_type == VAR_1 && VAR_13)
        FUNC_1(VAR_8->pb, " audioSamplingRate=\"%d\"", VAR_9->codecpar->sample_rate);
    if (VAR_14->is_live) {

        FUNC_1(VAR_8->pb, " codecs=\"%s\"", FUNC_2(VAR_9->codecpar->codec_id));
        FUNC_1(VAR_8->pb, " mimeType=\"%s/webm\"",
                    VAR_9->codecpar->codec_type == VAR_2 ? "video" : "audio");


        FUNC_1(VAR_8->pb, " startsWithSAP=\"1\"");
        FUNC_1(VAR_8->pb, ">");
    } else {
        FUNC_1(VAR_8->pb, ">\n");
        FUNC_1(VAR_8->pb, "<BaseURL>%s</BaseURL>\n", VAR_18->value);
        FUNC_1(VAR_8->pb, "<SegmentBase\n");
        FUNC_1(VAR_8->pb, "  indexRange=\"%s-%s\">\n", VAR_16->value, VAR_17->value);
        FUNC_1(VAR_8->pb, "<Initialization\n");
        FUNC_1(VAR_8->pb, "  range=\"0-%s\" />\n", VAR_15->value);
        FUNC_1(VAR_8->pb, "</SegmentBase>\n");
    }
    FUNC_1(VAR_8->pb, "</Representation>\n");
    return 0;
}
