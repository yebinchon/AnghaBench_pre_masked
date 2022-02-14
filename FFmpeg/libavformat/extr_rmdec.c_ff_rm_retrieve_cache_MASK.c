
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* priv_data; } ;
struct TYPE_19__ {int stream_index; scalar_t__ flags; scalar_t__ pts; int data; } ;
struct TYPE_18__ {int index; TYPE_2__* codecpar; } ;
struct TYPE_17__ {int audio_pkt_cnt; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_16__ {scalar_t__ deint_id; size_t sub_packet_cnt; int sub_packet_h; int audio_framesize; scalar_t__ audiotimestamp; TYPE_1__ pkt; int * sub_packet_lengths; } ;
struct TYPE_15__ {int block_align; } ;
typedef TYPE_3__ RMStream ;
typedef TYPE_4__ RMDemuxContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;

int
FUNC_4 (AVFormatContext *VAR_4, AVIOContext *VAR_5,
                      AVStream *VAR_6, RMStream *VAR_7, AVPacket *VAR_8)
{
    RMDemuxContext *VAR_9 = VAR_4->priv_data;
    int VAR_10;

    FUNC_0 (VAR_9->audio_pkt_cnt > 0);

    if (VAR_7->deint_id == VAR_2 ||
        VAR_7->deint_id == VAR_3) {
        VAR_10 = FUNC_1(VAR_5, VAR_8, VAR_7->sub_packet_lengths[VAR_7->sub_packet_cnt - VAR_9->audio_pkt_cnt]);
        if (VAR_10 < 0)
            return VAR_10;
    } else {
        VAR_10 = FUNC_2(VAR_8, VAR_6->codecpar->block_align);
        if (VAR_10 < 0)
            return VAR_10;
        FUNC_3(VAR_8->data, VAR_7->pkt.data + VAR_6->codecpar->block_align *
               (VAR_7->sub_packet_h * VAR_7->audio_framesize / VAR_6->codecpar->block_align - VAR_9->audio_pkt_cnt),
               VAR_6->codecpar->block_align);
    }
    VAR_9->audio_pkt_cnt--;
    if ((VAR_8->pts = VAR_7->audiotimestamp) != VAR_0) {
        VAR_7->audiotimestamp = VAR_0;
        VAR_8->flags = VAR_1;
    } else
        VAR_8->flags = 0;
    VAR_8->stream_index = VAR_6->index;

    return VAR_9->audio_pkt_cnt;
}
