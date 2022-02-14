
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {TYPE_3__* priv_data; } ;
struct TYPE_11__ {scalar_t__ drop_pkts_on_overflow; scalar_t__ recovery_wait_time; int recovery_wait_streamtime; } ;
struct TYPE_10__ {scalar_t__ type; int pkt; } ;
struct TYPE_9__ {scalar_t__ recovery_nr; scalar_t__ last_recovery_ts; TYPE_4__* avf; } ;
typedef TYPE_1__ FifoThreadContext ;
typedef TYPE_2__ FifoMessage ;
typedef TYPE_3__ FifoContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(FifoThreadContext *VAR_2, FifoMessage *VAR_3, int VAR_4)
{
    AVFormatContext *VAR_5 = VAR_2->avf;
    FifoContext *VAR_6 = VAR_5->priv_data;
    int VAR_7;

    do {
        if (!VAR_6->recovery_wait_streamtime && VAR_2->recovery_nr > 0) {
            int64_t VAR_8 = FUNC_3() - VAR_2->last_recovery_ts;
            int64_t VAR_9 = FUNC_1(0, VAR_6->recovery_wait_time - VAR_8);
            if (VAR_9)
                FUNC_5(FUNC_2(10000, VAR_9));
        }

        VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4);
    } while (VAR_7 == FUNC_0(VAR_0) && !VAR_6->drop_pkts_on_overflow);

    if (VAR_7 == FUNC_0(VAR_0) && VAR_6->drop_pkts_on_overflow) {
        if (VAR_3->type == VAR_1)
            FUNC_4(&VAR_3->pkt);
        VAR_7 = 0;
    }

    return VAR_7;
}
