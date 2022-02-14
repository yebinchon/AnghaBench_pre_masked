
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_9__ {int track_ids_ok; int nb_streams; int flags; TYPE_2__* tracks; scalar_t__ use_stream_ids_as_track_ids; } ;
struct TYPE_8__ {scalar_t__ entry; int track_id; } ;
struct TYPE_7__ {int id; } ;
typedef TYPE_3__ MOVMuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(MOVMuxContext *VAR_1, AVFormatContext *VAR_2)
{
    int VAR_3;

    if (VAR_1->track_ids_ok)
        return 0;

    if (VAR_1->use_stream_ids_as_track_ids) {
        int VAR_4 = 0;
        for (VAR_3 = 0; VAR_3 < VAR_2->nb_streams; VAR_3++) {
            if (VAR_2->streams[VAR_3]->id > VAR_4)
                VAR_4 = VAR_2->streams[VAR_3]->id;
        }

        for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
            if (VAR_1->tracks[VAR_3].entry <= 0 && !(VAR_1->flags & VAR_0))
                continue;

            VAR_1->tracks[VAR_3].track_id = VAR_3 >= VAR_2->nb_streams ? ++VAR_4 : VAR_2->streams[VAR_3]->id;
        }
    } else {
        for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
            if (VAR_1->tracks[VAR_3].entry <= 0 && !(VAR_1->flags & VAR_0))
                continue;

            VAR_1->tracks[VAR_3].track_id = VAR_3 + 1;
        }
    }

    VAR_1->track_ids_ok = 1;

    return 0;
}
