
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_22__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_38__ {int nb_streams; int flags; TYPE_3__* internal; scalar_t__ use_wallclock_as_timestamps; TYPE_4__** streams; TYPE_2__* iformat; } ;
struct TYPE_37__ {scalar_t__ size; int flags; unsigned int stream_index; void* pts; void* dts; int * data; } ;
struct TYPE_31__ {size_t stream_index; } ;
struct TYPE_36__ {TYPE_1__ pkt; } ;
struct TYPE_35__ {scalar_t__ request_probe; scalar_t__ pts_wrap_behavior; int time_base; void* cur_dts; void* start_time; void* first_dts; scalar_t__ probe_packets; } ;
struct TYPE_34__ {scalar_t__ raw_packet_buffer_remaining_size; TYPE_22__* raw_packet_buffer_end; TYPE_5__* raw_packet_buffer; } ;
struct TYPE_33__ {int (* read_packet ) (TYPE_7__*,TYPE_6__*) ;} ;
struct TYPE_32__ {TYPE_6__ pkt; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacketList ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*,int ,char*,unsigned int) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 void* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_5__**,TYPE_22__**,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__**,TYPE_22__**,TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (TYPE_7__*,TYPE_4__*,TYPE_6__ const*) ;
 int FUNC_13 (TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_14 (TYPE_7__*,TYPE_4__*,size_t,TYPE_6__*) ;
 void* FUNC_15 (TYPE_4__*,void*) ;

int FUNC_16(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    AVStream *VAR_12;

    VAR_8->data = ((void*)0);
    VAR_8->size = 0;
    FUNC_3(VAR_8);

    for (;;) {
        AVPacketList *VAR_13 = VAR_7->internal->raw_packet_buffer;
        const AVPacket *VAR_14;

        if (VAR_13) {
            VAR_12 = VAR_7->streams[VAR_13->pkt.stream_index];
            if (VAR_7->internal->raw_packet_buffer_remaining_size <= 0)
                if ((VAR_11 = FUNC_12(VAR_7, VAR_12, ((void*)0))) < 0)
                    return VAR_11;
            if (VAR_12->request_probe <= 0) {
                FUNC_8(&VAR_7->internal->raw_packet_buffer,
                                   &VAR_7->internal->raw_packet_buffer_end, VAR_8);
                VAR_7->internal->raw_packet_buffer_remaining_size += VAR_8->size;
                return 0;
            }
        }

        VAR_9 = VAR_7->iformat->read_packet(VAR_7, VAR_8);
        if (VAR_9 < 0) {
            FUNC_6(VAR_8);




            if (VAR_9 == VAR_6)
                continue;
            if (!VAR_13 || VAR_9 == FUNC_0(VAR_5))
                return VAR_9;
            for (VAR_10 = 0; VAR_10 < VAR_7->nb_streams; VAR_10++) {
                VAR_12 = VAR_7->streams[VAR_10];
                if (VAR_12->probe_packets || VAR_12->request_probe > 0)
                    if ((VAR_11 = FUNC_12(VAR_7, VAR_12, ((void*)0))) < 0)
                        return VAR_11;
                FUNC_1(VAR_12->request_probe <= 0);
            }
            continue;
        }

        VAR_11 = FUNC_5(VAR_8);
        if (VAR_11 < 0) {
            FUNC_6(VAR_8);
            return VAR_11;
        }

        if ((VAR_7->flags & VAR_0) &&
            (VAR_8->flags & VAR_2)) {
            FUNC_4(VAR_7, VAR_1,
                   "Dropped corrupted packet (stream = %d)\n",
                   VAR_8->stream_index);
            FUNC_6(VAR_8);
            continue;
        }

        FUNC_1(VAR_8->stream_index < (unsigned)VAR_7->nb_streams &&
                   "Invalid stream index.\n");

        VAR_12 = VAR_7->streams[VAR_8->stream_index];

        if (FUNC_14(VAR_7, VAR_12, VAR_8->stream_index, VAR_8) && VAR_12->pts_wrap_behavior == VAR_3) {

            if (!FUNC_11(VAR_12->first_dts))
                VAR_12->first_dts = FUNC_15(VAR_12, VAR_12->first_dts);
            if (!FUNC_11(VAR_12->start_time))
                VAR_12->start_time = FUNC_15(VAR_12, VAR_12->start_time);
            if (!FUNC_11(VAR_12->cur_dts))
                VAR_12->cur_dts = FUNC_15(VAR_12, VAR_12->cur_dts);
        }

        VAR_8->dts = FUNC_15(VAR_12, VAR_8->dts);
        VAR_8->pts = FUNC_15(VAR_12, VAR_8->pts);

        FUNC_10(VAR_7, VAR_12);


        if (VAR_7->use_wallclock_as_timestamps)
            VAR_8->dts = VAR_8->pts = FUNC_7(FUNC_2(), VAR_4, VAR_12->time_base);

        if (!VAR_13 && VAR_12->request_probe <= 0)
            return VAR_9;

        VAR_11 = FUNC_9(&VAR_7->internal->raw_packet_buffer,
                                 &VAR_7->internal->raw_packet_buffer_end,
                                 VAR_8, 0);
        if (VAR_11 < 0) {
            FUNC_6(VAR_8);
            return VAR_11;
        }
        VAR_14 = &VAR_7->internal->raw_packet_buffer_end->pkt;
        VAR_7->internal->raw_packet_buffer_remaining_size -= VAR_14->size;

        if ((VAR_11 = FUNC_12(VAR_7, VAR_12, VAR_14)) < 0)
            return VAR_11;
    }
}
