
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_22__ {int nb_streams; int ** streams; } ;
struct TYPE_21__ {int nb_streams; int flags; int chapter_track; scalar_t__ mode; TYPE_2__* tracks; int iods_skip; int time; } ;
struct TYPE_20__ {scalar_t__ entry; scalar_t__ tref_tag; scalar_t__ tag; size_t src_track; int timescale; int track_duration; int track_id; int tref_id; int st; TYPE_1__* par; int time; } ;
struct TYPE_19__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,int *,TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_12 (int *,TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (int *,TYPE_4__*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(AVIOContext *VAR_5, MOVMuxContext *VAR_6,
                              AVFormatContext *VAR_7)
{
    int VAR_8;
    int64_t VAR_9 = FUNC_3(VAR_5);
    FUNC_4(VAR_5, 0);
    FUNC_6(VAR_5, "moov");

    FUNC_7(VAR_6, VAR_7);

    for (VAR_8 = 0; VAR_8 < VAR_6->nb_streams; VAR_8++) {
        if (VAR_6->tracks[VAR_8].entry <= 0 && !(VAR_6->flags & VAR_2))
            continue;

        VAR_6->tracks[VAR_8].time = VAR_6->time;

        if (VAR_6->tracks[VAR_8].entry)
            FUNC_5(&VAR_6->tracks[VAR_8]);
    }

    if (VAR_6->chapter_track)
        for (VAR_8 = 0; VAR_8 < VAR_7->nb_streams; VAR_8++) {
            VAR_6->tracks[VAR_8].tref_tag = FUNC_0('c','h','a','p');
            VAR_6->tracks[VAR_8].tref_id = VAR_6->tracks[VAR_6->chapter_track].track_id;
        }
    for (VAR_8 = 0; VAR_8 < VAR_6->nb_streams; VAR_8++) {
        MOVTrack *VAR_10 = &VAR_6->tracks[VAR_8];
        if (VAR_10->tag == FUNC_0('r','t','p',' ')) {
            VAR_10->tref_tag = FUNC_0('h','i','n','t');
            VAR_10->tref_id = VAR_6->tracks[VAR_10->src_track].track_id;
        } else if (VAR_10->par->codec_type == VAR_0) {
            int * VAR_11, VAR_12;
            VAR_11 = (int*)FUNC_2(VAR_10->st,
                                                     VAR_1,
                                                     &VAR_12);
            if (VAR_11 != ((void*)0) && VAR_12 == sizeof(int)) {
                if (*VAR_11 >= 0 && *VAR_11 < VAR_6->nb_streams) {
                    VAR_10->tref_tag = FUNC_0('f','a','l','l');
                    VAR_10->tref_id = VAR_6->tracks[*VAR_11].track_id;
                }
            }
        }
    }
    for (VAR_8 = 0; VAR_8 < VAR_6->nb_streams; VAR_8++) {
        if (VAR_6->tracks[VAR_8].tag == FUNC_0('t','m','c','d')) {
            int VAR_13 = VAR_6->tracks[VAR_8].src_track;
            VAR_6->tracks[VAR_13].tref_tag = VAR_6->tracks[VAR_8].tag;
            VAR_6->tracks[VAR_13].tref_id = VAR_6->tracks[VAR_8].track_id;

            VAR_6->tracks[VAR_8].track_duration = FUNC_1(VAR_6->tracks[VAR_13].track_duration,
                                                       VAR_6->tracks[VAR_8].timescale,
                                                       VAR_6->tracks[VAR_13].timescale);
        }
    }

    FUNC_10(VAR_5, VAR_6);
    if (VAR_6->mode != VAR_3 && !VAR_6->iods_skip)
        FUNC_8(VAR_5, VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_6->nb_streams; VAR_8++) {
        if (VAR_6->tracks[VAR_8].entry > 0 || VAR_6->flags & VAR_2) {
            int VAR_14 = FUNC_11(VAR_7, VAR_5, VAR_6, &(VAR_6->tracks[VAR_8]), VAR_8 < VAR_7->nb_streams ? VAR_7->streams[VAR_8] : ((void*)0));
            if (VAR_14 < 0)
                return VAR_14;
        }
    }
    if (VAR_6->flags & VAR_2)
        FUNC_9(VAR_5, VAR_6);

    if (VAR_6->mode == VAR_4)
        FUNC_13(VAR_5, VAR_7);
    else
        FUNC_12(VAR_5, VAR_6, VAR_7);

    return FUNC_14(VAR_5, VAR_9);
}
