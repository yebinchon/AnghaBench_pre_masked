
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_20__ {scalar_t__ eof_reached; } ;
struct TYPE_19__ {int nb_frames; void* duration; TYPE_2__* priv_data; } ;
struct TYPE_18__ {TYPE_11__* fc; } ;
struct TYPE_17__ {unsigned int stts_count; int duration_for_fps; int nb_frames_for_fps; int track_end; TYPE_1__* stts_data; } ;
struct TYPE_16__ {unsigned int count; int duration; } ;
struct TYPE_15__ {int nb_streams; TYPE_4__** streams; } ;
typedef TYPE_1__ MOVStts ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (unsigned int,int) ;
 void* FUNC_2 (void*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,unsigned int*,unsigned int) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_11__*,int ,char*,...) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 void* FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_9(MOVContext *VAR_6, AVIOContext *VAR_7, MOVAtom VAR_8)
{
    AVStream *VAR_9;
    MOVStreamContext *VAR_10;
    unsigned int VAR_11, VAR_12, VAR_13 = 0;
    int64_t VAR_14=0;
    int64_t VAR_15=0;

    if (VAR_6->fc->nb_streams < 1)
        return 0;
    VAR_9 = VAR_6->fc->streams[VAR_6->fc->nb_streams-1];
    VAR_10 = VAR_9->priv_data;

    FUNC_6(VAR_7);
    FUNC_7(VAR_7);
    VAR_12 = FUNC_8(VAR_7);

    FUNC_5(VAR_6->fc, VAR_1, "track[%u].stts.entries = %u\n",
            VAR_6->fc->nb_streams-1, VAR_12);

    if (VAR_10->stts_data)
        FUNC_5(VAR_6->fc, VAR_2, "Duplicated STTS atom\n");
    FUNC_4(&VAR_10->stts_data);
    VAR_10->stts_count = 0;
    if (VAR_12 >= VAR_5 / sizeof(*VAR_10->stts_data))
        return FUNC_0(VAR_3);

    for (VAR_11 = 0; VAR_11 < VAR_12 && !VAR_7->eof_reached; VAR_11++) {
        int VAR_16;
        unsigned int VAR_17;
        unsigned int VAR_18 = FUNC_2(FUNC_1(VAR_11 + 1, 1024 * 1024), VAR_12);
        MOVStts *VAR_19 = FUNC_3(VAR_10->stts_data, &VAR_13,
                                             VAR_18 * sizeof(*VAR_10->stts_data));
        if (!VAR_19) {
            FUNC_4(&VAR_10->stts_data);
            VAR_10->stts_count = 0;
            return FUNC_0(VAR_3);
        }
        VAR_10->stts_count = VAR_18;
        VAR_10->stts_data = VAR_19;

        VAR_17=FUNC_8(VAR_7);
        VAR_16 = FUNC_8(VAR_7);

        VAR_10->stts_data[VAR_11].count= VAR_17;
        VAR_10->stts_data[VAR_11].duration= VAR_16;

        FUNC_5(VAR_6->fc, VAR_1, "sample_count=%d, sample_duration=%d\n",
                VAR_17, VAR_16);

        VAR_14+=(int64_t)VAR_16*(uint64_t)VAR_17;
        VAR_15+=VAR_17;
    }

    VAR_10->stts_count = VAR_11;

    if (VAR_14 > 0 &&
        VAR_14 <= VAR_4 - VAR_10->duration_for_fps &&
        VAR_15 <= VAR_5 - VAR_10->nb_frames_for_fps
    ) {
        VAR_10->duration_for_fps += VAR_14;
        VAR_10->nb_frames_for_fps += VAR_15;
    }

    if (VAR_7->eof_reached) {
        FUNC_5(VAR_6->fc, VAR_2, "reached eof, corrupted STTS atom\n");
        return VAR_0;
    }

    VAR_9->nb_frames= VAR_15;
    if (VAR_14)
        VAR_9->duration= FUNC_2(VAR_9->duration, VAR_14);
    VAR_10->track_end = VAR_14;
    return 0;
}
