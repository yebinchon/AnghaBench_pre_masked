
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int int64_t ;
struct TYPE_19__ {TYPE_4__* streams; } ;
struct TYPE_18__ {int packet_pos; } ;
struct TYPE_17__ {int nb_streams; int packet_size; TYPE_11__** streams; int pb; TYPE_1__* internal; TYPE_5__* priv_data; } ;
struct TYPE_16__ {int dts; int flags; int stream_index; int pos; int size; } ;
struct TYPE_15__ {int data_offset; } ;
struct TYPE_14__ {size_t id; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFStream ;
typedef TYPE_5__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_11__*,int,int,int ,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int64_t FUNC_8(AVFormatContext *VAR_6, int VAR_7,
                            int64_t *VAR_8, int64_t VAR_9)
{
    ASFContext *VAR_10 = VAR_6->priv_data;
    AVPacket VAR_11, *VAR_12 = &VAR_11;
    ASFStream *VAR_13;
    int64_t VAR_14;
    int64_t VAR_15 = *VAR_8;
    int VAR_16;
    int64_t VAR_17[VAR_0];

    for (VAR_16 = 0; VAR_16 < VAR_6->nb_streams; VAR_16++)
        VAR_17[VAR_16] = VAR_15;

    if (VAR_6->packet_size > 0)
        VAR_15 = (VAR_15 + VAR_6->packet_size - 1 - VAR_6->internal->data_offset) /
              VAR_6->packet_size * VAR_6->packet_size +
              VAR_6->internal->data_offset;
    *VAR_8 = VAR_15;
    if (FUNC_6(VAR_6->pb, VAR_15, VAR_5) < 0)
        return VAR_3;

    FUNC_7(VAR_6);
    FUNC_0(VAR_6);
    for (;;) {
        if (FUNC_5(VAR_6, VAR_12) < 0) {
            FUNC_3(VAR_6, VAR_2, "asf_read_pts failed\n");
            return VAR_3;
        }

        VAR_14 = VAR_12->dts;

        if (VAR_12->flags & VAR_4) {
            VAR_16 = VAR_12->stream_index;

            VAR_13 = &VAR_10->streams[VAR_6->streams[VAR_16]->id];


            VAR_15 = VAR_13->packet_pos;
            FUNC_2(VAR_12->pos == VAR_13->packet_pos);

            FUNC_1(VAR_6->streams[VAR_16], VAR_15, VAR_14, VAR_12->size,
                               VAR_15 - VAR_17[VAR_16] + 1, VAR_1);
            VAR_17[VAR_16] = VAR_13->packet_pos + 1;

            if (VAR_12->stream_index == VAR_7) {
                FUNC_4(VAR_12);
                break;
            }
        }
        FUNC_4(VAR_12);
    }

    *VAR_8 = VAR_15;
    return VAR_14;
}
