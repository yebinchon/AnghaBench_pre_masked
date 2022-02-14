
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {TYPE_1__* internal; } ;
struct TYPE_20__ {int size; int data; } ;
struct TYPE_19__ {int buf_size; int * buf; } ;
struct TYPE_18__ {int request_probe; scalar_t__ probe_packets; int index; TYPE_2__* codecpar; TYPE_4__ probe_data; } ;
struct TYPE_17__ {scalar_t__ codec_id; } ;
struct TYPE_16__ {scalar_t__ raw_packet_buffer_remaining_size; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVProbeData ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_6__*,int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_6__*,TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5, AVStream *VAR_6, const AVPacket *VAR_7)
{
    if (VAR_6->request_probe>0) {
        AVProbeData *VAR_8 = &VAR_6->probe_data;
        int VAR_9;
        FUNC_1(VAR_5, VAR_3, "probing stream %d pp:%d\n", VAR_6->index, VAR_6->probe_packets);
        --VAR_6->probe_packets;

        if (VAR_7) {
            uint8_t *VAR_10 = FUNC_3(VAR_8->buf, VAR_8->buf_size+VAR_7->size+VAR_0);
            if (!VAR_10) {
                FUNC_1(VAR_5, VAR_4,
                       "Failed to reallocate probe buffer for stream %d\n",
                       VAR_6->index);
                goto no_packet;
            }
            VAR_8->buf = VAR_10;
            FUNC_5(VAR_8->buf + VAR_8->buf_size, VAR_7->data, VAR_7->size);
            VAR_8->buf_size += VAR_7->size;
            FUNC_6(VAR_8->buf + VAR_8->buf_size, 0, VAR_0);
        } else {
no_packet:
            VAR_6->probe_packets = 0;
            if (!VAR_8->buf_size) {
                FUNC_1(VAR_5, VAR_4,
                       "nothing to probe for stream %d\n", VAR_6->index);
            }
        }

        VAR_9= VAR_5->internal->raw_packet_buffer_remaining_size <= 0
                || VAR_6->probe_packets<= 0;

        if (VAR_9 || FUNC_2(VAR_8->buf_size) != FUNC_2(VAR_8->buf_size - VAR_7->size)) {
            int VAR_11 = FUNC_7(VAR_5, VAR_6, VAR_8);
            if ( (VAR_6->codecpar->codec_id != VAR_2 && VAR_11 > VAR_1)
                || VAR_9) {
                VAR_8->buf_size = 0;
                FUNC_0(&VAR_8->buf);
                VAR_6->request_probe = -1;
                if (VAR_6->codecpar->codec_id != VAR_2) {
                    FUNC_1(VAR_5, VAR_3, "probed stream %d\n", VAR_6->index);
                } else
                    FUNC_1(VAR_5, VAR_4, "probed stream %d failed\n", VAR_6->index);
            }
            FUNC_4(VAR_5, VAR_6);
        }
    }
    return 0;
}
