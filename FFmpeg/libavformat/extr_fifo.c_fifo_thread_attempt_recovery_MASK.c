
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_22__ {TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_21__ {size_t stream_index; scalar_t__ pts; } ;
struct TYPE_20__ {scalar_t__ recovery_wait_time; scalar_t__ drop_pkts_on_overflow; scalar_t__ restart_with_keyframe; scalar_t__ max_recovery_attempts; scalar_t__ recovery_wait_streamtime; int write_trailer_ret; } ;
struct TYPE_19__ {TYPE_5__ pkt; } ;
struct TYPE_18__ {scalar_t__ last_recovery_ts; int drop_until_keyframe; scalar_t__ recovery_nr; scalar_t__ header_written; TYPE_6__* avf; } ;
struct TYPE_17__ {int time_base; } ;
typedef TYPE_2__ FifoThreadContext ;
typedef TYPE_3__ FifoMessage ;
typedef TYPE_4__ FifoContext ;
typedef int AVRational ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_6__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_5__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_9(FifoThreadContext *VAR_5, FifoMessage *VAR_6, int VAR_7)
{
    AVFormatContext *VAR_8 = VAR_5->avf;
    FifoContext *VAR_9 = VAR_8->priv_data;
    AVPacket *VAR_10 = &VAR_6->pkt;
    int64_t VAR_11;
    int VAR_12;

    if (!FUNC_8(VAR_9, VAR_7)) {
        VAR_12 = VAR_7;
        goto fail;
    }

    if (VAR_5->header_written) {
        VAR_9->write_trailer_ret = FUNC_6(VAR_5);
        VAR_5->header_written = 0;
    }

    if (!VAR_5->recovery_nr) {
        VAR_5->last_recovery_ts = VAR_9->recovery_wait_streamtime ?
                                VAR_2 : 0;
    } else {
        if (VAR_9->recovery_wait_streamtime) {
            if (VAR_5->last_recovery_ts == VAR_2) {
                AVRational VAR_13 = VAR_8->streams[VAR_10->stream_index]->time_base;
                VAR_11 = FUNC_3(VAR_10->pts - VAR_5->last_recovery_ts,
                                                   VAR_13, VAR_3);
            } else {

                VAR_11 = VAR_9->recovery_wait_time;
            }
        } else {
            VAR_11 = FUNC_1() - VAR_5->last_recovery_ts;
        }

        if (VAR_11 < VAR_9->recovery_wait_time)
            return FUNC_0(VAR_4);
    }

    VAR_5->recovery_nr++;

    if (VAR_9->max_recovery_attempts) {
        FUNC_2(VAR_8, VAR_1, "Recovery attempt #%d/%d\n",
               VAR_5->recovery_nr, VAR_9->max_recovery_attempts);
    } else {
        FUNC_2(VAR_8, VAR_1, "Recovery attempt #%d\n",
               VAR_5->recovery_nr);
    }

    if (VAR_9->restart_with_keyframe && VAR_9->drop_pkts_on_overflow)
        VAR_5->drop_until_keyframe = 1;

    VAR_12 = FUNC_4(VAR_5, VAR_6);
    if (VAR_12 < 0) {
        if (FUNC_8(VAR_9, VAR_12)) {
            return FUNC_5(VAR_5, VAR_10, VAR_12);
        } else {
            goto fail;
        }
    } else {
        FUNC_2(VAR_8, VAR_0, "Recovery successful\n");
        VAR_5->recovery_nr = 0;
    }

    return 0;

fail:
    FUNC_7(VAR_6);
    return VAR_12;
}
