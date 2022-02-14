
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_16__ {size_t stream_index; } ;
struct TYPE_15__ {size_t audio_stream_idx; scalar_t__ pics_to_write; int id3; int queue_end; int queue; } ;
struct TYPE_14__ {int nb_frames; } ;
typedef TYPE_2__ MP3Context ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    MP3Context *VAR_4 = VAR_2->priv_data;

    if (VAR_3->stream_index == VAR_4->audio_stream_idx) {
        if (VAR_4->pics_to_write) {

            int VAR_5 = FUNC_2(&VAR_4->queue, &VAR_4->queue_end, VAR_3, VAR_1);

            if (VAR_5 < 0) {
                FUNC_0(VAR_2, VAR_0, "Not enough memory to buffer audio. Skipping picture streams\n");
                VAR_4->pics_to_write = 0;
                FUNC_3(VAR_2);
                return FUNC_4(VAR_2, VAR_3);
            }
        } else
            return FUNC_4(VAR_2, VAR_3);
    } else {
        int VAR_6;


        if (VAR_2->streams[VAR_3->stream_index]->nb_frames == 1) {
            FUNC_0(VAR_2, VAR_0, "Got more than one picture in stream %d,"
                   " ignoring.\n", VAR_3->stream_index);
        }
        if (!VAR_4->pics_to_write || VAR_2->streams[VAR_3->stream_index]->nb_frames >= 1)
            return 0;

        if ((VAR_6 = FUNC_1(VAR_2, &VAR_4->id3, VAR_3)) < 0)
            return VAR_6;
        VAR_4->pics_to_write--;


        if (!VAR_4->pics_to_write &&
            (VAR_6 = FUNC_3(VAR_2)) < 0)
            return VAR_6;
    }

    return 0;
}
