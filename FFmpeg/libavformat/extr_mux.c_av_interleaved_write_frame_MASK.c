
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_28__ {int debug; TYPE_2__* pb; TYPE_3__** streams; TYPE_1__* oformat; } ;
struct TYPE_27__ {size_t stream_index; scalar_t__ dts; scalar_t__ pts; int size; } ;
struct TYPE_26__ {int nb_frames; } ;
struct TYPE_25__ {int error; } ;
struct TYPE_24__ {int flags; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*) ;

int FUNC_11(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    int VAR_8, VAR_9 = 0;

    VAR_8 = FUNC_9(VAR_6, VAR_7);
    if (VAR_8 < 0)
        goto fail;

    if (VAR_7) {
        AVStream *VAR_10 = VAR_6->streams[VAR_7->stream_index];

        VAR_8 = FUNC_6(VAR_6, VAR_7);
        if (VAR_8 == 0)
            return 0;
        else if (VAR_8 < 0)
            goto fail;

        if (VAR_6->debug & VAR_5)
            FUNC_2(VAR_6, VAR_1, "av_interleaved_write_frame size:%d dts:%s pts:%s\n",
                VAR_7->size, FUNC_4(VAR_7->dts), FUNC_4(VAR_7->pts));






        if (VAR_7->dts == VAR_3 && !(VAR_6->oformat->flags & VAR_0)) {
            VAR_8 = FUNC_0(VAR_4);
            goto fail;
        }
    } else {
        FUNC_2(VAR_6, VAR_2, "av_interleaved_write_frame FLUSH\n");
        VAR_9 = 1;
    }

    for (;; ) {
        AVPacket VAR_11;
        int VAR_12 = FUNC_7(VAR_6, &VAR_11, VAR_7, VAR_9);
        if (VAR_7) {
            FUNC_8(VAR_7, 0, sizeof(*VAR_7));
            FUNC_1(VAR_7);
            VAR_7 = ((void*)0);
        }
        if (VAR_12 <= 0)
            return VAR_12;

        VAR_12 = FUNC_10(VAR_6, &VAR_11);
        if (VAR_12 >= 0)
            VAR_6->streams[VAR_11.stream_index]->nb_frames++;

        FUNC_3(&VAR_11);

        if (VAR_12 < 0)
            return VAR_12;
        if(VAR_6->pb && VAR_6->pb->error)
            return VAR_6->pb->error;
    }
fail:
    FUNC_3(VAR_7);
    return VAR_8;
}
