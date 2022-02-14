
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_18__ {int stream_index; int pos; int pts; int * data; } ;
struct TYPE_17__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_16__ {int queue_end; int queue; int ctx; } ;
struct TYPE_14__ {int sub_packet_size; int coded_framesize; int sub_packet_h; int sub_packet_cnt; int frame_size; int pkt_cnt; int buf_timecode; int * buf; } ;
struct TYPE_15__ {TYPE_2__ audio; } ;
struct TYPE_13__ {int block_align; scalar_t__ codec_id; } ;
typedef TYPE_3__ MatroskaTrack ;
typedef TYPE_4__ MatroskaDemuxContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,int *,TYPE_6__*,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(MatroskaDemuxContext *VAR_6,
                                   MatroskaTrack *VAR_7, AVStream *VAR_8,
                                   uint8_t *VAR_9, int VAR_10, uint64_t VAR_11,
                                   int64_t VAR_12)
{
    int VAR_13 = VAR_8->codecpar->block_align;
    int VAR_14 = VAR_7->audio.sub_packet_size;
    int VAR_15 = VAR_7->audio.coded_framesize;
    int VAR_16 = VAR_7->audio.sub_packet_h;
    int VAR_17 = VAR_7->audio.sub_packet_cnt;
    int VAR_18 = VAR_7->audio.frame_size;
    int VAR_19;

    if (!VAR_7->audio.pkt_cnt) {
        if (VAR_7->audio.sub_packet_cnt == 0)
            VAR_7->audio.buf_timecode = VAR_11;
        if (VAR_8->codecpar->codec_id == VAR_1) {
            if (VAR_10 < VAR_15 * VAR_16 / 2) {
                FUNC_1(VAR_6->ctx, VAR_3,
                       "Corrupt int4 RM-style audio packet size\n");
                return VAR_0;
            }
            for (VAR_19 = 0; VAR_19 < VAR_16 / 2; VAR_19++)
                FUNC_6(VAR_7->audio.buf + VAR_19 * 2 * VAR_18 + VAR_17 * VAR_15,
                       VAR_9 + VAR_19 * VAR_15, VAR_15);
        } else if (VAR_8->codecpar->codec_id == VAR_2) {
            if (VAR_10 < VAR_18) {
                FUNC_1(VAR_6->ctx, VAR_3,
                       "Corrupt sipr RM-style audio packet size\n");
                return VAR_0;
            }
            FUNC_6(VAR_7->audio.buf + VAR_17 * VAR_18, VAR_9, VAR_18);
        } else {
            if (VAR_10 < VAR_14 * VAR_18 / VAR_14 || VAR_16<=0 || VAR_18%VAR_14) {
                FUNC_1(VAR_6->ctx, VAR_3,
                       "Corrupt generic RM-style audio packet size\n");
                return VAR_0;
            }
            for (VAR_19 = 0; VAR_19 < VAR_18 / VAR_14; VAR_19++)
                FUNC_6(VAR_7->audio.buf +
                       VAR_14 * (VAR_16 * VAR_19 + ((VAR_16 + 1) / 2) * (VAR_17 & 1) + (VAR_17 >> 1)),
                       VAR_9 + VAR_19 * VAR_14, VAR_14);
        }

        if (++VAR_7->audio.sub_packet_cnt >= VAR_16) {
            if (VAR_8->codecpar->codec_id == VAR_2)
                FUNC_5(VAR_7->audio.buf, VAR_16, VAR_18);
            VAR_7->audio.sub_packet_cnt = 0;
            VAR_7->audio.pkt_cnt = VAR_16 * VAR_18 / VAR_13;
        }
    }

    while (VAR_7->audio.pkt_cnt) {
        int VAR_20;
        AVPacket VAR_21, *VAR_22 = &VAR_21;

        VAR_20 = FUNC_2(VAR_22, VAR_13);
        if (VAR_20 < 0) {
            return VAR_20;
        }
        FUNC_6(VAR_22->data,
               VAR_7->audio.buf + VAR_13 * (VAR_16 * VAR_18 / VAR_13 - VAR_7->audio.pkt_cnt--),
               VAR_13);
        VAR_22->pts = VAR_7->audio.buf_timecode;
        VAR_7->audio.buf_timecode = VAR_4;
        VAR_22->pos = VAR_12;
        VAR_22->stream_index = VAR_8->index;
        VAR_20 = FUNC_4(&VAR_6->queue, &VAR_6->queue_end, VAR_22, 0);
        if (VAR_20 < 0) {
            FUNC_3(VAR_22);
            return FUNC_0(VAR_5);
        }
    }

    return 0;
}
