
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef int int64_t ;
typedef int buf ;
struct TYPE_30__ {int coded_height; int coded_width; int qmax; int qmin; int codec; int properties; } ;
struct TYPE_29__ {int value; } ;
struct TYPE_28__ {char* dump_separator; TYPE_4__** streams; TYPE_2__* iformat; TYPE_1__* oformat; } ;
struct TYPE_27__ {int den; int num; } ;
struct TYPE_21__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_22__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_26__ {int disposition; int metadata; TYPE_3__* codec; TYPE_16__ time_base; TYPE_16__ r_frame_rate; TYPE_16__ avg_frame_rate; TYPE_13__* codecpar; TYPE_19__ sample_aspect_ratio; int codec_info_nb_frames; int id; } ;
struct TYPE_25__ {TYPE_16__ time_base; int coded_height; int coded_width; int qmax; int qmin; int codec; int properties; } ;
struct TYPE_24__ {int flags; } ;
struct TYPE_23__ {int flags; } ;
struct TYPE_20__ {int width; int height; scalar_t__ codec_type; int sample_aspect_ratio; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVRational ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVDictionaryEntry ;
typedef TYPE_8__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (TYPE_19__,int ) ;
 TYPE_7__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (TYPE_8__*,char*,char*,int ) ;
 int FUNC_4 (TYPE_16__) ;
 int FUNC_5 (int *,int *,int,int,int) ;
 TYPE_8__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_8__**) ;
 int FUNC_8 (TYPE_8__*,TYPE_13__*) ;
 int FUNC_9 (char*,int,TYPE_8__*,int) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,TYPE_4__*,char*) ;
 int FUNC_12 (int,char*) ;

