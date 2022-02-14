
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {scalar_t__ output_ts_offset; TYPE_2__** streams; TYPE_1__* internal; } ;
struct TYPE_11__ {int stream_index; scalar_t__ dts; scalar_t__ pts; } ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_4__ pkt; } ;
struct TYPE_9__ {scalar_t__ mux_ts_offset; int time_base; } ;
struct TYPE_8__ {TYPE_3__* packet_buffer; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacketList ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

int FUNC_2(AVFormatContext *VAR_3, int VAR_4,
                        AVPacket *VAR_5, int VAR_6)
{
    AVPacketList *VAR_7 = VAR_3->internal->packet_buffer;
    while (VAR_7) {
        if (VAR_7->pkt.stream_index == VAR_4) {
            *VAR_5 = VAR_7->pkt;
            if (VAR_6) {
                AVStream *VAR_8 = VAR_3->streams[VAR_5->stream_index];
                int64_t VAR_9 = VAR_8->mux_ts_offset;

                if (VAR_3->output_ts_offset)
                    VAR_9 += FUNC_1(VAR_3->output_ts_offset, VAR_1, VAR_8->time_base);

                if (VAR_5->dts != VAR_0)
                    VAR_5->dts += VAR_9;
                if (VAR_5->pts != VAR_0)
                    VAR_5->pts += VAR_9;
            }
            return 0;
        }
        VAR_7 = VAR_7->next;
    }
    return FUNC_0(VAR_2);
}
