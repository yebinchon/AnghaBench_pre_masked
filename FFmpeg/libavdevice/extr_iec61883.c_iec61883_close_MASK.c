
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iec61883_data {scalar_t__ type; int raw1394; int bandwidth; int channel; int input_port; int output_port; int node; TYPE_1__* queue_first; TYPE_1__* dv_demux; int iec61883_dv; int mpeg_demux; int iec61883_mpeg2; int mutex; int cond; int receive_task_thread; scalar_t__ thread_loop; } ;
struct TYPE_6__ {struct iec61883_data* priv_data; } ;
struct TYPE_5__ {struct TYPE_5__* buf; struct TYPE_5__* next; } ;
typedef TYPE_1__ DVPacket ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_2)
{
    struct iec61883_data *VAR_3 = VAR_2->priv_data;
    if (VAR_0 && VAR_3->type == VAR_1) {
        FUNC_6(VAR_3->iec61883_mpeg2);
        FUNC_5(VAR_3->iec61883_mpeg2);
        FUNC_1(VAR_3->mpeg_demux);
    } else {
        FUNC_4(VAR_3->iec61883_dv);
        FUNC_3(VAR_3->iec61883_dv);
        FUNC_0(&VAR_3->dv_demux);
    }
    while (VAR_3->queue_first) {
        DVPacket *VAR_4 = VAR_3->queue_first;
        VAR_3->queue_first = VAR_4->next;
        FUNC_0(&VAR_4->buf);
        FUNC_0(&VAR_4);
    }

    FUNC_2(VAR_3->raw1394, VAR_3->node, VAR_3->output_port,
                            FUNC_11(VAR_3->raw1394),
                            VAR_3->input_port, VAR_3->channel, VAR_3->bandwidth);

    FUNC_10(VAR_3->raw1394);

    return 0;
}
