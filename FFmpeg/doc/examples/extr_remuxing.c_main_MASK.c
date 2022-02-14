
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ codec_type; scalar_t__ codec_tag; } ;
struct TYPE_28__ {int nb_streams; int pb; TYPE_1__** streams; TYPE_3__* oformat; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_26__ {size_t stream_index; int pos; int duration; void* dts; void* pts; } ;
struct TYPE_25__ {int time_base; TYPE_5__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVOutputFormat ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_4__*,int ,char const*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int**) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 int* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ) ;
 void* FUNC_9 (void*,int ,int ,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_4__**,int *,int *,char const*) ;
 int FUNC_13 (TYPE_4__**) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 TYPE_1__* FUNC_16 (TYPE_4__*,int *) ;
 int FUNC_17 (TYPE_4__**,char const*,int ,int ) ;
 int FUNC_18 (TYPE_4__*,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char const*,int ) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (TYPE_4__*,TYPE_2__*,char*) ;
 int FUNC_23 (char*,char*) ;
 int VAR_10 ;

int FUNC_24(int VAR_11, char **VAR_12)
{
    AVOutputFormat *VAR_13 = ((void*)0);
    AVFormatContext *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    AVPacket VAR_16;
    const char *VAR_17, *VAR_18;
    int VAR_19, VAR_20;
    int VAR_21 = 0;
    int *VAR_22 = ((void*)0);
    int VAR_23 = 0;

    if (VAR_11 < 3) {
        FUNC_23("usage: %s input output\n"
               "API example program to remux a media file with libavformat and libavcodec.\n"
               "The output format is guessed according to the file extension.\n"
               "\n", VAR_12[0]);
        return 1;
    }

    VAR_17 = VAR_12[1];
    VAR_18 = VAR_12[2];

    if ((VAR_19 = FUNC_17(&VAR_14, VAR_17, 0, 0)) < 0) {
        FUNC_21(VAR_10, "Could not open input file '%s'", VAR_17);
        goto end;
    }

    if ((VAR_19 = FUNC_14(VAR_14, 0)) < 0) {
        FUNC_21(VAR_10, "Failed to retrieve input stream information");
        goto end;
    }

    FUNC_1(VAR_14, 0, VAR_17, 0);

    FUNC_12(&VAR_15, ((void*)0), ((void*)0), VAR_18);
    if (!VAR_15) {
        FUNC_21(VAR_10, "Could not create output context\n");
        VAR_19 = VAR_1;
        goto end;
    }

    VAR_23 = VAR_14->nb_streams;
    VAR_22 = FUNC_5(VAR_23, sizeof(*VAR_22));
    if (!VAR_22) {
        VAR_19 = FUNC_0(VAR_9);
        goto end;
    }

    VAR_13 = VAR_15->oformat;

    for (VAR_20 = 0; VAR_20 < VAR_14->nb_streams; VAR_20++) {
        AVStream *VAR_24;
        AVStream *VAR_25 = VAR_14->streams[VAR_20];
        AVCodecParameters *VAR_26 = VAR_25->codecpar;

        if (VAR_26->codec_type != VAR_4 &&
            VAR_26->codec_type != VAR_6 &&
            VAR_26->codec_type != VAR_5) {
            VAR_22[VAR_20] = -1;
            continue;
        }

        VAR_22[VAR_20] = VAR_21++;

        VAR_24 = FUNC_16(VAR_15, ((void*)0));
        if (!VAR_24) {
            FUNC_21(VAR_10, "Failed allocating output stream\n");
            VAR_19 = VAR_1;
            goto end;
        }

        VAR_19 = FUNC_11(VAR_24->codecpar, VAR_26);
        if (VAR_19 < 0) {
            FUNC_21(VAR_10, "Failed to copy codec parameters\n");
            goto end;
        }
        VAR_24->codecpar->codec_tag = 0;
    }
    FUNC_1(VAR_15, 0, VAR_18, 1);

    if (!(VAR_13->flags & VAR_2)) {
        VAR_19 = FUNC_20(&VAR_15->pb, VAR_18, VAR_3);
        if (VAR_19 < 0) {
            FUNC_21(VAR_10, "Could not open output file '%s'", VAR_18);
            goto end;
        }
    }

    VAR_19 = FUNC_18(VAR_15, ((void*)0));
    if (VAR_19 < 0) {
        FUNC_21(VAR_10, "Error occurred when opening output file\n");
        goto end;
    }

    while (1) {
        AVStream *VAR_27, *VAR_28;

        VAR_19 = FUNC_7(VAR_14, &VAR_16);
        if (VAR_19 < 0)
            break;

        VAR_27 = VAR_14->streams[VAR_16.stream_index];
        if (VAR_16.stream_index >= VAR_23 ||
            VAR_22[VAR_16.stream_index] < 0) {
            FUNC_6(&VAR_16);
            continue;
        }

        VAR_16.stream_index = VAR_22[VAR_16.stream_index];
        VAR_28 = VAR_15->streams[VAR_16.stream_index];
        FUNC_22(VAR_14, &VAR_16, "in");


        VAR_16.pts = FUNC_9(VAR_16.pts, VAR_27->time_base, VAR_28->time_base, VAR_7|VAR_8);
        VAR_16.dts = FUNC_9(VAR_16.dts, VAR_27->time_base, VAR_28->time_base, VAR_7|VAR_8);
        VAR_16.duration = FUNC_8(VAR_16.duration, VAR_27->time_base, VAR_28->time_base);
        VAR_16.pos = -1;
        FUNC_22(VAR_15, &VAR_16, "out");

        VAR_19 = FUNC_4(VAR_15, &VAR_16);
        if (VAR_19 < 0) {
            FUNC_21(VAR_10, "Error muxing packet\n");
            break;
        }
        FUNC_6(&VAR_16);
    }

    FUNC_10(VAR_15);
end:

    FUNC_13(&VAR_14);


    if (VAR_15 && !(VAR_13->flags & VAR_2))
        FUNC_19(&VAR_15->pb);
    FUNC_15(VAR_15);

    FUNC_3(&VAR_22);

    if (VAR_19 < 0 && VAR_19 != VAR_0) {
        FUNC_21(VAR_10, "Error occurred: %s\n", FUNC_2(VAR_19));
        return 1;
    }

    return 0;
}
