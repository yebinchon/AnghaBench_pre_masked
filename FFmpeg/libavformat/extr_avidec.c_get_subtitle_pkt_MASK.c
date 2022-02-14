
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_11__ {int * data; int stream_index; int dts; } ;
struct TYPE_12__ {TYPE_2__ sub_pkt; int sub_ctx; int frame_offset; } ;
struct TYPE_10__ {scalar_t__ discard; int index; TYPE_3__* priv_data; int time_base; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVIStream ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static AVStream *FUNC_2(AVFormatContext *VAR_3, AVStream *VAR_4,
                                  AVPacket *VAR_5)
{
    AVIStream *VAR_6, *VAR_7 = VAR_4->priv_data;
    int64_t VAR_8, VAR_9, VAR_10 = VAR_2;
    AVStream *VAR_11, *VAR_12 = ((void*)0);
    int VAR_13;

    VAR_9 = FUNC_0(VAR_7->frame_offset, VAR_4->time_base,
                           VAR_1);

    for (VAR_13 = 0; VAR_13 < VAR_3->nb_streams; VAR_13++) {
        VAR_11 = VAR_3->streams[VAR_13];
        VAR_6 = VAR_11->priv_data;
        if (VAR_11->discard < VAR_0 && VAR_6 && VAR_6->sub_pkt.data) {
            VAR_8 = FUNC_0(VAR_6->sub_pkt.dts, VAR_11->time_base, VAR_1);
            if (VAR_8 <= VAR_9 && VAR_8 < VAR_10) {
                VAR_10 = VAR_8;
                VAR_12 = VAR_11;
            }
        }
    }

    if (VAR_12) {
        VAR_6 = VAR_12->priv_data;
        *VAR_5 = VAR_6->sub_pkt;
        VAR_5->stream_index = VAR_12->index;

        if (FUNC_1(VAR_6->sub_ctx, &VAR_6->sub_pkt) < 0)
            VAR_6->sub_pkt.data = ((void*)0);
    }
    return VAR_12;
}
