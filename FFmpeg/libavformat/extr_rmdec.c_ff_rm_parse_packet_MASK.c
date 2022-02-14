
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_27__ {TYPE_4__* priv_data; } ;
struct TYPE_26__ {int flags; void* pts; int stream_index; } ;
struct TYPE_25__ {TYPE_2__* codecpar; int index; int id; } ;
struct TYPE_24__ {int audio_pkt_cnt; int audio_stream_num; int current_stream; } ;
struct TYPE_21__ {int data; } ;
struct TYPE_23__ {int deint_id; int sub_packet_size; int coded_framesize; int sub_packet_h; int sub_packet_cnt; int audio_framesize; int* sub_packet_lengths; void* audiotimestamp; TYPE_1__ pkt; } ;
struct TYPE_22__ {scalar_t__ codec_type; int block_align; } ;
typedef TYPE_3__ RMStream ;
typedef TYPE_4__ RMDemuxContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_6__*,int) ;
 int FUNC_1 (TYPE_7__*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_7__*,int *,int ,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_7__*,int *,TYPE_4__*,TYPE_3__*,TYPE_6__*,int,int*,void**) ;

int
FUNC_7 (AVFormatContext *VAR_7, AVIOContext *VAR_8,
                    AVStream *VAR_9, RMStream *VAR_10, int VAR_11, AVPacket *VAR_12,
                    int *VAR_13, int VAR_14, int64_t VAR_15)
{
    RMDemuxContext *VAR_16 = VAR_7->priv_data;
    int VAR_17;

    if (VAR_9->codecpar->codec_type == VAR_2) {
        VAR_16->current_stream= VAR_9->id;
        VAR_17 = FUNC_6(VAR_7, VAR_8, VAR_16, VAR_10, VAR_12, VAR_11, VAR_13, &VAR_15);
        if(VAR_17)
            return VAR_17 < 0 ? VAR_17 : -1;
    } else if (VAR_9->codecpar->codec_type == VAR_1) {
        if ((VAR_10->deint_id == 130) ||
            (VAR_10->deint_id == 129) ||
            (VAR_10->deint_id == 128)) {
            int VAR_18;
            int VAR_19 = VAR_10->sub_packet_size;
            int VAR_20 = VAR_10->coded_framesize;
            int VAR_21 = VAR_10->sub_packet_h;
            int VAR_22 = VAR_10->sub_packet_cnt;
            int VAR_23 = VAR_10->audio_framesize;

            if (VAR_14 & 2)
                VAR_22 = VAR_10->sub_packet_cnt = 0;
            if (!VAR_22)
                VAR_10->audiotimestamp = VAR_15;

            switch (VAR_10->deint_id) {
                case 129:
                    for (VAR_18 = 0; VAR_18 < VAR_21/2; VAR_18++)
                        FUNC_4(VAR_7, VAR_8, VAR_10->pkt.data+VAR_18*2*VAR_23+VAR_22*VAR_20, VAR_20);
                    break;
                case 130:
                    for (VAR_18 = 0; VAR_18 < VAR_23/VAR_19; VAR_18++)
                        FUNC_4(VAR_7, VAR_8, VAR_10->pkt.data+VAR_19*(VAR_21*VAR_18+((VAR_21+1)/2)*(VAR_22&1)+(VAR_22>>1)), VAR_19);
                    break;
                case 128:
                    FUNC_4(VAR_7, VAR_8, VAR_10->pkt.data + VAR_22 * VAR_23, VAR_23);
                    break;
            }

            if (++(VAR_10->sub_packet_cnt) < VAR_21)
                return -1;
            if (VAR_10->deint_id == 128)
                FUNC_3(VAR_10->pkt.data, VAR_21, VAR_23);

             VAR_10->sub_packet_cnt = 0;
             VAR_16->audio_stream_num = VAR_9->index;
            if (VAR_9->codecpar->block_align <= 0) {
                FUNC_1(VAR_7, VAR_3, "Invalid block alignment %d\n", VAR_9->codecpar->block_align);
                return VAR_0;
            }
             VAR_16->audio_pkt_cnt = VAR_21 * VAR_23 / VAR_9->codecpar->block_align;
        } else if ((VAR_10->deint_id == VAR_5) ||
                   (VAR_10->deint_id == VAR_6)) {
            int VAR_24;
            VAR_16->audio_stream_num = VAR_9->index;
            VAR_10->sub_packet_cnt = (FUNC_2(VAR_8) & 0xf0) >> 4;
            if (VAR_10->sub_packet_cnt) {
                for (VAR_24 = 0; VAR_24 < VAR_10->sub_packet_cnt; VAR_24++)
                    VAR_10->sub_packet_lengths[VAR_24] = FUNC_2(VAR_8);
                VAR_16->audio_pkt_cnt = VAR_10->sub_packet_cnt;
                VAR_10->audiotimestamp = VAR_15;
            } else
                return -1;
        } else {
            VAR_17 = FUNC_0(VAR_8, VAR_12, VAR_11);
            if (VAR_17 < 0)
                return VAR_17;
            FUNC_5(VAR_9, VAR_12);
        }
    } else {
        VAR_17 = FUNC_0(VAR_8, VAR_12, VAR_11);
        if (VAR_17 < 0)
            return VAR_17;
    }

    VAR_12->stream_index = VAR_9->index;

    VAR_12->pts = VAR_15;
    if (VAR_14 & 2)
        VAR_12->flags |= VAR_4;

    return VAR_9->codecpar->codec_type == VAR_1 ? VAR_16->audio_pkt_cnt : 0;
}
