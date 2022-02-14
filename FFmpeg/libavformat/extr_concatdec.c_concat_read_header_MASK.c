
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_22__ {char* str; } ;
struct TYPE_21__ {int nb_streams; scalar_t__ duration; TYPE_1__** streams; int pb; TYPE_4__* priv_data; } ;
struct TYPE_20__ {int safe; int nb_files; int seekable; int stream_match_mode; TYPE_2__* files; } ;
struct TYPE_19__ {int metadata; scalar_t__ outpoint; scalar_t__ inpoint; scalar_t__ user_duration; } ;
struct TYPE_18__ {scalar_t__ start_time; scalar_t__ user_duration; scalar_t__ inpoint; scalar_t__ outpoint; scalar_t__ duration; } ;
struct TYPE_17__ {int id; } ;
typedef TYPE_3__ ConcatFile ;
typedef TYPE_4__ ConcatContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVBPrint ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_5__*,char*,TYPE_3__**,unsigned int*) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_5 (int *,char*,char*,char*,int ) ;
 int FUNC_6 (char**) ;
 char* FUNC_7 (char const**,int ) ;
 int FUNC_8 (TYPE_5__*,int ,char*,int,...) ;
 scalar_t__ FUNC_9 (scalar_t__*,char*,int) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_6__*) ;
 char* FUNC_13 (char**) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_9)
{
    ConcatContext *VAR_10 = VAR_9->priv_data;
    AVBPrint VAR_11;
    uint8_t *VAR_12, *VAR_13;
    int VAR_14 = 0, VAR_15;
    unsigned VAR_16 = 0;
    ConcatFile *VAR_17 = ((void*)0);
    int64_t VAR_18, VAR_19 = 0;

    FUNC_4(&VAR_11, 0, VAR_2);

    while ((VAR_18 = FUNC_12(VAR_9->pb, &VAR_11)) >= 0) {
        VAR_14++;
        VAR_12 = VAR_11.str;
        VAR_13 = FUNC_13(&VAR_12);
        if (!*VAR_13 || *VAR_13 == '#')
            continue;

        if (!FUNC_15(VAR_13, "file")) {
            char *VAR_20 = FUNC_7((const char **)&VAR_12, VAR_8);
            if (!VAR_20) {
                FUNC_8(VAR_9, VAR_3, "Line %d: filename required\n", VAR_14);
                FUNC_1(VAR_1);
            }
            if ((VAR_18 = FUNC_2(VAR_9, VAR_20, &VAR_17, &VAR_16)) < 0)
                goto fail;
        } else if (!FUNC_15(VAR_13, "duration") || !FUNC_15(VAR_13, "inpoint") || !FUNC_15(VAR_13, "outpoint")) {
            char *VAR_21 = FUNC_13(&VAR_12);
            int64_t VAR_22;
            if (!VAR_17) {
                FUNC_8(VAR_9, VAR_3, "Line %d: %s without file\n",
                       VAR_14, VAR_13);
                FUNC_1(VAR_1);
            }
            if ((VAR_18 = FUNC_9(&VAR_22, VAR_21, 1)) < 0) {
                FUNC_8(VAR_9, VAR_3, "Line %d: invalid %s '%s'\n",
                       VAR_14, VAR_13, VAR_21);
                goto fail;
            }
            if (!FUNC_15(VAR_13, "duration"))
                VAR_17->user_duration = VAR_22;
            else if (!FUNC_15(VAR_13, "inpoint"))
                VAR_17->inpoint = VAR_22;
            else if (!FUNC_15(VAR_13, "outpoint"))
                VAR_17->outpoint = VAR_22;
        } else if (!FUNC_15(VAR_13, "file_packet_metadata")) {
            char *VAR_23;
            if (!VAR_17) {
                FUNC_8(VAR_9, VAR_3, "Line %d: %s without file\n",
                       VAR_14, VAR_13);
                FUNC_1(VAR_1);
            }
            VAR_23 = FUNC_7((const char **)&VAR_12, VAR_8);
            if (!VAR_23) {
                FUNC_8(VAR_9, VAR_3, "Line %d: packet metadata required\n", VAR_14);
                FUNC_1(VAR_1);
            }
            if ((VAR_18 = FUNC_5(&VAR_17->metadata, VAR_23, "=", "", 0)) < 0) {
                FUNC_8(VAR_9, VAR_3, "Line %d: failed to parse metadata string\n", VAR_14);
                FUNC_6(&VAR_23);
                FUNC_1(VAR_1);
            }
            FUNC_6(&VAR_23);
        } else if (!FUNC_15(VAR_13, "stream")) {
            if (!FUNC_10(VAR_9, ((void*)0)))
                FUNC_1(FUNC_0(VAR_5));
        } else if (!FUNC_15(VAR_13, "exact_stream_id")) {
            if (!VAR_9->nb_streams) {
                FUNC_8(VAR_9, VAR_3, "Line %d: exact_stream_id without stream\n",
                       VAR_14);
                FUNC_1(VAR_1);
            }
            VAR_9->streams[VAR_9->nb_streams - 1]->id =
                FUNC_16(FUNC_13(&VAR_12), ((void*)0), 0);
        } else if (!FUNC_15(VAR_13, "ffconcat")) {
            char *VAR_24 = FUNC_13(&VAR_12);
            char *VAR_25 = FUNC_13(&VAR_12);
            if (FUNC_15(VAR_24, "version") || FUNC_15(VAR_25, "1.0")) {
                FUNC_8(VAR_9, VAR_3, "Line %d: invalid version\n", VAR_14);
                FUNC_1(VAR_1);
            }
            if (VAR_10->safe < 0)
                VAR_10->safe = 1;
        } else {
            FUNC_8(VAR_9, VAR_3, "Line %d: unknown keyword '%s'\n",
                   VAR_14, VAR_13);
            FUNC_1(VAR_1);
        }
    }
    if (VAR_18 != VAR_0 && VAR_18 < 0)
        goto fail;
    if (!VAR_10->nb_files)
        FUNC_1(VAR_1);

    for (VAR_15 = 0; VAR_15 < VAR_10->nb_files; VAR_15++) {
        if (VAR_10->files[VAR_15].start_time == VAR_4)
            VAR_10->files[VAR_15].start_time = VAR_19;
        else
            VAR_19 = VAR_10->files[VAR_15].start_time;
        if (VAR_10->files[VAR_15].user_duration == VAR_4) {
            if (VAR_10->files[VAR_15].inpoint == VAR_4 || VAR_10->files[VAR_15].outpoint == VAR_4)
                break;
            VAR_10->files[VAR_15].user_duration = VAR_10->files[VAR_15].outpoint - VAR_10->files[VAR_15].inpoint;
        }
        VAR_10->files[VAR_15].duration = VAR_10->files[VAR_15].user_duration;
        VAR_19 += VAR_10->files[VAR_15].user_duration;
    }
    if (VAR_15 == VAR_10->nb_files) {
        VAR_9->duration = VAR_19;
        VAR_10->seekable = 1;
    }

    VAR_10->stream_match_mode = VAR_9->nb_streams ? VAR_6 :
                                               VAR_7;
    if ((VAR_18 = FUNC_14(VAR_9, 0)) < 0)
        goto fail;
    FUNC_3(&VAR_11, ((void*)0));
    return 0;

fail:
    FUNC_3(&VAR_11, ((void*)0));
    FUNC_11(VAR_9);
    return VAR_18;
}
