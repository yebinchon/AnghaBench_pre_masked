
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct TYPE_22__ {TYPE_14__** streams; TYPE_2__* pb; TYPE_1__* oformat; } ;
struct TYPE_21__ {size_t stream_index; } ;
struct TYPE_20__ {int error; } ;
struct TYPE_19__ {int flags; int (* write_packet ) (TYPE_4__*,int *) ;} ;
struct TYPE_18__ {int nb_frames; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_14__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

int FUNC_6(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_3(VAR_2, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;

    if (!VAR_3) {
        if (VAR_2->oformat->flags & VAR_0) {
            VAR_4 = VAR_2->oformat->write_packet(VAR_2, ((void*)0));
            FUNC_2(VAR_2);
            if (VAR_4 >= 0 && VAR_2->pb && VAR_2->pb->error < 0)
                VAR_4 = VAR_2->pb->error;
            return VAR_4;
        }
        return 1;
    }

    VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 <= 0)
        return VAR_4;
    VAR_4 = FUNC_5(VAR_2, VAR_3);
    if (VAR_4 >= 0 && VAR_2->pb && VAR_2->pb->error < 0)
        VAR_4 = VAR_2->pb->error;

    if (VAR_4 >= 0)
        VAR_2->streams[VAR_3->stream_index]->nb_frames++;
    return VAR_4;
}
