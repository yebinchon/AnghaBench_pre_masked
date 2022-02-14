
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {int overflow_flag; int overflow_flag_lock; scalar_t__ drop_pkts_on_overflow; int queue; } ;
struct TYPE_7__ {int pkt; int type; } ;
typedef TYPE_1__ FifoMessage ;
typedef TYPE_2__ FifoContext ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    FifoContext *VAR_7 = VAR_5->priv_data;
    FifoMessage VAR_8 = {.type = VAR_6 ? VAR_4 : VAR_3};
    int VAR_9;

    if (VAR_6) {
        FUNC_1(&VAR_8.pkt);
        VAR_9 = FUNC_3(&VAR_8.pkt,VAR_6);
        if (VAR_9 < 0)
            return VAR_9;
    }

    VAR_9 = FUNC_5(VAR_7->queue, &VAR_8,
                                       VAR_7->drop_pkts_on_overflow ?
                                       VAR_1 : 0);
    if (VAR_9 == FUNC_0(VAR_2)) {
        uint8_t VAR_10 = 0;




        FUNC_6(&VAR_7->overflow_flag_lock);
        if (!VAR_7->overflow_flag)
            VAR_7->overflow_flag = VAR_10 = 1;
        FUNC_7(&VAR_7->overflow_flag_lock);

        if (VAR_10)
            FUNC_2(VAR_5, VAR_0, "FIFO queue full\n");
        VAR_9 = 0;
        goto fail;
    } else if (VAR_9 < 0) {
        goto fail;
    }

    return VAR_9;
fail:
    if (VAR_6)
        FUNC_4(&VAR_8.pkt);
    return VAR_9;
}
