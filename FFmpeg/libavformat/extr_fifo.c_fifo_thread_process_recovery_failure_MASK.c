
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv_data; } ;
struct TYPE_10__ {scalar_t__ pts; } ;
struct TYPE_9__ {scalar_t__ max_recovery_attempts; scalar_t__ recovery_wait_streamtime; } ;
struct TYPE_8__ {scalar_t__ last_recovery_ts; scalar_t__ recovery_nr; TYPE_4__* avf; } ;
typedef TYPE_1__ FifoThreadContext ;
typedef TYPE_2__ FifoContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(FifoThreadContext *VAR_5, AVPacket *VAR_6,
                                                int VAR_7)
{
    AVFormatContext *VAR_8 = VAR_5->avf;
    FifoContext *VAR_9 = VAR_8->priv_data;
    int VAR_10;

    FUNC_3(VAR_8, VAR_1, "Recovery failed: %s\n",
           FUNC_1(VAR_7));

    if (VAR_9->recovery_wait_streamtime) {
        if (VAR_6->pts == VAR_3)
            FUNC_3(VAR_8, VAR_2, "Packet does not contain presentation"
                   " timestamp, recovery will be attempted immediately");
        VAR_5->last_recovery_ts = VAR_6->pts;
    } else {
        VAR_5->last_recovery_ts = FUNC_2();
    }

    if (VAR_9->max_recovery_attempts &&
        VAR_5->recovery_nr >= VAR_9->max_recovery_attempts) {
        FUNC_3(VAR_8, VAR_0,
               "Maximal number of %d recovery attempts reached.\n",
               VAR_9->max_recovery_attempts);
        VAR_10 = VAR_7;
    } else {
        VAR_10 = FUNC_0(VAR_4);
    }

    return VAR_10;
}
