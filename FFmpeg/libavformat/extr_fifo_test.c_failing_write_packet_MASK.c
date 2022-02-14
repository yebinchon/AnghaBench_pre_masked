
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int interrupt_callback; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int pts; scalar_t__ data; } ;
struct TYPE_9__ {int pts_written_nr; int * pts_written; int flush_count; } ;
struct TYPE_8__ {int ret; scalar_t__ sleep_time; int recover_after; } ;
typedef TYPE_1__ FailingMuxerPacketData ;
typedef TYPE_2__ FailingMuxerContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    FailingMuxerContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 0;
    if (!VAR_3) {
        VAR_4->flush_count++;
    } else {
        FailingMuxerPacketData *VAR_6 = (FailingMuxerPacketData*) VAR_3->data;

        if (!VAR_6->recover_after) {
            VAR_6->ret = 0;
        } else {
            VAR_6->recover_after--;
        }

        VAR_5 = VAR_6->ret;

        if (VAR_6->sleep_time) {
            int64_t VAR_7 = 0;
            while (VAR_7 < VAR_6->sleep_time) {
                if (FUNC_2(&VAR_2->interrupt_callback))
                    return VAR_0;
                FUNC_1(VAR_1);
                VAR_7 += VAR_1;
            }
        }

        if (!VAR_5) {
            VAR_4->pts_written[VAR_4->pts_written_nr++] = VAR_3->pts;
            FUNC_0(VAR_3);
        }
    }
    return VAR_5;
}
