
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_16__ {int flags; int stream_index; } ;
struct TYPE_15__ {TYPE_5__* avf; } ;
struct TYPE_14__ {scalar_t__ drop_until_keyframe; TYPE_5__* avf; } ;
struct TYPE_13__ {int time_base; } ;
typedef TYPE_2__ FifoThreadContext ;
typedef TYPE_3__ FifoContext ;
typedef int AVRational ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(FifoThreadContext *VAR_2, AVPacket *VAR_3)
{
    AVFormatContext *VAR_4 = VAR_2->avf;
    FifoContext *VAR_5 = VAR_4->priv_data;
    AVFormatContext *VAR_6 = VAR_5->avf;
    AVRational VAR_7, VAR_8;
    int VAR_9, VAR_10;

    if (VAR_2->drop_until_keyframe) {
        if (VAR_3->flags & VAR_1) {
            VAR_2->drop_until_keyframe = 0;
            FUNC_0(VAR_4, VAR_0, "Keyframe received, recovering...\n");
        } else {
            FUNC_0(VAR_4, VAR_0, "Dropping non-keyframe packet\n");
            FUNC_2(VAR_3);
            return 0;
        }
    }

    VAR_10 = VAR_3->stream_index;
    VAR_7 = VAR_4->streams[VAR_10]->time_base;
    VAR_8 = VAR_6->streams[VAR_10]->time_base;
    FUNC_1(VAR_3, VAR_7, VAR_8);

    VAR_9 = FUNC_3(VAR_6, VAR_3);
    if (VAR_9 >= 0)
        FUNC_2(VAR_3);
    return VAR_9;
}