__attribute__((used)) static void FUNC_13(AVFormatContext *VAR_21, int VAR_22,
                               int VAR_23, int VAR_24)
{
    char VAR_25[256];
    int VAR_26 = (VAR_24 ? VAR_21->oformat->flags : VAR_21->iformat->flags);
    AVStream *VAR_27 = VAR_21->streams[VAR_22];
    AVDictionaryEntry *VAR_28 = FUNC_1(VAR_27->metadata, "language", ((void*)0), 0);
    char *VAR_29 = VAR_21->dump_separator;
    AVCodecContext *VAR_30;
    int VAR_31;

    VAR_30 = FUNC_6(((void*)0));
    if (!VAR_30)
        return;

    VAR_31 = FUNC_8(VAR_30, VAR_27->codecpar);
    if (VAR_31 < 0) {
        FUNC_7(&VAR_30);
        return;
    }


    VAR_30->properties = VAR_27->codec->properties;
    VAR_30->codec = VAR_27->codec->codec;
    VAR_30->qmin = VAR_27->codec->qmin;
    VAR_30->qmax = VAR_27->codec->qmax;
    VAR_30->coded_width = VAR_27->codec->coded_width;
    VAR_30->coded_height = VAR_27->codec->coded_height;

    if (VAR_29)
        FUNC_3(VAR_30, "dump_separator", VAR_29, 0);
    FUNC_9(VAR_25, sizeof(VAR_25), VAR_30, VAR_24);
    FUNC_7(&VAR_30);

    FUNC_2(((void*)0), VAR_20, "    Stream #%d:%d", VAR_23, VAR_22);



    if (VAR_26 & VAR_0)
        FUNC_2(((void*)0), VAR_20, "[0x%x]", VAR_27->id);
    if (VAR_28)
        FUNC_2(((void*)0), VAR_20, "(%s)", VAR_28->value);
    FUNC_2(((void*)0), VAR_19, ", %d, %d/%d", VAR_27->codec_info_nb_frames,
           VAR_27->time_base.num, VAR_27->time_base.den);
    FUNC_2(((void*)0), VAR_20, ": %s", VAR_25);

    if (VAR_27->sample_aspect_ratio.num &&
        FUNC_0(VAR_27->sample_aspect_ratio, VAR_27->codecpar->sample_aspect_ratio)) {
        AVRational VAR_32;
        FUNC_5(&VAR_32.num, &VAR_32.den,
                  VAR_27->codecpar->width * (int64_t)VAR_27->sample_aspect_ratio.num,
                  VAR_27->codecpar->height * (int64_t)VAR_27->sample_aspect_ratio.den,
                  1024 * 1024);
        FUNC_2(((void*)0), VAR_20, ", SAR %d:%d DAR %d:%d",
               VAR_27->sample_aspect_ratio.num, VAR_27->sample_aspect_ratio.den,
               VAR_32.num, VAR_32.den);
    }

    if (VAR_27->codecpar->codec_type == VAR_1) {
        int VAR_33 = VAR_27->avg_frame_rate.den && VAR_27->avg_frame_rate.num;
        int VAR_34 = VAR_27->r_frame_rate.den && VAR_27->r_frame_rate.num;
        int VAR_35 = VAR_27->time_base.den && VAR_27->time_base.num;
        int VAR_36 = VAR_27->codec->time_base.den && VAR_27->codec->time_base.num;

        if (VAR_33 || VAR_34 || VAR_35 || VAR_36)
            FUNC_2(((void*)0), VAR_20, "%s", VAR_29);

        if (VAR_33)
            FUNC_12(FUNC_4(VAR_27->avg_frame_rate), VAR_34 || VAR_35 || VAR_36 ? "fps, " : "fps");
        if (VAR_34)
            FUNC_12(FUNC_4(VAR_27->r_frame_rate), VAR_35 || VAR_36 ? "tbr, " : "tbr");
        if (VAR_35)
            FUNC_12(1 / FUNC_4(VAR_27->time_base), VAR_36 ? "tbn, " : "tbn");
        if (VAR_36)
            FUNC_12(1 / FUNC_4(VAR_27->codec->time_base), "tbc");
    }

    if (VAR_27->disposition & VAR_6)
        FUNC_2(((void*)0), VAR_20, " (default)");
    if (VAR_27->disposition & VAR_9)
        FUNC_2(((void*)0), VAR_20, " (dub)");
    if (VAR_27->disposition & VAR_15)
        FUNC_2(((void*)0), VAR_20, " (original)");
    if (VAR_27->disposition & VAR_5)
        FUNC_2(((void*)0), VAR_20, " (comment)");
    if (VAR_27->disposition & VAR_13)
        FUNC_2(((void*)0), VAR_20, " (lyrics)");
    if (VAR_27->disposition & VAR_12)
        FUNC_2(((void*)0), VAR_20, " (karaoke)");
    if (VAR_27->disposition & VAR_10)
        FUNC_2(((void*)0), VAR_20, " (forced)");
    if (VAR_27->disposition & VAR_11)
        FUNC_2(((void*)0), VAR_20, " (hearing impaired)");
    if (VAR_27->disposition & VAR_18)
        FUNC_2(((void*)0), VAR_20, " (visual impaired)");
    if (VAR_27->disposition & VAR_4)
        FUNC_2(((void*)0), VAR_20, " (clean effects)");
    if (VAR_27->disposition & VAR_2)
        FUNC_2(((void*)0), VAR_20, " (attached pic)");
    if (VAR_27->disposition & VAR_17)
        FUNC_2(((void*)0), VAR_20, " (timed thumbnails)");
    if (VAR_27->disposition & VAR_3)
        FUNC_2(((void*)0), VAR_20, " (captions)");
    if (VAR_27->disposition & VAR_8)
        FUNC_2(((void*)0), VAR_20, " (descriptions)");
    if (VAR_27->disposition & VAR_14)
        FUNC_2(((void*)0), VAR_20, " (metadata)");
    if (VAR_27->disposition & VAR_7)
        FUNC_2(((void*)0), VAR_20, " (dependent)");
    if (VAR_27->disposition & VAR_16)
        FUNC_2(((void*)0), VAR_20, " (still image)");
    FUNC_2(((void*)0), VAR_20, "\n");

    FUNC_10(((void*)0), VAR_27->metadata, "    ");

    FUNC_11(((void*)0), VAR_27, "    ");
}
