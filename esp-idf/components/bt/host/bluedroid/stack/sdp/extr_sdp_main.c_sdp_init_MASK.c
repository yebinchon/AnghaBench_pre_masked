
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSDP_CB ;
struct TYPE_7__ {int * pL2CA_TxComplete_Cb; int * pL2CA_CongestionStatus_Cb; int pL2CA_DataInd_Cb; int * pL2CA_QoSViolationInd_Cb; int pL2CA_DisconnectCfm_Cb; int pL2CA_DisconnectInd_Cb; int pL2CA_ConfigCfm_Cb; int pL2CA_ConfigInd_Cb; int * pL2CA_ConnectPnd_Cb; int pL2CA_ConnectCfm_Cb; int pL2CA_ConnectInd_Cb; } ;
struct TYPE_5__ {int flush_to; void* flush_to_present; void* mtu; void* mtu_present; } ;
struct TYPE_6__ {TYPE_4__ reg_info; int trace_level; int max_recs_per_search; void* max_attr_list_size; TYPE_1__ l2cap_my_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 void* VAR_10 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_2__ VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_5 (void)
{




    FUNC_3 (&VAR_11, 0, sizeof (tSDP_CB));


    VAR_11.l2cap_my_cfg.mtu_present = VAR_10;
    VAR_11.l2cap_my_cfg.mtu = VAR_6;
    VAR_11.l2cap_my_cfg.flush_to_present = VAR_10;
    VAR_11.l2cap_my_cfg.flush_to = VAR_3;

    VAR_11.max_attr_list_size = VAR_6 - 16;
    VAR_11.max_recs_per_search = VAR_5;



    if (!FUNC_0 (VAR_2, VAR_9, VAR_0,
                               VAR_8, VAR_7, 0, 0)) {
        FUNC_2 ("Security Registration Server failed\n");
        return;
    }




    if (!FUNC_0 (VAR_10, VAR_9, VAR_0,
                               VAR_8, VAR_7, 0, 0)) {
        FUNC_2 ("Security Registration for Client failed\n");
        return;
    }





    VAR_11.trace_level = VAR_1;


    VAR_11.reg_info.pL2CA_ConnectInd_Cb = VAR_16;
    VAR_11.reg_info.pL2CA_ConnectCfm_Cb = VAR_15;
    VAR_11.reg_info.pL2CA_ConnectPnd_Cb = ((void*)0);
    VAR_11.reg_info.pL2CA_ConfigInd_Cb = VAR_14;
    VAR_11.reg_info.pL2CA_ConfigCfm_Cb = VAR_13;
    VAR_11.reg_info.pL2CA_DisconnectInd_Cb = VAR_19;
    VAR_11.reg_info.pL2CA_DisconnectCfm_Cb = VAR_18;
    VAR_11.reg_info.pL2CA_QoSViolationInd_Cb = ((void*)0);
    VAR_11.reg_info.pL2CA_DataInd_Cb = VAR_17;
    VAR_11.reg_info.pL2CA_CongestionStatus_Cb = ((void*)0);
    VAR_11.reg_info.pL2CA_TxComplete_Cb = ((void*)0);


    if (!FUNC_1 (VAR_7, &VAR_11.reg_info)) {
        FUNC_2 ("SDP Registration failed\n");
    }
}
