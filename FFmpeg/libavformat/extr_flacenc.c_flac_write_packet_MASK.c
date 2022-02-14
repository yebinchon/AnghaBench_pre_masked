
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct AVFormatContext {TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_10__ {scalar_t__ stream_index; } ;
struct TYPE_9__ {int disposition; int nb_frames; int priv_data; } ;
struct TYPE_8__ {scalar_t__ audio_stream_idx; scalar_t__ waiting_pics; int queue_end; int queue; } ;
typedef TYPE_1__ FlacMuxerContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct AVFormatContext*,int ,char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *,TYPE_3__*,int ) ;
 int FUNC_3 (struct AVFormatContext*) ;
 int FUNC_4 (struct AVFormatContext*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    FlacMuxerContext *VAR_6 = VAR_4->priv_data;
    int VAR_7;

    if (VAR_5->stream_index == VAR_6->audio_stream_idx) {
        if (VAR_6->waiting_pics) {

            VAR_7 = FUNC_2(&VAR_6->queue, &VAR_6->queue_end, VAR_5, VAR_3);
            if (VAR_7 < 0) {
                FUNC_0(VAR_4, VAR_1, "Out of memory in packet queue; skipping attached pictures\n");
                VAR_6->waiting_pics = 0;
                VAR_7 = FUNC_3(VAR_4);
                if (VAR_7 < 0)
                    return VAR_7;
                return FUNC_4(VAR_4, VAR_5);
            }
        } else
            return FUNC_4(VAR_4, VAR_5);
    } else {
        AVStream *VAR_8 = VAR_4->streams[VAR_5->stream_index];

        if (!VAR_6->waiting_pics ||
            !(VAR_8->disposition & VAR_0))
            return 0;


        if (VAR_8->nb_frames == 1) {
            FUNC_0(VAR_4, VAR_2, "Got more than one picture in stream %d,"
                   " ignoring.\n", VAR_5->stream_index);
        }
        if (VAR_8->nb_frames >= 1)
            return 0;

        VAR_8->priv_data = FUNC_1(VAR_5);
        if (!VAR_8->priv_data)
            FUNC_0(VAR_4, VAR_1, "Out of memory queueing an attached picture; skipping\n");
        VAR_6->waiting_pics--;


        if (!VAR_6->waiting_pics &&
            (VAR_7 = FUNC_3(VAR_4)) < 0)
            return VAR_7;
    }

    return 0;
}
