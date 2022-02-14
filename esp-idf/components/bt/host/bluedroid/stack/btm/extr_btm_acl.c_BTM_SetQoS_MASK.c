
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_8__ {int hci_handle; } ;
typedef TYPE_2__ tACL_CONN ;
struct TYPE_7__ {int qossu_timer; int * p_qossu_cmpl_cb; } ;
struct TYPE_10__ {TYPE_1__ devcb; TYPE_2__* acl_db; } ;
struct TYPE_9__ {int delay_variation; int latency; int peak_bandwidth; int token_rate; int service_type; int qos_flags; } ;
typedef TYPE_3__ FLOW_SPEC ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 TYPE_4__ VAR_7 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

tBTM_STATUS FUNC_5 (BD_ADDR VAR_8, FLOW_SPEC *VAR_9, tBTM_CMPL_CB *VAR_10)
{
    tACL_CONN *VAR_11 = &VAR_7.acl_db[0];

    FUNC_0 ("BTM_SetQoS: BdAddr: %02x%02x%02x%02x%02x%02x\n",
                   VAR_8[0], VAR_8[1], VAR_8[2],
                   VAR_8[3], VAR_8[4], VAR_8[5]);


    if (VAR_7.devcb.p_qossu_cmpl_cb) {
        return (VAR_0);
    }

    if ( (VAR_11 = FUNC_1(VAR_8, VAR_6)) != ((void*)0)) {
        FUNC_3 (&VAR_7.devcb.qossu_timer, VAR_5, VAR_2);
        VAR_7.devcb.p_qossu_cmpl_cb = VAR_10;

        if (!FUNC_2 (VAR_11->hci_handle, VAR_9->qos_flags, VAR_9->service_type,
                                   VAR_9->token_rate, VAR_9->peak_bandwidth,
                                   VAR_9->latency, VAR_9->delay_variation)) {
            VAR_7.devcb.p_qossu_cmpl_cb = ((void*)0);
            FUNC_4(&VAR_7.devcb.qossu_timer);
            return (VAR_3);
        } else {
            return (VAR_1);
        }
    }


    return (VAR_4);
}
