
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_22__ {TYPE_6__** streams; TYPE_5__* priv_data; } ;
struct TYPE_21__ {int nb_index_entries; int skip_to_keyframe; TYPE_3__* index_entries; } ;
struct TYPE_16__ {int nb_elem; TYPE_4__* elem; } ;
struct TYPE_20__ {scalar_t__ cues_parsing_deferred; int skip_to_keyframe; int resync_pos; scalar_t__ done; int skip_to_timecode; TYPE_1__ tracks; } ;
struct TYPE_17__ {int buf_timecode; scalar_t__ sub_packet_cnt; scalar_t__ pkt_cnt; } ;
struct TYPE_19__ {scalar_t__ end_timecode; TYPE_2__ audio; } ;
struct TYPE_18__ {int pos; int timestamp; } ;
typedef TYPE_4__ MatroskaTrack ;
typedef TYPE_5__ MatroskaDemuxContext ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (TYPE_7__*,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, int VAR_3,
                              int64_t VAR_4, int VAR_5)
{
    MatroskaDemuxContext *VAR_6 = VAR_2->priv_data;
    MatroskaTrack *VAR_7 = ((void*)0);
    AVStream *VAR_8 = VAR_2->streams[VAR_3];
    int VAR_9, VAR_10;


    if (VAR_6->cues_parsing_deferred > 0) {
        VAR_6->cues_parsing_deferred = 0;
        FUNC_5(VAR_6);
    }

    if (!VAR_8->nb_index_entries)
        goto err;
    VAR_4 = FUNC_0(VAR_4, VAR_8->index_entries[0].timestamp);

    if ((VAR_10 = FUNC_1(VAR_8, VAR_4, VAR_5)) < 0 || VAR_10 == VAR_8->nb_index_entries - 1) {
        FUNC_6(VAR_6, 0, VAR_8->index_entries[VAR_8->nb_index_entries - 1].pos);
        while ((VAR_10 = FUNC_1(VAR_8, VAR_4, VAR_5)) < 0 || VAR_10 == VAR_8->nb_index_entries - 1) {
            FUNC_3(VAR_6);
            if (FUNC_4(VAR_6) < 0)
                break;
        }
    }

    FUNC_3(VAR_6);
    if (VAR_10 < 0 || (VAR_6->cues_parsing_deferred < 0 && VAR_10 == VAR_8->nb_index_entries - 1))
        goto err;

    VAR_7 = VAR_6->tracks.elem;
    for (VAR_9 = 0; VAR_9 < VAR_6->tracks.nb_elem; VAR_9++) {
        VAR_7[VAR_9].audio.pkt_cnt = 0;
        VAR_7[VAR_9].audio.sub_packet_cnt = 0;
        VAR_7[VAR_9].audio.buf_timecode = VAR_1;
        VAR_7[VAR_9].end_timecode = 0;
    }


    FUNC_6(VAR_6, 0, VAR_8->index_entries[VAR_10].pos);
    if (VAR_5 & VAR_0) {
        VAR_8->skip_to_keyframe = 0;
        VAR_6->skip_to_timecode = VAR_4;
    } else {
        VAR_8->skip_to_keyframe = 1;
        VAR_6->skip_to_timecode = VAR_8->index_entries[VAR_10].timestamp;
    }
    VAR_6->skip_to_keyframe = 1;
    VAR_6->done = 0;
    FUNC_2(VAR_2, VAR_8, VAR_8->index_entries[VAR_10].timestamp);
    return 0;
err:


    FUNC_6(VAR_6, 0, -1);
    VAR_6->resync_pos = -1;
    FUNC_3(VAR_6);
    VAR_8->skip_to_keyframe =
    VAR_6->skip_to_keyframe = 0;
    VAR_6->done = 0;
    return -1;
}
