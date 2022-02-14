
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aof_delayed_fsync; scalar_t__ stat_net_output_bytes; scalar_t__ stat_net_input_bytes; TYPE_1__* inst_metric; scalar_t__ stat_rejected_conn; scalar_t__ stat_fork_rate; scalar_t__ stat_fork_time; scalar_t__ stat_numconnections; scalar_t__ stat_numcommands; } ;
struct TYPE_3__ {int samples; scalar_t__ last_sample_count; int last_sample_time; scalar_t__ idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;

void FUNC_2(void) {
    int VAR_2;

    VAR_1.stat_numcommands = 0;
    VAR_1.stat_numconnections = 0;
    VAR_1.stat_fork_time = 0;
    VAR_1.stat_fork_rate = 0;
    VAR_1.stat_rejected_conn = 0;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_1.inst_metric[VAR_2].idx = 0;
        VAR_1.inst_metric[VAR_2].last_sample_time = FUNC_1();
        VAR_1.inst_metric[VAR_2].last_sample_count = 0;
        FUNC_0(VAR_1.inst_metric[VAR_2].samples,0,
            sizeof(VAR_1.inst_metric[VAR_2].samples));
    }
    VAR_1.stat_net_input_bytes = 0;
    VAR_1.stat_net_output_bytes = 0;
    VAR_1.aof_delayed_fsync = 0;
}
