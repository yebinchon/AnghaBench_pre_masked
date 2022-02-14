
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_23__ {int flags; TYPE_2__* iformat; TYPE_3__** streams; TYPE_1__* internal; } ;
struct TYPE_22__ {scalar_t__ dts; size_t stream_index; scalar_t__ pts; scalar_t__ duration; int flags; int pos; } ;
struct TYPE_21__ {struct TYPE_21__* next; TYPE_5__ pkt; } ;
struct TYPE_20__ {int pts_wrap_bits; scalar_t__ discard; int index; } ;
struct TYPE_19__ {int flags; } ;
struct TYPE_18__ {int packet_buffer_end; TYPE_4__* packet_buffer; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacketList ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,unsigned long long) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__**,int *,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__**,int *,TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__*) ;

int FUNC_10(AVFormatContext *VAR_8, AVPacket *VAR_9)
{
    const int VAR_10 = VAR_8->flags & VAR_1;
    int VAR_11 = 0;
    int VAR_12;
    AVStream *VAR_13;

    if (!VAR_10) {
        VAR_12 = VAR_8->internal->packet_buffer
              ? FUNC_5(&VAR_8->internal->packet_buffer,
                                        &VAR_8->internal->packet_buffer_end, VAR_9)
              : FUNC_9(VAR_8, VAR_9);
        if (VAR_12 < 0)
            return VAR_12;
        goto return_packet;
    }

    for (;;) {
        AVPacketList *VAR_14 = VAR_8->internal->packet_buffer;

        if (VAR_14) {
            AVPacket *VAR_15 = &VAR_14->pkt;

            if (VAR_15->dts != VAR_4) {
                int VAR_16 = VAR_8->streams[VAR_15->stream_index]->pts_wrap_bits;


                int64_t VAR_17 = VAR_15->dts;
                FUNC_2(VAR_16 <= 64);
                while (VAR_14 && VAR_15->pts == VAR_4) {
                    if (VAR_14->pkt.stream_index == VAR_15->stream_index &&
                        FUNC_3(VAR_15->dts, VAR_14->pkt.dts, 2ULL << (VAR_16 - 1)) < 0) {
                        if (FUNC_3(VAR_14->pkt.pts, VAR_14->pkt.dts, 2ULL << (VAR_16 - 1))) {

                            VAR_15->pts = VAR_14->pkt.dts;
                        }
                        if (VAR_17 != VAR_4) {

                            VAR_17 = VAR_14->pkt.dts;
                        }
                    }
                    VAR_14 = VAR_14->next;
                }
                if (VAR_11 && VAR_15->pts == VAR_4 && VAR_17 != VAR_4) {





                    VAR_15->pts = VAR_17 + VAR_15->duration;
                }
                VAR_14 = VAR_8->internal->packet_buffer;
            }


            VAR_13 = VAR_8->streams[VAR_15->stream_index];
            if (!(VAR_15->pts == VAR_4 && VAR_13->discard < VAR_0 &&
                  VAR_15->dts != VAR_4 && !VAR_11)) {
                VAR_12 = FUNC_5(&VAR_8->internal->packet_buffer,
                                               &VAR_8->internal->packet_buffer_end, VAR_9);
                goto return_packet;
            }
        }

        VAR_12 = FUNC_9(VAR_8, VAR_9);
        if (VAR_12 < 0) {
            if (VAR_14 && VAR_12 != FUNC_0(VAR_6)) {
                VAR_11 = 1;
                continue;
            } else
                return VAR_12;
        }

        VAR_12 = FUNC_6(&VAR_8->internal->packet_buffer,
                                 &VAR_8->internal->packet_buffer_end,
                                 VAR_9, 0);
        if (VAR_12 < 0) {
            FUNC_4(VAR_9);
            return VAR_12;
        }
    }

return_packet:

    VAR_13 = VAR_8->streams[VAR_9->stream_index];
    if ((VAR_8->iformat->flags & VAR_2) && VAR_9->flags & VAR_5) {
        FUNC_7(VAR_8, VAR_13->index);
        FUNC_1(VAR_13, VAR_9->pos, VAR_9->dts, 0, 0, VAR_3);
    }

    if (FUNC_8(VAR_9->dts))
        VAR_9->dts -= VAR_7;
    if (FUNC_8(VAR_9->pts))
        VAR_9->pts -= VAR_7;

    return VAR_12;
}
