
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;


struct TYPE_28__ {scalar_t__ key; } ;
struct TYPE_27__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_26__ {int index; TYPE_1__* codec; int avg_frame_rate; int time_base; TYPE_15__* codecpar; } ;
struct TYPE_25__ {int nb_streams; TYPE_5__* fmt_ctx; TYPE_2__* streams; } ;
struct TYPE_24__ {TYPE_14__* dec_ctx; TYPE_4__* st; } ;
struct TYPE_23__ {int coded_height; int coded_width; } ;
struct TYPE_22__ {scalar_t__ codec_id; } ;
struct TYPE_21__ {int coded_height; int coded_width; int framerate; int pkt_timebase; } ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ InputFile ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int **) ;
 TYPE_6__* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int **,char*,char*,int ) ;
 int FUNC_4 (TYPE_5__*,int ,char const*,int ) ;
 int FUNC_5 (int ***) ;
 int FUNC_6 (int *,int ,char*,scalar_t__,...) ;
 TYPE_2__* FUNC_7 (int,int) ;
 TYPE_14__* FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_14__*,int *,int **) ;
 int FUNC_11 (TYPE_14__*,TYPE_15__*) ;
 TYPE_5__* FUNC_12 () ;
 int FUNC_13 (TYPE_5__*,int **) ;
 int FUNC_14 (TYPE_5__**,char const*,int ,int **) ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int * FUNC_17 (int *,scalar_t__,TYPE_5__*,TYPE_4__*,int *) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_18 (char const*,int) ;
 int ** FUNC_19 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_20(InputFile *VAR_13, const char *VAR_14)
{
    int VAR_15, VAR_16;
    AVFormatContext *VAR_17 = ((void*)0);
    AVDictionaryEntry *VAR_18;
    int VAR_19 = 0;

    VAR_17 = FUNC_12();
    if (!VAR_17) {
        FUNC_18(VAR_14, FUNC_0(VAR_7));
        FUNC_16(1);
    }

    if (!FUNC_2(VAR_11, "scan_all_pmts", ((void*)0), VAR_4)) {
        FUNC_3(&VAR_11, "scan_all_pmts", "1", VAR_2);
        VAR_19 = 1;
    }
    if ((VAR_15 = FUNC_14(&VAR_17, VAR_14,
                                   VAR_12, &VAR_11)) < 0) {
        FUNC_18(VAR_14, VAR_15);
        return VAR_15;
    }
    VAR_13->fmt_ctx = VAR_17;
    if (VAR_19)
        FUNC_3(&VAR_11, "scan_all_pmts", ((void*)0), VAR_4);
    if ((VAR_18 = FUNC_2(VAR_11, "", ((void*)0), VAR_3))) {
        FUNC_6(((void*)0), VAR_5, "Option %s not found.\n", VAR_18->key);
        return VAR_0;
    }

    if (VAR_10) {
        AVDictionary **VAR_20 = FUNC_19(VAR_17, VAR_8);
        int VAR_21 = VAR_17->nb_streams;

        VAR_15 = FUNC_13(VAR_17, VAR_20);

        for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++)
            FUNC_1(&VAR_20[VAR_16]);
        FUNC_5(&VAR_20);

        if (VAR_15 < 0) {
            FUNC_18(VAR_14, VAR_15);
            return VAR_15;
        }
    }

    FUNC_4(VAR_17, 0, VAR_14, 0);

    VAR_13->streams = FUNC_7(VAR_17->nb_streams,
                                      sizeof(*VAR_13->streams));
    if (!VAR_13->streams)
        FUNC_15(1);
    VAR_13->nb_streams = VAR_17->nb_streams;


    for (VAR_16 = 0; VAR_16 < VAR_17->nb_streams; VAR_16++) {
        InputStream *VAR_22 = &VAR_13->streams[VAR_16];
        AVStream *VAR_23 = VAR_17->streams[VAR_16];
        AVCodec *VAR_24;

        VAR_22->st = VAR_23;

        if (VAR_23->codecpar->codec_id == VAR_1) {
            FUNC_6(((void*)0), VAR_6,
                   "Failed to probe codec for input stream %d\n",
                    VAR_23->index);
            continue;
        }

        VAR_24 = FUNC_9(VAR_23->codecpar->codec_id);
        if (!VAR_24) {
            FUNC_6(((void*)0), VAR_6,
                    "Unsupported codec with id %d for input stream %d\n",
                    VAR_23->codecpar->codec_id, VAR_23->index);
            continue;
        }
        {
            AVDictionary *VAR_25 = FUNC_17(VAR_8, VAR_23->codecpar->codec_id,
                                                   VAR_17, VAR_23, VAR_24);

            VAR_22->dec_ctx = FUNC_8(VAR_24);
            if (!VAR_22->dec_ctx)
                FUNC_15(1);

            VAR_15 = FUNC_11(VAR_22->dec_ctx, VAR_23->codecpar);
            if (VAR_15 < 0)
                FUNC_15(1);

            if (VAR_9) {



                FUNC_3(&VAR_8, "threads", "1", 0);
            }

            VAR_22->dec_ctx->pkt_timebase = VAR_23->time_base;
            VAR_22->dec_ctx->framerate = VAR_23->avg_frame_rate;





            if (FUNC_10(VAR_22->dec_ctx, VAR_24, &VAR_25) < 0) {
                FUNC_6(((void*)0), VAR_6, "Could not open codec for input stream %d\n",
                       VAR_23->index);
                FUNC_15(1);
            }

            if ((VAR_18 = FUNC_2(VAR_25, "", ((void*)0), VAR_3))) {
                FUNC_6(((void*)0), VAR_5, "Option %s for input stream %d not found\n",
                       VAR_18->key, VAR_23->index);
                return VAR_0;
            }
        }
    }

    VAR_13->fmt_ctx = VAR_17;
    return 0;
}
