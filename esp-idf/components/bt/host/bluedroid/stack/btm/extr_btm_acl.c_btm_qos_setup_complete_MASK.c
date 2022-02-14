
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int delay_variation; int latency; int peak_bandwidth; int token_rate; int service_type; int qos_flags; } ;
struct TYPE_12__ {TYPE_2__ flow; int handle; int status; } ;
typedef TYPE_3__ tBTM_QOS_SETUP_CMPL ;
typedef int (* tBTM_CMPL_CB ) (TYPE_3__*) ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {int (* p_qossu_cmpl_cb ) (TYPE_3__*) ;int qossu_timer; } ;
struct TYPE_14__ {TYPE_1__ devcb; } ;
struct TYPE_13__ {int delay_variation; int latency; int peak_bandwidth; int token_rate; int service_type; int qos_flags; } ;
typedef TYPE_5__ FLOW_SPEC ;


 int FUNC_0 (char*,...) ;
 TYPE_9__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4 (UINT8 VAR_1, UINT16 VAR_2, FLOW_SPEC *VAR_3)
{
    tBTM_CMPL_CB *VAR_4 = &VAR_0.devcb.p_qossu_cmpl_cb;
    tBTM_QOS_SETUP_CMPL VAR_5;
    FUNC_0 ("btm_qos_setup_complete\n");
    FUNC_1 (&VAR_0.devcb.qossu_timer);

    VAR_0.devcb.p_qossu_cmpl_cb = ((void*)0);

    if (VAR_4) {
        FUNC_2(&VAR_5, 0, sizeof(tBTM_QOS_SETUP_CMPL));
        VAR_5.status = VAR_1;
        VAR_5.handle = VAR_2;
        if (VAR_3 != ((void*)0)) {
            VAR_5.flow.qos_flags = VAR_3->qos_flags;
            VAR_5.flow.service_type = VAR_3->service_type;
            VAR_5.flow.token_rate = VAR_3->token_rate;
            VAR_5.flow.peak_bandwidth = VAR_3->peak_bandwidth;
            VAR_5.flow.latency = VAR_3->latency;
            VAR_5.flow.delay_variation = VAR_3->delay_variation;
        }
        FUNC_0 ("BTM: p_flow->delay_variation: 0x%02x\n",
                         VAR_5.flow.delay_variation);
        (*VAR_4)(&VAR_5);
    }
}
