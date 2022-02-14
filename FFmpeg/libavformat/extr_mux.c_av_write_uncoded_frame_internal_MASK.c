
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {TYPE_11__* oformat; } ;
struct TYPE_14__ {int pkt_duration; int pts; } ;
struct TYPE_13__ {int stream_index; int flags; int duration; int dts; int pts; int size; void* data; } ;
struct TYPE_12__ {int write_uncoded_frame; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, int VAR_4,
                                           AVFrame *VAR_5, int VAR_6)
{
    AVPacket VAR_7, *VAR_8;

    FUNC_1(VAR_3->oformat);
    if (!VAR_3->oformat->write_uncoded_frame)
        return FUNC_0(VAR_1);

    if (!VAR_5) {
        VAR_8 = ((void*)0);
    } else {
        VAR_8 = &VAR_7;
        FUNC_2(&VAR_7);
        VAR_7.data = (void *)VAR_5;
        VAR_7.size = VAR_2;
        VAR_7.pts =
        VAR_7.dts = VAR_5->pts;
        VAR_7.duration = VAR_5->pkt_duration;
        VAR_7.stream_index = VAR_4;
        VAR_7.flags |= VAR_0;
    }

    return VAR_6 ? FUNC_3(VAR_3, VAR_8) :
                         FUNC_4(VAR_3, VAR_8);
}
