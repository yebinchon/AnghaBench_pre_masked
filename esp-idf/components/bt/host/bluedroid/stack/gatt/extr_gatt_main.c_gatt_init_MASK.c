
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int app_start_hdl; int gap_start_hdl; int gatt_start_hdl; } ;
struct TYPE_8__ {int max_transmit; int rtrans_tout; int mon_tout; int mps; int tx_win_sz; int mode; } ;
struct TYPE_10__ {int default_idle_tout; TYPE_2__ hdl_cfg; int pL2CA_FixedCong_Cb; int pL2CA_FixedData_Cb; int pL2CA_FixedConn_Cb; TYPE_1__ fixed_chnl_opts; void* pending_new_srv_start_q; void* srv_chg_clt_q; void* sign_op_queue; int def_mtu_size; int trace_level; } ;
typedef TYPE_3__ tL2CAP_FIXED_CHNL_REG ;
typedef int tL2CAP_APPL_INFO ;
typedef int tGATT_CB ;
struct TYPE_11__ {int local_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_4 (int ) ;
 TYPE_3__ VAR_16 ;
 int * VAR_17 ;
 TYPE_5__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8 (void)
{
    tL2CAP_FIXED_CHNL_REG VAR_22;



    FUNC_6 (&VAR_16, 0, sizeof(tGATT_CB));
    FUNC_6 (&VAR_22, 0, sizeof(tL2CAP_FIXED_CHNL_REG));




    VAR_16.trace_level = VAR_3;

    VAR_16.def_mtu_size = VAR_6;
    VAR_16.sign_op_queue = FUNC_4(VAR_13);
    VAR_16.srv_chg_clt_q = FUNC_4(VAR_13);
    VAR_16.pending_new_srv_start_q = FUNC_4(VAR_13);

    VAR_22.fixed_chnl_opts.mode = VAR_12;
    VAR_22.fixed_chnl_opts.max_transmit = 0xFF;
    VAR_22.fixed_chnl_opts.rtrans_tout = 2000;
    VAR_22.fixed_chnl_opts.mon_tout = 12000;
    VAR_22.fixed_chnl_opts.mps = 670;
    VAR_22.fixed_chnl_opts.tx_win_sz = 1;

    VAR_22.pL2CA_FixedConn_Cb = VAR_20;
    VAR_22.pL2CA_FixedData_Cb = VAR_21;
    VAR_22.pL2CA_FixedCong_Cb = VAR_19;
    VAR_22.default_idle_tout = 0xffff;

    FUNC_3 (VAR_11, &VAR_22);



    if (!FUNC_2 (VAR_2, (tL2CAP_APPL_INFO *) &VAR_15)) {
        FUNC_1 ("ATT Dynamic Registration failed");
    }

    FUNC_0(VAR_14, "", VAR_1, VAR_0, VAR_2, 0, 0);
    FUNC_0(VAR_4, "", VAR_1, VAR_0, VAR_2, 0, 0);

    VAR_16.hdl_cfg.gatt_start_hdl = VAR_8;
    VAR_16.hdl_cfg.gap_start_hdl = VAR_7;
    VAR_16.hdl_cfg.app_start_hdl = VAR_5;

    FUNC_5();


    VAR_18.local_mtu = VAR_10;
}
